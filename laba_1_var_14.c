#include<stdio.h>
int main()
{
  int N,M;
    printf("введи делимое:");
    scanf("%d", &N);
    printf("введи делитель:");
    scanf("%d", &M);
    if (N%M == 0){
        printf("TRUE");
    }
    else{
        printf("FALSE");
    }
    return 0;
}