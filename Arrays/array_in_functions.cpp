#include <iostream>
using namespace std;


void prinArray(int *arr , int size){
    arr[0]=15;
    for (int i=0;i<size;i++){
        cout << arr[i]<< " ";
    }
}

int main(){

    int arr[10]={1,2,3,4,6,76565,43,45,34256,54678};
    prinArray(arr,10);
    cout << endl;
    cout << arr[0] << " ";

}