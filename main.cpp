#include "fibo.h"

int main() {
    int n;
    cout<<"Enter a size of matrix: ";
    cin>>n;
    int** mat=new int*[n];
    for (int i=0; i<n; i++){
        mat[i]=new int[n];
    }
    fuller(mat,n);
    mat=trans(mat, n);
    sorter(mat, n);
}
