#include <iostream>

using namespace std;
void bubble(int x[],int size);
int binarySearch(int x[],int first,int last, int key);

int main(){
    int x[]={10,9,8,7,6,5,4,3,2,1};
    bubble(x,10);
    for(int i=0;i<10;i++){
        cout<<x[i]<<" ";
    }
    int a;
    cout<<"\n"<<"1~10 중에 위치를 알고 싶은 숫자는?"<<endl;
    cin>>a;
    cout<<"당신 숫자의 위치는 = "<<binarySearch(x,0,9,a)+1;
}

void bubble(int x[],int size){
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-1-i;j++){
            if(x[j]>x[j+1]){
                int tem;
                tem=x[j];
                x[j]=x[j+1];
                x[j+1]=tem;
            }
        }  
    }
}

int binarySearch(int x[],int first,int last, int key){
    
    while(first<=last){
        int mid= (first+last)/2;
        if(x[mid]==key){
            return mid;
        }else if(key>x[mid]){
            first=mid+1;
        }else{
            last=mid-1;
        }
        
    }
    return -1;
}