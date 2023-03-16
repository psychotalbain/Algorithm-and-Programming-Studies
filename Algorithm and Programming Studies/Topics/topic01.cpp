//File Name: Topic 01 - Logic
//Purpose: Learn a little about Logic

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    char answer;

    cout << "Theme is Logic" << endl << endl; cout << "Question 01." << endl << endl;
    cout << "My father have 42 years old. My dog have 8. If my dog was a human his age should be 56 years old." << endl; cout << "How many years my father should have if he was a dog?" << endl <<endl;
    cout << "A - 5" << endl;cout << "B - 6" << endl;cout << "C - 7" << endl;cout << "D - 8" << endl;cout << "E - 9" << endl << endl;
    cin >> answer;cout << endl;

    if (answer == 'B' || answer == 'b')
    {
        cout << "Correct! Your father should have 6 years, because 1 year of a dog is equivalent of 7 years of a human" << endl;
    }else {cout << "Wrong! The correct answer should be the letter B!" << endl; cout << "Because your father should have 6 years, because 1 year of a dog is equivalent of 7 years of a human." << endl;}
    cout << endl << endl;

    // Old code will use later

    /*int MatrizA[10][10], Random, Temp;

    srand(time(0));

    for (int i = 0; i<10; ++i )
    {
        for (int j = 0; j<10; ++j)
        {
            Random = (rand()%10);
            MatrizA[i][j] = Random;
            cout << MatrizA[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;

    for ( int i = 0; i < 10; ++ i )
    {
        Temp = MatrizA [i][i];
        MatrizA [i][i] = MatrizA [i][9-i];
        MatrizA[i][9-i] = Temp;
    }

    for (int i = 0; i < 10; ++ i)
    {
        for (int j = 0; j < 10; ++j)
        {
            cout << MatrizA[i][j] << " ";
        }
        cout << endl;
    }*/

}
