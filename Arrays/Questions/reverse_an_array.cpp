// Reverse an array

#include <iostream>
using namespace std;

void reverse(int arr[],int size){
    int start=0;
    int end=size-1;

    while (start<end){
        // swap(arr[start],arr[end]);

        // swap without inbuilt func

        int temp=  arr[end];
        arr[end]=arr[start];
        arr[start]=temp;
        start++;
        end--;
    }
}

int main(){
    int arr[6]={10,20,30,40,50,60};

    cout << "Normal Array = "  ; 
    for (int i=0;i<6;i++){
        cout << arr[i]  << " ";
    }

    cout << endl;

    cout << "Reversed Array = "; 
    reverse(arr,6);
    for (int i=0;i<6;i++){
        cout << arr[i]  << " ";
    }
    

}