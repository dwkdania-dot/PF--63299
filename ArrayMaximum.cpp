#include <iostream>
using namespace std;
// comparison | temp = greatest
//arr(i)> greatest, replace greatest with arr(i)
//arr[i][j]
int main(){
    int greatest;
    greatest = 1;
    int arr[3];
   
        for(int j=0; j<3; j++){
            cout<<"Determine greatest from entered numbers: ";
            cin>>arr[j];
        }
        for(int j=0; j<3; j++){
            if(arr[j]>greatest){
                greatest = arr[j];
            }
        }
    cout<<"Greatest: "<<greatest;
    return 0;
}
