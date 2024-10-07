// Pranav Pramod
// 10/7/2024
// Extra: Added Emojis and While Loop

#include <iostream>
using namespace std;

// Variable for user choice
int choice;
bool isRunning = true;

int main()
{
    // Printing user emotions
    cout << "Emotions: \n1 - HAPPY \n2 - MAD \n3 - SAD \n4 - ANXIOUS \n5 - FINE" << endl;

    // Based on choice, print a seperate message. Loop forever unless a valid input is added.
    while (isRunning)
    {
        // User Input and storing in Choice
        cout << "How are you feeling?: " << endl;
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "I'm glad you're feeling that way! \U0001F600" << endl;
            isRunning = false;
            break;
        case 2:
            cout << "You can benefit from calming down! 😒" << endl;
            isRunning = false;
            break;
        case 3:
            cout << "I hope you feel better soon! 🥺" << endl;
            isRunning = false;
            break;
        case 4:
            cout << "Take a deep breath... 😤" << endl;
            isRunning = false;
            break;
        case 5:
            cout << "Glad to hear that! 😊" << endl;
            isRunning = false;
            break;
        default:
            cout << "Invalid Input! 🤨" << endl;
            break;
        }
    }

    return 0;
}