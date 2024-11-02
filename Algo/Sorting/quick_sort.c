#include <stdio.h>

// O(n*n) Worst Case,O(nlogn)Best average
// In Place O(nlogn) Space Complexity
// Not Stable in usual implementation

void swap(int arr[],int x,int y){
  int tmp = arr[y];
  arr[y]=arr[x];
  arr[x] =tmp;
}
int partition(int arr[],int p,int r){
  int pivot = arr[r];
  int i = p-1;
  for(int j = p;j<r;j++){
    if(arr[j]<=pivot){
      i++;
      swap(arr, i, j);
    }
  }
  swap(arr, i+1, r);
  return i+1;
}
void quick_sort(int arr[],int p,int r){
  if(p<r){
   int q = partition(arr,p,r);
   quick_sort(arr, p, q-1);
   quick_sort(arr, q+1, r);
  }
}

void sort(int *arr, int n) {
  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
  puts("");
  quick_sort(arr,0, n);
  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
}

int main() {
  int a[] = {1, 6, 1, 3, 9, 1, 4, 7, 2, 9};
  sort(a, 10);
}
