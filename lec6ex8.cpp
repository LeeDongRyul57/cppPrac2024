#include <iostream>
using namespace std;
int count_string(char *s);
void changePtr(int *a);
int main(){
    char *msg="rpi";
    cout<<msg;
    cout<<*(msg+1);
    cout<<count_string("rpi"); //3

    int *x;
    int a=7777;
    x=&a;
    int b=3333;
    cout<<endl<<a<<" "<<b<<endl;
    changePtr(x);
    changePtr(&b);
    cout<<a<<" "<<b;
}

int count_string(char *s){
    int n=0;
    while(*s){
        n++;
        s++;
    }
    return n;
}

void changePtr(int *a){
    *a+=1;
}