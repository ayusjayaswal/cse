#include <bits/stdc++.h>
using namespace std;

bool canKnow(char current, char target) {
    int c = current - '0';
    int t = target - '0';
    return t == c || t == (c + 1) % 10 || t == (c - 1 + 10) % 10;
}

void bfs(string s) {
    int n = s.size();
    vector<bool> visited(n, false);
    queue<pair<int, int>> q; // pair of position and minutes taken

    q.push({0, 0}); // Start from the first character
    visited[0] = true;

    while (!q.empty()) {
        int pos = q.front().first;
        int minutes = q.front().second;
        q.pop();

        if (pos == n - 1) {
            cout << "yes" << "\n" << minutes << '\n';
            return;
        }

        // List of possible moves
        vector<int> next_positions = {pos - 1, pos - 2, pos + 1, pos + 2};
        for (int next_pos : next_positions) {
            if (next_pos >= 0 && next_pos < n && !visited[next_pos] && canKnow(s[pos], s[next_pos])) {
                q.push({next_pos, minutes + 1});
                visited[next_pos] = true;
            }
        }
    }

    cout << "no" << '\n';
}

int main() {
    string s;
    cin >> s;
    bfs(s);
    return 0;
}
