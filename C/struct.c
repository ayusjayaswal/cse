#include <stdio.h>
#include <string.h>
struct Player {
 char name[10];
};
int main(){
  struct Player one;
  strcpy(one.name, "Ayush");
  printf("Hello %s", one.name);
  
}
