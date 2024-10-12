#include <iostream>
using namespace std;

int main(){
    int *ptrA;
    int a[10];
    a[1]=77;
    for(int i=0;i<10;i++){
        a[i]=i+1;
    }
    ptrA=a;
    cout<<*(ptrA+1);
}

void print_array(int a[],int len){
    for(int i=0;i<len;i++){
        cout<<i<<" "<<a[i];
    }
}


void print_array(int *p,int len){
    for(int i=0;i<len;i++){
        cout<<i<<" "<<*(p+i);
    }
}