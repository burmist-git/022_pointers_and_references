//c, c++
#include <stdio.h>

int main() {
  int n   = 50;
  int *pn = &n; //pointer_to_n
  printf("n    --> %d \n",n);
  printf("&n   --> %p \n",&n);
  printf("pn   --> %p \n",pn);
  printf("*pn  --> %d \n",*pn);
  printf("&*pn --> %p \n",&*pn);
  return 0;
}
