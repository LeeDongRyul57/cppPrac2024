#include <iostream>
using namespace std;
void fillArray(int x[],int n, double value);
void addArr(int x[],int y[],int sum[],int n);
int count=0;


int main(){
    int y[10];
    int x[10];
    int sum[10];
    fillArray(y,10,40);
    fillArray(x,10,60);
    addArr(x,y,sum,10);
}

void fillArray(int x[],int n, double value){
    for(int i=0;i<n;i++){
        x[i]=value;
        count++;
        cout<<x[i]<<" "<<count<<endl;
    }
}

void addArr(int x[],int y[],int sum[],int n){
    for(int i=0;i<n;i++){
        sum[i]=x[i]+y[i];
        cout<<"sum["<<i<<"]"<<"="<<sum[i]<<endl;
    }
}