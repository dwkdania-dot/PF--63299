#include <iostream>
using namespace std;

int main() {
    int matrix[3][3];
    int transpose[3][3];
    cout<<"Populate the matrix: ";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>matrix[i][j];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            transpose[i][j] = matrix[i][j];
        }
    }
    
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<"Matrix"<<matrix[i][j];
        }
    }
        for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<"Transpose: "<<transpose[i][j];
        }
    }
    return 0;
}
