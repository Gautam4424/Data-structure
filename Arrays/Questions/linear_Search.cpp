// Find the element index in an arraay using linar search

#include <iostream>
using namespace std;


int  linear_search(int arr[],int size,int key){
    // Linear search logic
    for (int i=0;i<size;i++){
        if (arr[i]==key){
            return i;
        }
    }
    return -1;
}


int main(){
    int arr[7]={2,9,6,7,4,12,15};
    int key;

    cout << "Enter the element you want to find :";
    cin >> key;

    cout << "Element found at " << linear_search(arr,7,key) << " index";

}