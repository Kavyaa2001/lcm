#include<stdio.h>
int _lcm(int, int);  
int main()
{
    int a, b, lcm;
    printf("Enter 2 numbers to find LCM : \n");
    scanf("%d%d", &a, &b);
    lcm = _lcm(a,b);   
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
