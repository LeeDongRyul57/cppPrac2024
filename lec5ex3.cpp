#include<iostream>
#include<stdio.h>
#define NROWS 5
#define NCOLS 5
using namespace std;
void mult_tab(int x[NROWS][NCOLS]);
void sum_tab(int x[NROWS][NCOLS],int arr[]);
int main(){

    int table[NROWS][NCOLS];
    int sum_row[NROWS];
    mult_tab(table);
    sum_tab(table,sum_row);

}

void mult_tab(int x[NROWS][NCOLS]){
    for(int i=0;i<NROWS;i++){
        for(int j=0;j<NCOLS;j++){
            x[i][j]=i*j;
            cout<<x[i][j]<<" ";
        }
        cout<<endl;
    }
}

void sum_tab(int x[NROWS][NCOLS],int arr[]){
    for(int i=0;i<NROWS;i++){
        arr[i]=0;
        for(int j=0;j<NCOLS;j++){
           arr[i]+=x[i][j];
        }
        cout<<arr[i]<<" ";
    }
}
