// Two differnet array add both two into one array

#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>arr1,vector<int> arr2){

    // int m=arr1.size();
    // int n=arr2.size();
    vector<int> arr3;

    // for (int i=0;i<m;i++){
    //     arr3[i]=arr1[i];
    // }



    // for (int j=0;j<n;j++){
    //     arr3[m+j]=arr2[j];
    // }

    // for (int i=0;i<arr3.size();i++){
    //     cout << arr3[i] << " ";
    // }


    for (int i=0;i<arr1.size();i++){
        arr3.push_back(arr1[i]);
    }


     for (int i=0;i<arr2.size();i++){
        arr3.push_back(arr2[i]);
    }

    for (int i=0;i<arr3.size();i++){
        cout << arr3[i] << " ";
    }



    
}


int main(){

    vector<int>arr1{1,2,3,4,5,6,7,8};
    vector<int>arr2{4,5,6,7,8,9};


    merge(arr1,arr2);

}