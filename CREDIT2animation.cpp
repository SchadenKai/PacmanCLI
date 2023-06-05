#include <iostream>
#include<Windows.h>
using namespace std;
int main () //if nag void d gagana, kaya d ko muna nilagyan
{
    string title = "PAC-BET MEMBERS";
    string rep = "Represents:";
    string Encoder = "Encoder: Kairus Tecson & Lloyd Hombre";
    string Writer = "Technical Writer: Shekyna Balason";
    string pres = "Presentor: Ron Iverson Del Mundo";
    string inst = "Instructor: Maurice Oliver Dela Cruz";
    string date = "7/21/2021";

    cout << endl;
    cout << "\n  \t\t\t\t\t\t";
    for (auto an : title)
	{
        cout << an;
        Sleep(40);
    } cout << endl << endl;
    cout << "\n   \t";
    for (auto an : rep){
        cout << an;
        Sleep(40);
    } cout << endl << endl;
    cout << "\n\n   \t";
    for (auto an : Encoder){
        cout << an;
        Sleep(40);
    }
     cout << "\n\n   \t";
    for (auto an : Writer){
        cout << an;
        Sleep(40);
    }
     cout << "\n\n   \t";
    for (auto an : pres){
        cout << an;
        Sleep(40);
    }
     cout << "\n\n   \t";
    for (auto an : inst){
        cout << an;
        Sleep(40);
    }
    cout << "\n\n\n\n\n\n   \t\t\t\t\t\t\t\t\t\t\t";
    for (auto an : date	){
        cout << an;
        Sleep(40);
    }
    Sleep(1500);
}
