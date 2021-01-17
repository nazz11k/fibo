#include "fibo.h"

void fuller(int** mat, int n){
    int* fib=new int[n*n];
    fib[0]=1; fib[1]=1;
    for(int i=2; i<n*n; i++){
        fib[i]=fib[i-1]+fib[i-2];
    }
    int pos=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            mat[i][j]=fib[pos];
            pos++;
        }
    }
    outer(mat, n, "Generated matrix:");
}

int** trans(int** mat, int n){
    int** tran=new int*[n];
    for(int i=0; i<n; i++){
        tran[i]=new int[n];
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++) {
            tran[j][i]=mat[i][j];
        }
    }
    outer(tran, n, "Transponated matrix:");
    return tran;
}

void outer(int** mat, int n, string name){
    cout<<endl<<name<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++) {
            cout<<setw(10)<<mat[i][j];
        }
        cout<<endl;
    }
}

void sorter(int** mat, int n){
    int tmp1;
    int* tmp2;
    int* diagonal=new int[n];
    for(int i=0; i<n; i++){
        diagonal[i]=mat[i][i];
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            if(diagonal[j]<diagonal[j+1]){
                tmp1=diagonal[j];
                tmp2=mat[j];
                diagonal[j]=diagonal[j+1];
                mat[j]=mat[j+1];
                diagonal[j+1]=tmp1;
                mat[j+1]=tmp2;
            }
        }
    }
    outer(mat, n, "Sorted matrix:");
}