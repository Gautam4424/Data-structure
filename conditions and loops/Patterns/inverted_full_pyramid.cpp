// * * * * *
//  * * * *
//   * * *
//    * *
//     *



#include <iostream>
using namespace  std;


int main() {
    int n=0;
    cout << "Enter the value of n : ";
    cin >> n;

    for (int row=0;row<n;row++){

        // spaces

        for (int spaces=0;spaces<row ; spaces++){
            cout << " " ;
        }

        // stars

        for (int stars=0;stars<n-row;stars++){
            cout << "* ";
        }
        cout <<endl;
    }
}