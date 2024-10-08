#include <iostream>
using namespace std;
int binoC(int n,int r);
int recur(int n);
int main(){
    int N, K;
    cin>>N>>K;
    cout<<binoC(N,K);
}
int recur(int n){
    if(n<=1){
        return 1;
    }else{
        return n*recur(n-1);
    }
}

int binoC(int n,int r){
    if(n<r){
        return 0;
    }
    return recur(n)/(recur(n-r)*recur(r));
}

