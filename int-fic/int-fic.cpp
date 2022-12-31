// int-fic.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    cout << "Hello and welcome to my interactive fanfiction game based on Supernatural. In it, you play as Castiel and can make choices to change the story. At any time, enter Q to quit the game. Thank you and have fun!\n\n";

    string response = "";

    while (response.compare("Q") != 0)
    {
        cout << endl;
        cout << "\"C'mon up and attem, Cas\"";
        cout << "Dean says as he grabs your hand and pulls you up. The three of you have just finished fighting off 3 of Crowley's demons, but you got knocked down in the fight. Really, you were talking to Naomi and you became unaware of being shoved to the ground. What would you wish to say?\n";
        cout << "1) Thank you Dean\n";
        cout << "2) it didn't hurt when I came from heaven but it sure hurt when I fell for you\n";
        
        cin >> response;

        if (response.compare("1") == 0)
        {
            cout << "Dean pats you on the back and says \"no problem bud. Just glad we could gank them all this time\"\n";
        }
        else if (response.compare("2") == 0)
        {
            cout << "Dean turns from you and you swore you could see him blush.\n";
        }


        //break;
    }

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
