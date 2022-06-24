#include <stdio.h>
int main() {
  char ch;
  while(1) {
    ch=getchar();
    if(ch=='\n') {
      break;
    } else {
      ch=ch-7;
      putchar(ch);
    }
  }
  printf("\n");
  return 0;
}

