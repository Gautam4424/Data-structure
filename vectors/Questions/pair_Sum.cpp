// find a pair that upon addition gives value equal to sum in an array 
// for eg arr ={1,3,5,7,2,4,6}
// k=9
// output - 5,4 or 7,2 or 6,3 any one of them


#include <iostream>
#include <vector>

using namespace std;


vector<int> brute_pair_sum(vector<int>arr,int key){

    vector<int> ans;
    for (int i=0;i<arr.size();i++){
        for (int j=i+1;j<arr.size();j++){
            if (arr[i]+arr[j]==key){
                ans.push_back(arr[i]);
                ans.push_back(arr[j]);
                return ans;

            }

        }
    }
    return ans;
}


int main(){
    vector<int> arr {1,3,5,7,2,4,6};
    int key=5;

    vector<int> ans = brute_pair_sum(arr,key);

    for (int i=0;i<ans.size();i++){
        cout << ans[i] << " "; 
    }


}
