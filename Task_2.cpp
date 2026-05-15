#include <iostream>
using namespace std;

int score = 0;

void question1()
{
    int choice;

    cout << "\nQ1. Which language is known as the mother of programming languages?\n";
    cout << "1. C\n";
    cout << "2. HTML\n";
    cout << "3. CSS\n";
    cout << "4. Photoshop\n";

    cout << "Enter your choice: ";
    cin >> choice;

    switch(choice)
    {
        case 1:
            cout << "Correct Answer!\n";
            score++;
            break;

        case 2:
        case 3:
        case 4:
            cout << "Wrong Answer!\n";
            break;

        default:
            cout << "Invalid Choice!\n";
    }
}

void question2()
{
    int choice;

    cout << "\nQ2. Who developed C language?\n";
    cout << "1. Elon Musk\n";
    cout << "2. Dennis Ritchie\n";
    cout << "3. Bill Gates\n";
    cout << "4. Mark Zuckerberg\n";

    cout << "Enter your choice: ";
    cin >> choice;

    switch(choice)
    {
        case 2:
            cout << "Correct Answer!\n";
            score++;
            break;

        case 1:
        case 3:
        case 4:
            cout << "Wrong Answer!\n";
            break;

        default:
            cout << "Invalid Choice!\n";
    }
}

void question3()
{
    int choice;

    cout << "\nQ3. Which symbol is used to end a statement in C++?\n";
    cout << "1. :\n";
    cout << "2. .\n";
    cout << "3. ;\n";
    cout << "4. #\n";

    cout << "Enter your choice: ";
    cin >> choice;

    switch(choice)
    {
        case 3:
            cout << "Correct Answer!\n";
            score++;
            break;

        case 1:
        case 2:
        case 4:
            cout << "Wrong Answer!\n";
            break;

        default:
            cout << "Invalid Choice!\n";
    }
}

void question4()
{
    int choice;

    cout << "\nQ4. Which of these is not a programming language?\n";
    cout << "1. Python\n";
    cout << "2. Java\n";
    cout << "3. HTML\n";
    cout << "4. C++\n";

    cout << "Enter your choice: ";
    cin >> choice;

    switch(choice)
    {
        case 3:
            cout << "Correct Answer!\n";
            score++;
            break;

        case 1:
        case 2:
        case 4:
            cout << "Wrong Answer!\n";
            break;

        default:
            cout << "Invalid Choice!\n";
    }
}

void question5()
{
    int choice;

    cout << "\nQ5. Which keyword is used to create a function in C++?\n";
    cout << "1. define\n";
    cout << "2. void\n";
    cout << "3. class\n";
    cout << "4. include\n";

    cout << "Enter your choice: ";
    cin >> choice;

    switch(choice)
    {
        case 2:
            cout << "Correct Answer!\n";
            score++;
            break;

        case 1:
        case 3:
        case 4:
            cout << "Wrong Answer!\n";
            break;

        default:
            cout << "Invalid Choice!\n";
    }
}

int main()
{
    cout << "===== QUIZ GAME =====\n";

    question1();
    question2();
    question3();
    question4();
    question5();

    cout << "\n===== QUIZ FINISHED =====\n";
    cout << "Your Final Score: " << score << "/5\n";

    if(score >= 3)
    {
        cout << "PASS\n";
    }
    else
    {
        cout << "FAIL\n";
    }

    return 0;
}