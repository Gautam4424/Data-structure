#include <iostream>
using namespace std;



// int main() { 
//     int score ;
//     cout << "Enter the value of score :" ;
//     cin >> score; 

//     if (score >  30) { 
//         cout << "Score is greater than 30";

//     }
//     else {
//          cout << "Score is mot greater than 30";
//     }
// }



// Check the person can vote or not



// int main() { 
//     int age ;
//     cout << "Enter the value of age :" ;
//     cin >> age; 


//     if (age>=18){
//         cout <<"Person can vote ";
//     }

//     else{
//         cout << "Person cannot vote now" ; 
//     }
// }



// Handeling multiple conditions using else if 


int main() { 
    int Marks ;
    cout << "Enter the value of Marks :" ;
    cin >> Marks;


    if (Marks>=90){
        cout << "A grade";
    } 

    else if (Marks>=80){
        cout << "B grade";
    }

     else if (Marks>=60){
        cout << "c grade";
    }

     else if (Marks>=40){
        cout << "D grade";
    }

    else{
        cout << "E grade";
    }
}