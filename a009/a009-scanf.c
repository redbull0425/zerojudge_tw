#include <stdio.h>
int main() {
    char str[100];
    scanf("%s", str);    
    
    for(int i = 0; str[i] != '\0'; ++i) {  
        printf("%c", str[i] - 7);
    }
        //printf("\n");
    return 0;
}
