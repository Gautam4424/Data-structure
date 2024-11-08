#include <iostream>
#include <vector>

using namespace std;

void sort_012(vector<int>arr){
    int start=0;
    int end=arr.size();
    int mid=0;

    while (mid < end){
        if (arr[mid]==0){
            swap(arr[start],arr[mid]);
            start++;
            mid++;
        }

        else if (arr[mid]==1){
            mid++;
        }

        else if (arr[end]==2){
            end--;
        }

        else{
            swap(arr[mid],arr[end]);
            mid++;
            end--;
        }
    }

    for (auto i:arr){
        cout << i << " ";
    }


    // for (int i=0;i<arr.size();i++){
    //     cout << arr[i] << " ";
    // }
}


int main(){

    vector<int> arr {0,1,2,0,1,2};
    sort_012(arr);



}