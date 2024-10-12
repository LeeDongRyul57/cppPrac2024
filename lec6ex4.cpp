#include <iostream>
using namespace std;
void fun(int *p);
void fun1(int &x);
void fun2(int x);
int main(){
    int i;
    int *ptr1=&i;
    fun(&i);
    fun(ptr1);
    *ptr1=777;
    cout<<i<<endl;

    int x=100;
    fun1(x);
    cout<<x;
    fun2(100);
    cout<<x;
}

void fun(int *p){
    *p=1;
}

void fun1(int &x){
    x=888;
}
void fun2(int x){
    x=999;
}