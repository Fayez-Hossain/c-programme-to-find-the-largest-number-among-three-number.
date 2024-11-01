//c programme to find the largest number among three number.
#include<stdio.h>
int main()
{
    int n1,n2,n3;

    printf("Enter three number:");
    scanf("%d %d %d",&n1,&n2,&n3);

    if(n1>n2 && n1>n3){
        printf("%d is largest.",n1);
    }else if(n2>n1&&n2>n3){
     printf("%d is largest.",n2);
    }else{
     printf("%d is largest.",n3);
    }
    printf("thanks for all");
    return 0;
}

