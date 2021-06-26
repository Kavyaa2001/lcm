#include<stdio.h>
int _lcm(int, int);  
int main()
{
    int a=12, b=30, lcm;
    lcm = _lcm(a,b);
    printf("Input\n");
    printf("Input first number:%d \n",a);
    printf("Input second number:%d\n",b);
    printf("Output\n");
    printf("LCM of %d and %d is: %d", a, b, lcm);
    return 0;
}
int _lcm(int a, int b)  
{
    static int temp = 1;    
    if(temp%a == 0 && temp%b == 0)
    {
        return temp;
    }
    else
    {
        temp++;
        _lcm(a,b);
        return temp;
    }
}
