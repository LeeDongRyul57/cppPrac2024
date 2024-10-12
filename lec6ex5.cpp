#include <iostream>
using namespace std;
void fun(int a,int b,int *p1,int *p2);

int main(){
    int x,y,sum,product;
    x=3;
    y=5;
    fun(x,y,&sum,&product);
    cout<<sum<<" "<<product; //8  15
}

void fun(int a,int b,int *p1,int *p2){
    *p1=a+b;
    *p2=a*b;
}