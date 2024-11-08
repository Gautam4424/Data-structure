#include <iostream>
#include <vector>
using namespace std;


// Bruteforce

void intersect_brute_force(vector<int>arr1,vector<int>arr2){
    for (int i=0;i<arr1.size();i++){
        int temp=arr1[i];
        for (int j=0;j<arr2.size();j++){
            if (arr2[j]==temp){
                cout << arr2[j] << " ";
            }

        }
    }
}


void intersection(vector<int>arr1,vector<int>arr2){
    int n=arr1.size();
    int m=arr2.size();

    int start=0;
    int arr_start=0;
    while (start<n &&  arr_start<m){
        if (arr1[start]==arr2[arr_start]){
            cout << arr1[start] << " ";
            start++;
            arr_start++;
        }

        else if (arr1[start]<arr2[arr_start]){
            start++;
        }
        else{
            arr_start++;
        }
    }


}



int main(){
    vector<int>arr1{1,2,3,4,9,10,11};
    vector<int>arr2{3,4,9,10,12};

    intersect_brute_force(arr1,arr2);

}