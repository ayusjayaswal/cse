#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int minBurles(vector<int> arr) {
    int n = arr.size();
    int minVal = INT_MAX, maxVal = INT_MIN;
    int minCost = INT_MAX;

    for (int i = 0; i < n; i++) {
        minVal = min(minVal, arr[i]);
        maxVal = max(maxVal, arr[i]);

        if (minVal == maxVal) {
            minCost = min(minCost, i + 1);
        }
    }

    return minCost == INT_MAX ? n : minCost;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int result = minBurles(arr);
        cout << result << endl;
    }

    return 0;
}
