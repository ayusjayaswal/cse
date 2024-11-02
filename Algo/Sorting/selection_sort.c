#include <stdio.h>

// O(n*n) Worst time, O(n*n) Best
// In-place Sorting O(1) Space

int find_min(int arr[], int i, int n) {
  int min = i;
  for (int j = i + 1; j < n; j++) {
    if (arr[j] < arr[min]) {
      min = j;
    }
  }
  return min;
}
void swap(int arr[], int x, int y) {
  int tmp = arr[y];
  arr[y] = arr[x];
  arr[x] = tmp;
}
void selection_sort(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    int t = find_min(arr, i, n);
    swap(arr, i, t);
  }
}
void sort(int *arr, int n) {
  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
  puts("");
  selection_sort(arr, n);
  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
}

int main() {
  int a[] = {1, 6, 1, 3, 9, 1, 4, 7, 2, 9};
  sort(a, 10);
}
