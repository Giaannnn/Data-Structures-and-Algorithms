#include <iostream>
using namespace std;

int main() 
{
    char una;
    float fr, cl;

    cout << "Enter mo kung farenheit o celsius (c/f): " ;
    cin >> una;

    
    if(una == 'c')
    {
        cout << "Enter the temperature: ";
        cin >> cl;
        cout << "The temperature in c: " << (cl-32) * 5/9 << endl;
    }
    
    else if(una == 'f')
    {
        cout << "Enter the temperature: ";
        cin >> fr;
        cout << "The temperature in c: " << (fr * 9) / 5+32 << endl;
    }
    
    //----------------------------------------------------------
    //cout = print
    //cout << "Enter the temperature: ";
    // cin ay input
   // cin >> c;
    //f = (c * 9) / 5+32;
    //c = (c - 32) * 5/9;
    //cout << "The temperature in c: " << c << endl;
    
    
    
    //cout << "The temperature in f: " << f << endl;
    return 0;
    
   

}
   
