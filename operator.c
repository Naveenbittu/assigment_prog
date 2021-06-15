 //Execute the line and find the output a = 2, b =1, x=(a++ && (!b) && b|| ++a);
#include<stdio.h>
int main()
{
    int a=2,b=1;
    int x;
    x=(a++&&(!b)&&b||++a);
    printf("\n value=%d",x);
}
