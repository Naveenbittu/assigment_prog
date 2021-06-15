//3. Program to find the sum of digits of a number until the sum is reduce to 1 digit.
#include<stdio.h>
    void find_sum_digit(int n)
    {
        int sum=0;
        while(n>0||sum>9)
        {
            if(n==0)
            {
                n=sum;
                sum=0;
            }
            sum+=n%10;
            n=n/10;
        }
            printf("sum=%d",sum);
    }

        int main()
        {
            int num;
            printf("entre the num\n");
            scanf("%d",&num);
            find_sum_digit(num);
        }



