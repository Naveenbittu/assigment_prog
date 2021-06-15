//4.what is the output of the program
#include<stdio.h>
int main()
{

    int x=10,y=3;
    {
        int x=100,z=10;
        printf("%d %d",x,z);
    }
    printf("%d %d",x,z);
}

//output:error : 'z'undeclare (first use in this fuction)
