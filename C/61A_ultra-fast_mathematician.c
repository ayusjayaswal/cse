#include "stdio.h"
int main() {
  char a[110], b[110];
  scanf("%[^\n]%*c", a);
  scanf("%[^\n]%*c", b);
  for(int i = 0; a[i] != '\0';i++){
    if(a[i]!=b[i])
      printf("%c", '1');
    if(a[i]==b[i])
      printf("%c", '0');
  }
}
