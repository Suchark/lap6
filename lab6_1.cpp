#include<iostream>
using namespace std;

int main(){

    int num;
    int Odd = 0;
    int Even = 0;
    
    cout << "Enter an integer: ";
    cin >> num;
            
            while ( num != 0 )
        { 
                if( num % 2 == 0 ){

                Even += 1;

                }else{
                    Odd += 1;
                }
                cout << "Enter an integer: ";
                cin >> num;
        }
    
    cout << "#Even numbers = " << Even << "\n";
    cout << "#Odd numbers = " << Odd << "\n";
    return 0;
}
