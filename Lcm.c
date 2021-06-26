include<stdio.h>
int lcm(int a,int b);
int a,b,i,x,y;
int main()
{
    int x=12,y=30;
    printf("Input");
    printf("\nInput first number:%d",x);
    printf("\nInput second number:%d",y);
    int l=lcm(x,y);
    printf("\n\nOutput");
    printf("\nLCM  of %d and %d=%d",x,y,l);
    return 0;
}

int lcm(int a,int b)
{
    static int i=2;
    if(i%a==0 && i%b==0)
    {
        return i;
    }
    else
    {
        i++;
        lcm(a,b);
        return i;
    }
        
}
