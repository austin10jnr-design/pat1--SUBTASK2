#include <iostream>

using namespace std;

int main(){

    int temp1, temp2, temp3;

    // Input for first temperature reading
    cout << "Enter the first temperature reading: ";
    cin >> temp1;

    // Input for second temperature reading
    cout << "Enter second temperature reading: ";
    cin >> temp2;

    // Input for second temperature reading
    cout << "Enter third temperature reading: ";
    cin >> temp3;

    // Check the increase from first to second reading
    int increase12 = temp2 - temp1;

    if(increase12 >50){
            cout << "Reduce fryer heat before taking the third reading" << endl;

           } else if(increase12 <10){
               cout << " Increase the fryer heat before taking the third reding" << endl;

           }

           // After third reading, check final oil
           if(temp3 >= 150 && temp3 <= 190){
            cout << " You may start frying the magwinyas" << endl;

           }
           else {
            cout << "Oil is not ready for frying!" << endl;

           }

    return 0;
}
