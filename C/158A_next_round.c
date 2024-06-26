#include <stdio.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    int scores[50]; // Assuming the maximum value of n is 50
    for (int i = 0; i < n; i++) {
        scanf("%d", &scores[i]);
    }
    int cutoff_score = scores[k - 1];
    int participants_advanced = 0;
    // Count the number of participants who advance
    for (int i = 0; i < n; i++) {
        if (scores[i] >= cutoff_score && scores[i] > 0) {
            participants_advanced++;
        } else {
            break; // The scores are non-increasing, so no need to check further
        }
    }
    printf("%d\n", participants_advanced);
    return 0;
}
