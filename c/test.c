#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int num;
    scanf("%d", &num);
    int arr[num];int narr[num];
    for (int i = 0; i < num; i++) {
        scanf("%d",&arr[i]);
}
    for (int i = num - 1; i >= 0; i--) {
        narr[i] = arr[num - (i + 1)];
}
    for (int i = 0; i <= num - 1; i++) {
        printf("%d ",narr[i]);
}
    printf("\n");
    return 0;
}
