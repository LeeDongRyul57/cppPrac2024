#include <iostream>
using namespace std;

int main(){
    int a[]={0,1,2};
    int b[]={4,5,6};
    int *x[2];
    x[0]=a;
    x[1]=b;
    cout<<*x[0]<<" "<<*(x[1]+1)<<endl;
    cout<<*x[0]<<" "<<*(*(x+1)+1)<<endl;

    int c[2][3]={{0,1,2},{4,5,6}};
    int (*y)[3];
 //0
    y=c; //4
    cout<<(*y)[0]<<" "<<(*y)[1]<<endl;

    int *z[2];
    z[0]=c[0]; //0
    z[1]=c[1]; //4

    cout << *(z[1]+1); //5
    cout << *(*(z+1)+1); //5
    cout << c[1][1]; //5
    cout << *(c[1]+1); //5
    cout << *(*(c+1)+1)<<endl;//5

    char *msg="rpi";
    cout<<*msg[1];

}