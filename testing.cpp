/* This file is purely for testing C++, you probably shouldn't use any code from here for anything other than testing or learning. 
Bare in mind I might not have used best practices when writing this code, as I was using it to learn and test myself. */

#include <iostream>
#include <string>

using namespace std;

void FunkyTime()
{
    cout << "It's time to get funky!" << endl;
}

int main ()
{
    string Name;
    int num1;
    int num2;
    int day;
    int startNum;
    int endNum;
    int logicTest;

    cout << "Welcome to this epic game!" << endl;
    cout << "Please enter your name: ";
    getline(cin, Name);
    cout << "Your name is " << Name << endl;

    cout << "Now enter number 1" << endl;
    cin >> num1;
    cout << "Now number 2" << endl;
    cin >> num2;

    cout << "The sum of num1 and num2 is " << num1 + num2 << endl;
    cout << "The product of num1 and num2 is " << num1 * num2 << endl;
    cout << "The difference between num1 and num2 is " << num1 - num2 << endl;
    cout << "The difference between num2 and num1 is " << num2 - num1 <<endl;
    cout << "num1 divided by num2 is " << num1 / num2 << endl;
    cout << "num2 divided by num1 is " << num2 / num1 << endl;

    cout << "Enter 1 or 2 or something else" << endl;
    cin >> logicTest;

    if(logicTest == 1){
        cout << "The number entered was 1" << endl;
    }

    else if(logicTest == 2){
        cout << "The number entered was 2" << endl;
    }
    
    else {
        cout << "Idk that wasn't 1 or 2" << endl;
    }

    cout << "Enter a day of the week in numerical form (1 to 7) ";
    cin >> day;
    switch (day)
    {
        case 1:
            cout << "Monday" << endl;
            break;
        case 2:
            cout << "Tuesday" << endl;
            break;
        case 3:
            cout << "Wednesday" << endl;
            break;
        case 4:
            cout << "Thursday" << endl;
            break;
        case 5:
            cout << "Friday" << endl;
            break;
        case 6:
            cout << "Saturday" << endl;
            break;
        case 7:
            cout << "Sunday" << endl;
            break;
        default:
            cout << "I thought there were only 7 days in a week..." << endl;
    }
    cout << "Enter starting number: ";
    cin >> startNum;
    cout << "Enter ending number: ";
    cin >> endNum;

    while (startNum < endNum)
    {
        cout << startNum << endl;
        startNum++;
    }

    int loopFor;

    for (loopFor = 0; loopFor++; loopFor < 10)
    {
        loopFor++;
        cout << loopFor;
    }
    // Time to get funky
    FunkyTime();

    return 0;

}
