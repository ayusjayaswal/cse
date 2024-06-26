#include "stdio.h"
#include "string.h"
int main(){
  char a[110],b[110],c[110];
  char ca[110],cb[110],cc[110];
  int n;
  scanf("%[^\n]s",a);
  scanf("%[^\n]s",b);
  scanf("%[^\n]s",c);
  /* scanf("%d",&n); */
  /* char s[110][n]; */
  /* for(int i = 0;i<n;i++){ */
  /* scanf("%[^\n]s",&s[110][i]); */
  /* } */
  for(int i = 0;a[i]!='\0';i++){
    if(a[i] != ';' && a[i]!='_'){
      strcat(ca,&a[i]);
    }
  }
  for(int i = 0;b[i]!='\0';i++){
    if(b[i] != ';' && b[i]!='_'){
      strcat(cb,&b[i]);
    }
  }
  for(int i = 0;c[i]!='\0';i++){
    if(c[i] != ';' && c[i]!='_'){
      strcat(cc,&c[i]);
    }
  }
  printf("%s %s %s",ca,cb,cc);
  
}
