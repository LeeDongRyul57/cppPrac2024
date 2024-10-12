#include<iostream>
using namespace std;

int main(){
    int x1=5;
    int x2=8;
    int *x1ptr;
    int *x2ptr;
    x1ptr=&x1;
    x2ptr=&x2;
    *x2ptr=12;
    int *&h=x2ptr;
    *h=77;
    cout<<x1<<x2<<*h;
}