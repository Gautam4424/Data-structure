// Find the maximum number of an array
#include <iostream>
using namespace std;

int min_num(int arr[],int size){
    int min=INT_MAX;
    for (int i=0;i<size;i++){
        if (arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}


int main(){
    int arr[7]={2,4,1,6,8,9,8};
    cout << "Max = " << min_num(arr,7) << endl;
}