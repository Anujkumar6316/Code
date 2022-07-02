/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>
#define ll long long int


// find power a^b;
int _pow(int a,int b){
    // a^b
    int ans=1;
    for(int i=1;i<=b;i++)
        ans*=a;
    return ans;
}

long long int bin(int n){
    long long int convert=0;
    int i=0;
    while(n>0){
        int x=n&1;
        convert+=x*_pow(10,i);
        i++;
        n=n>>1;
    }
    return convert;
}

int main()
{
    // printf("Hello World");
    printf("%d ",_pow(10,3));
    printf("%lld ",bin(50));

    return 0;
}
