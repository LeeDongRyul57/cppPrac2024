#include <iostream>
using namespace std;
static int count=0;
void foo(void);
int countcalls(void);

int main(){
    int y;
    {
        int a='y';
        cout<<a<<endl;
    }
    cout<<"이게 출력되면 성공~"<<endl;

    foo();
   cout<<countcalls()<<endl;
   cout<<countcalls()<<endl;
   cout<<countcalls()<<endl;
}

void foo(void){
    for(int j=0;j<10;j++){
        int k=j*10;
        cout<<j<<","<<j<<endl;
        {
            int m=j+k;
            cout<<m<<","<<j<<endl;
        }
    }
}

int countcalls(void){
    
    count++;
    return count;
}