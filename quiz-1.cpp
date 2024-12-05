#include <iostream>

using namespace std;

int main()
{
    int grade, grade2, grade3;
    int ave = grade+grade2+grade3;
    
    cout << "Enter the score for Exam 1: ";
    cin >> grade;
    
    cout << "Enter the score for Exam 2: ";
    cin >> grade2;
    
    cout << "Enter the score for Exam 3: ";
    cin >> grade3;
    
    cout << "Average score: " << (grade+grade2+grade3)/3 << endl;
    
    if (ave >= 75)
    {
        cout << "Passed";
    }
     
    
    else if (ave <= 75)
    {
        cout << "Failed";
    }
    


    return 0;
}
