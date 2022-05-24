#include <stdio.h>

int main() {
  int row_n;
  int R[5]; //利用陣列

  scanf("%d", &row_n);
  //printf("%d\n", row_n);
  for(int i=0; i<row_n; i++) {
    scanf("%d %d %d %d", &R[1], &R[2], &R[3], &R[4]);
    printf("%d %d %d %d ", R[1] ,R[2] ,R[3] ,R[4]);
    if(R[2]-R[1] == R[3]-R[2]) {
      printf("%d\n", R[4]+(R[2]-R[1]));
    } else {
      printf("%d\n", R[4]*(R[2]/R[1]));
    }
  }

  return 0;
}
