#include <iostream>
#include <stdio.h>

template <typename T, typename D>
D generic_min(T a, T b)
{
    return (a<b?a:b);
}

int calc(char op,int a,int b)
{
    if(op=='+') return a+b;
    else if(op=='-') return a-b;
    else if(op=='*') return a*b;
    else if(op=='/') return a/b;
    else return -99999;
}

int main()
{
    int a,b,c;int temp;
    std::cout<< generic_min<float, int>(4.5,8.9);
    std::cout<<"Hello World"<<std::endl;
    for(int i=0;i<20;i++)
    {
        static int sum;
        sum+=i*i;
        printf("%d\n",sum);
    }
}


