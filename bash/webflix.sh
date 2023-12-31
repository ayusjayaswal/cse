#!/bin/bash

# Check if dependencies are installed
check_dependency() {
    command -v "$1" >/dev/null 2>&1 || {
        echo >&2 "$1 is required but not installed. Aborting."
        exit 1
    }
}
# Check if required dependencies are installed
check_dependency dmenu
check_dependency curl
check_dependency st
check_dependency webtorrent
check_dependency transmission-daemon
check_dependency transmission-remote
check_dependency xclip
check_dependency notify-send
# Input a movie variable
search=$(dmenu -i -p "Search a movie" < /dev/null)
# Change the search variable spaces with '+'
query=$(printf "%s" "$search" | tr ' ' '+')
# If statement to see if search variable is NULL
if [ -z "$search" ]; then
    exit 0
fi
site="https://1337x.to/search/$query/1/"
magnet="https://1337x.to/"

# Search the movie on 1337x and send output to dmenu prompt
movie=$(curl -s "$site" | grep -o 'torrent/[^"]*' | dmenu -i -l 20 -p 'Which movie?')

# If statement to see if movie variable is NULL
if [ -z "$movie" ]; then
    echo "No movie selected. Aborting."
    exit 1
fi

magnetlink=$(curl -s "${magnet}${movie}" | grep -Po 'magnet:[^"]*' | head -n 1)

# If statement to see if magnetlink variable is NULL
if [ -z "$magnetlink" ]; then
    echo "No magnet link found for the selected movie. Aborting."
    exit 1
else
    choices=$(printf "Watch\nDownload" | dmenu -i -p 'What to do? ')
    if [ "$choices" = "Watch" ]; then
        st -e webtorrent "$magnetlink" --mpv --no-quit
    elif [ "$choices" = "Download" ]; then
        download_location=$(dmenu -p 'Choose download location (leave empty for default):' < /dev/null)
        if [ -z "$download_location" ]; then
            download_location=~/Downloads
        fi
        transmission-daemon
        transmission-remote -a "$magnetlink" -w "$download_location"
        echo "$magnetlink" | xclip -selection clipboard
        notify-send "Torrent Added for $search" "Download Started and Magnet Link added to clipboard"
    else
        echo "Invalid choice. Aborting."
        exit 1
    fi
fi
