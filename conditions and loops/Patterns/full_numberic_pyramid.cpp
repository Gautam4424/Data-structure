//       1
//     2 3 2
//    3 4 5 4 3
//  4 5 6 7 6 5 4
// 5 6 7 8 9 8 7 6 5

#include <iostream>
using namespace std;


int main() { 
    int n;
    cout << "Enter the value of n : ";
    cin >> n;

    for (int row=0;row<n;row++){
        for (int spaces=0;spaces<n-row;spaces++){
            cout << " ";
        }

        int temp=row+1;
        for (int half_tri=0;half_tri<=row;half_tri++){
            cout << temp ;
            temp++;
        }

        for (int half_sec_tri=temp-2;half_sec_tri>row;half_sec_tri--){
            cout << half_sec_tri ;
        }


        cout << endl;
    }
}