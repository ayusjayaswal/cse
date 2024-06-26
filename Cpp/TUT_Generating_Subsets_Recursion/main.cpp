#include <iostream>
#include <vector>

using namespace std;

// Function to print all subsets of an array
void printSubsets(vector<int>& arr, vector<int>& subset, int index) {
    // Print current subset
    for (int i = 0; i < subset.size(); i++) {
        cout << subset[i] << " ";
    }
    cout << endl;

    // Recur for elements after the current index
    for (int i = index; i < arr.size(); i++) {
        // Include the current element in the subset
        subset.push_back(arr[i]);

        // Recur for next index
        printSubsets(arr, subset, i + 1);

        // Remove the current element from the subset
        subset.pop_back();
    }
}

int main() {
  vector<int> arr = {1, 2, 3, 4};
    vector<int> subset;

    cout << "All subsets of the array: " << endl;
    printSubsets(arr, subset, 0);

    return 0;
}
