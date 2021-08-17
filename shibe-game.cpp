#include <iostream>
#include <string>


using namespace std;

int main() {
    
    int shibe;
    bool validAnswer = false;
    string shibeName;

    cout << endl << "Shibe Simulator v1.0" << endl << endl;

    while (!validAnswer){
        cout << "Select your fighter" << endl << "Press 1 for Shibe" << endl << "Press 2 for Shibette" << endl;
        cin >> shibe;

        switch(shibe)
        {
        case 1:
            cout << endl << "Shibe selected!" << endl;
            validAnswer = true;
            break;
        case 2:
            cout << endl << "Shibette selected!" << endl;
            validAnswer = true;
            break;
        default:
            cout << endl << "Invalid Shibe entity selected. Please try again.";
        }
    }
    if (shibe == 1){
        shibeName = "Shibe";
    }
    else if (shibe == 2)
    {
        shibeName = "Shibette";
    }
    else{
        cout << "A critical error has occured. NO_SHIBE" << endl;
        return 1;
    }

validAnswer = false;
while (!validAnswer){
    cout << "You are approached by a human eating dragon. What do you do?" << endl;
    cout << "[1] It doesn't effect you, you're not a human." << endl << "[2] Use " << shibeName << " vision" << endl << "[3] Consume dinner" << endl;
    int optChoice;
    cin >> optChoice;
    switch(optChoice){
        case 1:
            cout << "You walked away from the human eating dragon. It leaves you alone." << endl;
            validAnswer = true;
            break;
        case 2:
            cout << "You use your laser sharp " << shibeName << " vision and destroy every atom of the human eating dragon. Time for a snack!" << endl;
            validAnswer = true;
            break;
        case 3:
            cout << "You replenish your hunger by eating the dragon's right foot. Tasty." << endl;
            validAnswer = true;
            break;
        default:
            cout << "You have confused " << shibeName << " please try again.";
    }
}

validAnswer = false;
while (!validAnswer){
    int randNum = rand() % 2 + 1;
    switch (randNum){
        case 1:
            cout << "Your " << shibeName << " was badly injured. You died!" << endl;
            cout << "You did not complete the game. Goodbye." << endl;
            validAnswer = true;
            return 0;
            break;
        case 2:
            cout << "Your " << shibeName << " narrowly avoided being injured. Watch those dragons!" << endl;
            validAnswer = true;
            break;
        default:
            cout << "Something has gone wrong. BAD_RND";
    }
}

validAnswer = false;
while (!validAnswer){
    cout << "You reach a tavern, what do you do?" << endl;
    cout << "[1] Go in for a pint." << endl << "[2] Carry on down the road." << endl << "[3] Try to steal a pint.";
    int optChoice;
    cin >> optChoice;
    switch(optChoice)
    {
        case 1:
            cout << "You went in for a pint. Or two. Or six. Your " << shibeName << " is very drunk and has no coin left." << endl;
            validAnswer = true;
            break;
        case 2:
            cout << "You continue down the road, ignoring the tavern." << endl;
            validAnswer = true;
            break;
        case 3:
            cout << "You go full on ninja mode and sneak in behind the tavern. Nobody notices your theft." << endl;
            validAnswer = true;
            break;
        default:
            cout << "Ey?";
    }
}


cout << "Looks like you've finished the game so far. Congrats I guess." << endl;
return 0;
}
