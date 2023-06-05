# include <iostream>
#include <windows.h>

using namespace std;
int main() {
    char ch;
	cout <<"_____________________________________________________________________________________"<<endl;
    cout << "\nCustomize you Character\n \n1. Blue \n2. Green \n3. Aqua \n4. Red \n5. Purple \n6. Yellow \n7. White \n8. Gray\n_____________________________________________________________________________________"<<endl;
    cout << "Choose your character colors you want: "<<endl;
    cin >> ch;

    switch(ch) {
        case '1':
    {
	system ("CLS");
 	WORD color =1;
  	COORD c = { 0 };
  	DWORD colors;

	cout << ">" << endl;
	WriteConsoleOutputAttribute(GetStdHandle(STD_OUTPUT_HANDLE), &color, 1, c, &colors);
	return 0;
    
	}	
        break;
           
case '2': 
    {
	system ("CLS");
 	WORD color =2;
  	COORD c = { 0 };
  	DWORD colors;

		cout << ">" << endl;
		WriteConsoleOutputAttribute(GetStdHandle(STD_OUTPUT_HANDLE), &color, 1, c, &colors);
		return 0;
    
	}	
break;

case '3':
		{
	system ("CLS");
  	WORD color =3;
 	 COORD c = { 0 };
  	DWORD colors;

	cout << ">" << endl;
	WriteConsoleOutputAttribute(GetStdHandle(STD_OUTPUT_HANDLE), &color, 1, c, &colors);
	return 0;
    
		}	
break;

case '4':
		
		{
	system ("CLS");
  	WORD color =4;
 	 COORD c = { 0 };
  	DWORD colors;

	cout << ">" << endl;
	WriteConsoleOutputAttribute(GetStdHandle(STD_OUTPUT_HANDLE), &color, 1, c, &colors);
	return 0;
    
		}

break;

case '5':
	
		{
	system ("CLS");
  	WORD color =5;
 	 COORD c = { 0 };
  	DWORD colors;

	cout << ">" << endl;
	WriteConsoleOutputAttribute(GetStdHandle(STD_OUTPUT_HANDLE), &color, 1, c, &colors);
	return 0;
    
		}

break;
            
case '6':

		{
	system ("CLS");
  	WORD color =6;
 	 COORD c = { 0 };
  	DWORD colors;

	cout << ">" << endl;
	WriteConsoleOutputAttribute(GetStdHandle(STD_OUTPUT_HANDLE), &color, 1, c, &colors);
	return 0;
    
		}
break;
				
case '7':
	
		{
	system ("CLS");
  	WORD color =7;
 	 COORD c = { 0 };
  	DWORD colors;

	cout << ">" << endl;
	WriteConsoleOutputAttribute(GetStdHandle(STD_OUTPUT_HANDLE), &color, 1, c, &colors);
	return 0;
    
		}
break;
       
case '8':

		{
	system ("CLS");
  	WORD color =8;
 	 COORD c = { 0 };
  	DWORD colors;

	cout << ">" << endl;
	WriteConsoleOutputAttribute(GetStdHandle(STD_OUTPUT_HANDLE), &color, 1, c, &colors);
	return 0;
    
		}

break;	   
	    
default:
        	
            break;
    }

    return 0;
}
