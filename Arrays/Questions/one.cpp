// Take 5 element as input in array and print double of ecah element 

// Solution

#include <iostream>
using namespace std;


int main(){
    int arr[5];


    // Taking input from user
    for (int i=0;i<5;i++){
        cin>> arr[i]  ;
    }

    // Printing double of each element
    for (int i=0;i<5;i++){
        cout << arr[i]+ arr[i] << endl;
    }
    
}