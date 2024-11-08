#include <iostream>
#include <vector>

using namespace std;


int find_unique(vector<int> arr){
    int ans=0;
    for (int i=0;i<arr.size();i++){
        ans=ans^arr[i];

    }

    return ans;
}

int main(){
    vector<int> arr {1,2,4,2,1,3,6,7,7,6,4};

    cout <<"unique = " << find_unique(arr);

}