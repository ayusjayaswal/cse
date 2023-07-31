#include "stdio.h"
#include "string.h"


int check(char str[]) {
    int n = strlen(str);
    int distinct_chars = 0;

    // Check each character in the string for distinctness
    for (int i = 0; i < n; i++) {
        int is_distinct = 1;
        for (int j = i + 1; j < n; j++) {
            if (str[j] == str[i]) {
                is_distinct = 0;
                break;
            }
        }
        distinct_chars += is_distinct;
    }

    return distinct_chars % 2;
}int main(){
  char s[1000];
  scanf("%s",s);
  check(s);
  if(check(s))
    printf("IGNORE HIM!");
  else
    printf("CHAT WITH HER!");
  
}
