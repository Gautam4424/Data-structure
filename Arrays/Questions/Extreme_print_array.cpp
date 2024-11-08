// suppose my array is [1,2,3,4,5,6,7,8]
// extereme array will be = [1,8,2,7,3,6,4,5]

#include <iostream>
using namespace std;


void extreme_print(int arr[],int size){
    int i=0;
    int j=size-1;

    for (int h=0;h<size;h++){
        if (h%2==0){
            cout << arr[i] << " ";
            i++;
        }
        if (h%2==1){
            cout << arr[j] << " ";
            j--;
        }
    }
}


int main(){
    int arr[8]={1,2,3,4,5,6,7,8};
    extreme_print(arr,7);
}