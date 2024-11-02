#include <iostream>
#include <fstream>
#include <string>
#include <cctype> // For isdigit()

int main() {
    std::ifstream file("input.txt"); // Replace with your input file name
    if (!file) {
        std::cerr << "Unable to open file\n";
        return 1;
    }

    std::string line;
    int totalSum = 0;

    // Process each line in the file
    while (std::getline(file, line)) {
        char firstDigit = '\0', lastDigit = '\0';
        
        // Find the first digit in the line
        for (char ch : line) {
            if (isdigit(ch)) {
                firstDigit = ch;
                break;
            }
        }

        // Find the last digit in the line by iterating backwards
        for (int i = line.size() - 1; i >= 0; --i) {
            if (isdigit(line[i])) {
                lastDigit = line[i];
                break;
            }
        }

        // If both a first and last digit were found, calculate the value
        if (firstDigit != '\0' && lastDigit != '\0') {
            int calibrationValue = (firstDigit - '0') * 10 + (lastDigit - '0');
            totalSum += calibrationValue;
        }
    }

    file.close(); // Close the file

    // Output the total sum of calibration values
    std::cout << "Total sum of calibration values: " << totalSum << std::endl;

    return 0;
}
