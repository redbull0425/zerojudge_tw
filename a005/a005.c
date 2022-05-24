#include <stdio.h>

int main() {
  int row_n;
  int R1[5]; //利用陣列
  int R2[5]; //利用陣列
  int odd_n; //等差數列
  int rate_n; //等比數列

  scanf("%d", &row_n);
  //printf("%d\n", row_n);
  scanf("%d %d %d %d", &R1[1], &R1[2], &R1[3], &R1[4]);
  odd_n=R1[2]-R1[1];
  scanf("%d %d %d %d", &R2[1], &R2[2], &R2[3], &R2[4]);
  rate_n=R2[2]/R2[1];

  //printf("%d\n", odd_n);
  //printf("%d\n", rate_n);

  printf("%d %d %d %d %d\n", R1[1] ,R1[2] ,R1[3] ,R1[4] ,R1[4]+odd_n);
  printf("%d %d %d %d %d\n", R2[1] ,R2[2] ,R2[3] ,R2[4] ,R2[4]*rate_n);
  return 0;
}
