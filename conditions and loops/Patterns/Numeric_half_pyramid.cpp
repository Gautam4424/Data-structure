// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5



#include <iostream>
using namespace std;


int main(){
    int n;
    cout << "Enter the value of n : ";
    cin >> n;


    for (int row=0;row<n;row++){
        int n=1;
        for (int col=0;col<row+1;col++){
            cout<< n << " " ;
            n++;
        }
        cout << endl;
    }
}


