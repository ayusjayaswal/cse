#include <math.h>
#include <stdio.h>
#include <stdlib.h>
struct triangle {
  int a;
  int b;
  int c;
};

typedef struct triangle triangle;

// Helper function to calculate the area of a triangle
double calc_area(triangle tr) {
  double s = (tr.a + tr.b + tr.c) / 2.0;
  return sqrt(s * (s - tr.a) * (s - tr.b) * (s - tr.c));
}

// Compare function to be used in qsort
int compare_triangles(const void *a, const void *b) {
  triangle *triangle_a = (triangle *)a;
  triangle *triangle_b = (triangle *)b;

  double area_a = calc_area(*triangle_a);
  double area_b = calc_area(*triangle_b);

  // If area_a is less than area_b, return -1 (for ascending order)
  // If area_a is greater than area_b, return 1 (for ascending order)
  // If area_a is equal to area_b, return 0
  if (area_a < area_b) {
    return -1;
  } else if (area_a > area_b) {
    return 1;
  } else {
    return 0;
  }
}

void sort_by_area(triangle *tr, int n) {
  // Using qsort to sort the triangles based on their areas
  qsort(tr, n, sizeof(triangle), compare_triangles);
}

int main() {
  int n;
  scanf("%d", &n);
  triangle *tr = malloc(n * sizeof(triangle));
  for (int i = 0; i < n; i++) {
    scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
  }
  sort_by_area(tr, n);
  for (int i = 0; i < n; i++) {
    printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
  }
  free(tr); // Don't forget to free the allocated memory
  return 0;
}
