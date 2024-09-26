// 1 2 3 4 5
// 1 2 3 4
// 1 2 3 
// 1 2 
// 1


#include <iostream>
using namespace std;


int main() { 
    int n;
    cout <<"Enter the value of n : ";
    cin >> n;

    for (int row=0;row< n ;row++){
        int temp=1;
        for (int col=n-row; col>0;col--){
            cout << temp << " ";
            temp++;
        }
        cout << endl;
    }
}