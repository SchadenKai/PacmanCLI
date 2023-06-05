#include <iostream>
#include <string>
#include <windows.h>
#include <conio.h>
#include <stdlib.h>
#include "system_func.h"
#define SCREEN_WIDTH 90
#define SCREEN_HEIGTH 90

using namespace std;

int choosemap(){
    int choice;
    cout << endl << endl << "\t\t Choose your map" << endl;
    cout << "\t\t 1 - 2 - 3" << endl;
    cin >> choice;
    return choice;
}
int main(){
    system("title PACMAN: THE ESCAPE 2021");
    do{
        system_func systemobj;
        system("CLS");
        systemobj.main_menu();
        int choice;
        int temp_map;
        getch();
        system("CLS");
        cout << endl << endl << "\t\t[1] START " << endl;
        cout << "\t\t[2] QUIT " << endl;
        cin >> choice;
            cin.clear();
            cin.ignore(INT_MAX, '\n');
            switch(choice){
        case 1:
            char choices;
            temp_map = choosemap();
            system("CLS");
            do{
            choices = ' ';
            systemobj.isfinish = false;
            systemobj.setcursor(0,0);
            systemobj.drawBorder();
            systemobj.game_maps(temp_map);
            systemobj.set_spawnpnt(temp_map);
            systemobj.enemy_spawn(temp_map);
            systemobj.game_controls(temp_map);
            if(systemobj.isfinish == true){
                cin.clear();
                cin.ignore(INT_MAX, '\n');
                cout << "   Congrats! You make it out!  "<< endl;
                cout << "   Do you want to continue? [Y] Enter to continue..." << endl;
                cout << "                                                    ";
                cin >> choices;
                if(choices == 'Y' || choices == 'y'){temp_map++;}
            }
            }while(choices == 'Y' || choices == 'y');
                if(choice != 'Y' || choices != 'y'){
                    systemobj.death_screen();
                    systemobj.credits();
                }
            break;
        case 2:
            exit(EXIT_SUCCESS);
            break;
            }
    }
    while(true);
return 0;
}
