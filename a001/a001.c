#include <stdio.h>
#include <string.h>  //引用字串函式庫

int main() {
  char W[20];  //宣告字串，長度預訂20字元
  
  //printf("Please enter `world`:");
  scanf("%s", W); //讀入前端輸入，留意字串變數不必加&。字串變數已有指標
  //fgets(W, 20, stdin);
  printf("hello, %s\n", W);
}
