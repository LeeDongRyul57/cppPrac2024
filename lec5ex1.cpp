#include <iostream>
#include <string.h>
using namespace std;
void add100(int &x);

int main(){
    int x;
    int d;
    int &foo=x;
    int &blah =d;
    foo=100;
    blah=777;
    d++;
    cout<<x<<" "<<blah<<endl;
    add100(foo);
    cout<<x<<endl;
    int firArray[10];
    for(int i=0;i<10;i++){
        firArray[i]=i*10+10;
    }
    char charArray[]="hello world@";
    firArray[0]+=100;
    cout<<firArray[0]<<" "<<charArray[11];
}

void add100(int &x){
    x=x+75;
}