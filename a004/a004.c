#include <stdio.h>

int main() {
        int N;
        //scanf("%d", &N);
        //printf("number: %d \n", N);
        //EOF是在stdio函示庫內，返回值是-1
        while(scanf("%d",&N)!=EOF) { //利用while搭配EOF來作為輸入中止判斷
                if(N%4==0) {
                        if(N%100==0 && N% 400!=0){
                                //printf("No\n");
                                printf("平年\n");
                        } else {
                                //printf("Yes\n");
                                printf("閏年\n");
                        }
                 } else {
                         //printf("No\n");
                         printf("平年\n");
                 }
        }
        return 0;
}

