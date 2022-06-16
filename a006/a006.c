#include<stdio.h>
#include<math.h>
int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int root1, root2;
    if(b*b - 4*a*c > 0) {

        root1 = (-b + (int)sqrt(b*b - 4*a*c) )/2*a;
        root2 = (-b - (int)sqrt(b*b - 4*a*c) )/2*a;

        printf("Two different roots x1=%d , x2=%d\n", root1, root2);
    }
    else if(b*b - 4*a*c == 0) {
        root1 = (-b)/(2*a);
        printf("Two same roots x=%d\n", root1);
    }
    else
        printf("No real root\n");

    return 0;
}
