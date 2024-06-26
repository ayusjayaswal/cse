#include <stdio.h>
int main() {
  int t,j,key;
  scanf("%d", &t);

  int arr[t];

  for (int i = 0; i < t; i++)
    scanf("%d", &arr[i]);

  for(int i =0;i<t;i++){
    key = arr[i];
    j = i-1;
    while (j>=0 && key < arr[j]){
      arr[j+1]=arr[j];
      j--;
    }
    arr[j+1]=key;
  }

  for (int i = 0; i < t; i++)
    printf("%d",arr[i]);
  return 0;
}

