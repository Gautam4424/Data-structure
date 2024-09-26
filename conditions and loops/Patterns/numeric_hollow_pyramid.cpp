//     1
//    1 2
//   1   3
//  1     4
// 1 2 3 4 5 


#include <iostream>
using namespace std;


int main() { 
    int n;
    cout << "Enter the value of n: ";
    cin >> n;


    for (int row=0;row<n;row++){
        for (int spaces=0; spaces<n-row;spaces++){
            cout << " ";
        }
        int temp=1;

        for (int col=0;col<(row+1)*2-1;col++ ){
            if (col==0 && row!=n-1){
                cout << col+1;
            }
            else if (col%2==0 && row==n-1){
                cout << temp ;
                temp++;
            }

            else if (col==(row+1)*2-2 && row!=n-1 ){
                cout << row+1 ; 
            }
            else {
                cout << " ";
            }
        }
        cout << endl;
    }
}