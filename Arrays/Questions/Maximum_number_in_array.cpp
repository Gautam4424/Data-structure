// Find the maximum number of an array
#include <iostream>
using namespace std;

int max_num(int arr[],int size){
    int max=INT_MIN;
    for (int i=0;i<size;i++){
        if (arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}


int main(){
    int arr[7]={2,4,1,6,8,9,0};
    cout << "Max = " << max_num(arr,7) << endl;
}