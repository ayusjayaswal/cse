#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  int a[n], b[n];

  // Read input values into array 'a'
  for (int i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }

  // Initialize array 'b' with invalid values
  for (int i = 0; i < n; i++) {
    b[i] = 0; // Use -1 to indicate an uninitialized element
  }

  // Populate array 'b' with indices
  for (int i = 0; i < n; i++) {
    if (a[i] > 0 && a[i] < n) {
      b[a[i]] = i;
    }
  }

  // Print the values of array 'b'
  for (int i = 0; i < n; i++) {
    printf("%d ", b[i]);
  }

  return 0;
}
