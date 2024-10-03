#include <iostream>
#include <math.h>
namespace IntAnB{
    int a=10;
    int b=20;
}
using namespace std;
using namespace IntAnB;
 int max(int i,int j){
        int m;

        if(i>j)
        m=i;
        else
        m=j;
         cout<<"haahh"<<endl;
        return m;
       
    }
int main(){
   
    cout<<"int a : "<<IntAnB::a<<endl;
    cout<<"int b : "<<IntAnB::b<<endl;
    int a=1000;
    a=100;
    double y=25.0;
    int x=sqrt(y);

    cout<<"int a : "<<IntAnB::a<<endl;
    cout<<"max is... "<<max(IntAnB::a,IntAnB::b)<<"  "<<x<<endl;
    for(int i=1;i<10;i++){
        cout<<sqrt(i)<<"\n";
    }
    
}