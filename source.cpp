#include <iostream>
#include <stdio.h>

template <typename T, typename D>
D generic_min(T a, T b)
{
    return (a<b?a:b);
}

int main()
{
    int a,b,c;
    std::cout<< generic_min<float, int>(4.5,8.9);
    std::cout<<"Hello World"<<std::endl;
printf("enter 3 nos \n");
scanf("%d, %d, %d",&a,&b,&c);
printf("%d, %d, %d are the nos taken in",a,b,c);
}


