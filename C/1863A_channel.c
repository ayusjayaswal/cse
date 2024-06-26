#include "stdio.h"
#include "string.h"
int main(){
  int t;
  scanf("%d",&t);
  int n[t],a[t],q[t];
  char str[t][101];
  int net_online[t],max_online[t];
  for(int i = 0;i<t;i++){
    scanf("%d %d %d\n",&n[i],&a[i],&q[i]);
    scanf("%s",str[i]);
    net_online[i]=a[i];
    max_online[i]=a[i];
  }
  for(int i = 0;i<t;i++){
    /* printf("%s :",str[i]); */
    for(int j=0;str[i][j]!='\0';j++){
      if(str[i][j]=='+'){net_online[i]++;max_online[i]++;}
      if(str[i][j]=='-'){net_online[i]--;}
    }
    /* printf("net online %d max online %d\n",net_online[i],max_online[i]); */
    if(a[i]==n[i])
      printf("YES");
    else if (net_online[i] == n[i])
      printf("YES");
    else if (max_online[i] >= n[i])
      printf("MAYBE");
    else printf("NO");
    printf("\n");
  }
}
