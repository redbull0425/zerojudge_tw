#include <stdio.h>
int main(){
/*
    char str_example[100] = "This is a book.";

    for(int n = 0; str_example[n] != '\0'; ++n)  
      printf(" %d ", str_example[n]);
    printf("\n");
*/
  char str_in[100] = "1JKJ'pz'{ol'{yhklthyr'vm'{ol'Jvu{yvs'Kh{h'Jvywvyh{pvu5";
  char str_out[100] = "*CDC is the trademark of the Control Data Corporation.";

/*
  for(int n = 0; str_in[n] != '\0'; ++n) {  
    printf("%d", str_in[n]);
  }
    printf("\n");
  for(int o = 0; str_out[o] != '\0'; ++o) {  
    printf("%d", str_out[o]);
  }
    printf("\n");
  for(int m = 0; str_in[m] != '\0'; ++m) {  
    printf("%c", str_in[m]-7);
  }
    printf("\n");
*/
    char str[100];
    scanf("%s", str);    
    
    for(int i = 0; str[i] != '\0'; ++i) {  
        printf("%c", str[i] - 7);
    }
        printf("\n");
/*
    for(int j = 0; str[j] != '\0'; ++j) { 
        printf("%d", str[j] - 7);
    }
        printf("\n");
*/

    return 0;
}
