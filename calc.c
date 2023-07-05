#include <stdio.h>
int main(){
  int age = 18; int *pp = &age;
  printf("The address of age: %p\n", &age);
  printf("The address of age: %p\n", pp);
  printf("The value of age: %d\n", age);
  printf("The value of age: %d\n", *pp);
  
  
}
