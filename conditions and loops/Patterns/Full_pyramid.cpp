//     *
//    * *
//   * * * 
//  * * * *
// * * * * *


#include <iostream>
using namespace std;


int main(){
    int n;
    cout << "Enter the value of n : ";
    cin >> n;

    for (int row=0;row < n  ; row++){


        // Spaces

        for (int spaces=0;spaces<n-row;spaces++){
            cout << " ";
        }
        
        // stars

        for (int stars=0 ; stars <=row; stars++){
            cout << "* ";
        }
        cout << endl;

    }
    
}