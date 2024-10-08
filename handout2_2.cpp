#include <iostream>

using namespace std;
void swap(int &a,int &b);
void pemute(int x[],int a,int b);
void pemutNumbers(int x);

int main(){
    pemutNumbers(3);
}

void swap(int &a,int &b){
    int tem;
    tem=a;
    a=b;
    b=tem;
}
void pemute(int x[],int a,int b){
    if(a==b){
        for(int i=0;i<=b;i++){
            cout<<x[i];
        }
        cout<<endl;
    }else{
        for(int j=a;j<=b;j++){
            swap(x[a],x[j]);
            pemute(x,a+1,b);
            swap(x[a],x[j]);
        }
    }
}

void pemutNumbers(int x){
    int h[100];
    for(int i=0;i<x;i++){
        h[i]=i+1;
    }
    pemute(h,0,x-1);
}