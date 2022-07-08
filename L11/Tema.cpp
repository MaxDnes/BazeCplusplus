#include <iostream>   
#include <conio.h> 

using namespace std;

int main()
{
    int a, b, c, R;
    int Ba = -1, Bb = -1, Bc = -1, Clt = -1;
    X:
    system("cls");
    cout << "\n\n\t Main Menu " << endl;
    cout << "\t  1. Enter values for a,b,c " << endl;
    cout << "\t  2. Show your values " << endl;
    cout << "\t  3. Calculate a+b-c " << endl;
    cout << "\t  4. Show result " << endl;
    cout << "\tESC. Exit" << endl;
    switch (_getch())
    {
    case 49:
        Y:
        system("cls");
        cout << "\n\n\t Entering values \n\t a.Enter a value for a \n\t b.Enter a value for b \n\t c.Enter a value for c \n\tESC.Go to main menu" << endl;
        switch (_getch())
        {
        case 'a': cout << "a = "; cin >> a;Clt = 0; Ba = 0; goto Y;
        case 'b': cout << "b = "; cin >> b;Clt = 0; Bb = 0; goto Y;
        case 'c': cout << "c = "; cin >> c;Clt = 0; Bc = 0; goto Y;
        case 27: goto X;
        default: cout << "Invalid input,press a,b,c or ESC:" << endl; system("pause"); goto Y;
        }
    case 50:
        Z:
        system("cls");
        cout << "Show a/b/c?\nTo return to main menu press ESC:" << endl;
        switch (_getch())
        {
        case 'a':
            if (Ba >= 0) cout << "a = " << a << endl;
            else cout << "Error a didn't get any values!" << endl;
            system("pause");
            goto Z;
        case 'b':
            if (Bb >= 0) cout << "b = " << b << endl;
            else cout << "Error b didn't get any values!" << endl;
            system("pause");
            goto Z;
        case 'c':
            if (Bc >= 0) cout << "c = " << c << endl;
            else cout << "Error c didn't get any values!" << endl;
            system("pause");
            goto Z;
        case 27: goto X;
        default: cout << "Invalid input,press a,b,c or ESC:" << endl; system("pause"); goto Z;
        }
    case 51:
        if (Clt == 0 && (Ba == 0 || Bb == 0 || Bc == 0 ) && Ba > -1 && Bb > -1 && Bc > -1)
        {
            cout << "Calcualting...\nDone!" << endl;
            R = a + b - c;
            Clt++;
            Ba++;
            Bb++;
            Bc++;
        }
        else if (!(Ba >= 0)) cout << "Error enter a(check the first step)!" << endl; 
        else if (!(Bb >= 0)) cout << "Error enter b(check the first step)!" << endl; 
        else if (!(Bc >= 0)) cout << "Error enter c(check the first step)!" << endl;
        else
        {
            cout << "The answer was already calculated to show it press \'4\' !" << endl;
        }
        break;
    case 52:
        if (Clt == 1) cout << "The answer to: " << a << " + " << b << " - " << c << " = " << R << endl;
        else cout << "Error the asnwer wasn't calculated to calculate it press \'3\' " << endl;
        break;
    case 27: exit(0);
    default: cout << "Invalid input,press 1,2,3 or ESC" << endl;
    }
    system("pause");
    goto X;
    return 0;
}

/*
Acasa
Sa se realizeze a+b-c prin intermediul unui meniu cu ajutorul altor 3 algoritmi
*/