#include <stdio.h>

int bin_search(int hay[], int l, int r, int needle) {
  if (l < r) {
    int mid = l + (r - l) / 2;
    if (hay[mid] == needle)
      return mid;
    else if (hay[mid] > needle)
      return bin_search(hay, l, mid, needle);
    else
      return bin_search(hay, mid + 1, r, needle);
  }
  return -1;
}

int main() {
  int hay[] = {1, 2, 4, 5, 6, 7, 8, 9, 11, 13, 15, 16, 17, 19};
  printf("%d", bin_search(hay, 0, 13, 11));
}
