// Sort the 0s and 1s in an array 
// test case = { 0,1,0,1,0,1,1,0,1}
// output - {0,0,0,0,1,1,1,1,1}

#include <iostream>
#include <vector>
using namespace std;


void sort_zeone(vector<int>arr){
    int start=0;
    int end=arr.size();


    while (start<end){
        if (arr[start]==0){
            start++;

        }
       else if (arr[end]==1 ){
            end--;
        }

        else{
            swap(arr[start],arr[end]);
            start++;
            end--;
        }

    }

    for (int i=0;i<arr.size();i++){
        cout << arr[i] << " ";
    }


}

int main(){
    vector<int> arr {0,1,1,0,1,0,1,0,0};

    sort_zeone(arr);

    // for (int i=0;i<arr.size();i++){
    //     cout << arr[i] << " ";
    // }
}