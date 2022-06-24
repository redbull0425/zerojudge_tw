#include <stdio.h>
#include <math.h>

int main () {
  short i=32767;
  short o1, o2, o3;
  o1 = i + 1;
  o2 = i + 2;
  o3 = i + 32768;
  printf("32767 overflow status: %d\n", i);
  printf("\n");
  printf("32767 + 1 overflow status: %d\n", o1);
  printf("32767 + 2 overflow status: %d\n", o2);
  printf("32767 + 32768 overflow status: %d\n", o3);
  printf("\n");
  printf("%d\n", 2*2*2*2*2*2*2*2*2*2*2*2*2*2*2);
  printf("%d\n", (int)pow(2, 15));
  return 0;
}
