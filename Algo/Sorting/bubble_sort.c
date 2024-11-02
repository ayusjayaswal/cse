#include <stdio.h>

// O(n*n) Worst time, O(n) Best
// In-place Sorting O(1) Space
// Stable Sorting

void swap(int arr[], int x, int y) {
    int tmp = arr[x];
    arr[x] = arr[y];
    arr[y] = tmp;
}

void bubble_sort_faster(int arr[], int n){
  for(int i = 0;i<n-1;i++){
    int swapped = 0;
    for(int j = 0;j<n -i -1 ;j++){
      if(arr[j] > arr[j+1]){
	swap(arr, j, j+1);
	swapped++;
	  };
    }
    if(!swapped)break;
  }
}
void bubble_sort(int arr[], int n){
  for(int i = 0;i<n-1;i++){
    for(int j = 0;j<n -i -1 ;j++){
      if(arr[j] > arr[j+1])swap(arr, j, j+1);
    }
  }
}
void sort(int *arr, int n) {
  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
  puts("");
  bubble_sort_faster(arr, n);
  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
}

int main() {
  int a[] = {1, 6, 1, 3, 9, 1, 4, 7, 2, 9};
  sort(a, 10);
}
