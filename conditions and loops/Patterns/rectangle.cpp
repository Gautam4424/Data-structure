// * * * *
// * * * *
// * * * *
// * * * *


#include <iostream>
using namespace std ;


int main() {

    int n;
    cin >> n ;

// Row wise
    for (int row=0;row<n;row++){
        for (int col=0;col<n;col++){
            cout << "* " ;
        }
        cout << endl;
    }

}