// Change all element inside array to 1
#include <iostream>
using namespace std;


int main() { 
    int arr[5]={1,2,5,7,9};

    // Changing all element into 1

    for (int i=0;i<5;i++){
        arr[i]=1;
    }

    for (int i=0;i<5;i++){
        cout << arr[i] << " ";
    }


}