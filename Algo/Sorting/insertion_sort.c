#include <stdio.h>

// O(n*n) Worst time, O(n) Best
// In-place Sorting O(1) Space
// Stable Sorting

void insertion_sort(int arr[], int n){
  for(int i = 1 ;i<n;i++){
    int key = arr[i];
    int j = i-1;

    while (j>=0 && arr[j]>key) {
      arr[j+1]=arr[j];
      j--;
	}
    arr[j+1]=key; //IMPORTANT DO NOT FORGET
  }
}


void sort(int *arr, int n) {
  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
  puts("");
  insertion_sort(arr, n);
  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
}

int main() {
  int a[] = {1, 6, 1, 3, 9, 1, 4, 7, 2, 9};
  sort(a, 10);
}
