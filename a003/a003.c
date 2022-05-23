#include<stdio.h>

int main() {
  int M, D;
  int S;

  scanf("%d %d", &M, &D);
  //printf("M: %d, D: %d\n", M, D);
  S = (M * 2 + D) % 3;
  //printf("S: %d\n", S);
  switch(S) {
    case 0:
      printf("普通\n");
      break;
    case 1:
      printf("吉\n");
      break;
    case 2:
      printf("大吉\n");
      break;
  }
  return 0;
}
