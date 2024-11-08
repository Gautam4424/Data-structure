// Count the 0s and 1s in an array

#include <iostream>
using namespace std;

void count(int arr[] ,  int size){
    int zero=0;
    int one=0;
    for (int i=0;i<size;i++){
        if (arr[i]==0){
            zero++;
        }
        else{
            one++;
        }

    }

    cout << " Zero = "<< zero <<  " One = " << one ;
}


int main(){
    int arr[10]={1,0,0,1,1,1,1,0,0,1};
    count(arr,10);
}