#include<stdio.h>
int main()

{
    int num,i=1,n1,n2;
    printf("Enter the number whose table you  want to print:");
    scanf("%d",&num);

    table:
    printf("%d x %d=%d\n",num,i,num*i);
    i++;
    if(i<=10)


    goto table;

        return 0;
}


