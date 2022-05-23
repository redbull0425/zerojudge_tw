#include <stdio.h>

int main () {

int InputNumber;
    //EOF是在stdio函示庫內，返回值是-1
    while(scanf("%d",&InputNumber)!=EOF){
        if(InputNumber%400==0)
            {
                printf("閏年\n");
            }
        else if(InputNumber%4==0)
            {
                if(InputNumber%100!=0)
                {
                    printf("閏年\n");
                }
                else
                {
                    printf("平年\n");
                }
            }
        else
        {
            printf("平年\n");
        }
    }


    return 0;
}
