#ifndef SYSTEM_FUNC_H
#define SYSTEM_FUNC_H
#include <iostream>
#include <string>
#include <windows.h>
#include <conio.h>
#include <vector>
using namespace std;

class system_func{
private:
    char map1[16][16] =
        {
        {'#','#','#','#','#','#','#',' ','#','#','#','#','#','#','#','#'},
        {'#',' ',' ',' ',' ',' ','#',' ',' ','#',' ',' ',' ',' ',' ','#'},
        {'#',' ','#','#','#',' ','#',' ',' ','#',' ','#','#','#',' ','#'},
        {'#',' ','#','#','#',' ','#',' ',' ','#',' ','#','#','#',' ','#'},
        {'#',' ','#',' ','#',' ','#',' ',' ','#',' ','#',' ','#',' ','#'},
        {'#',' ','#',' ','#',' ','#',' ',' ','#',' ','#',' ','#',' ','#'},
        {'#',' ','#',' ','#',' ','#',' ',' ','#',' ','#',' ','#',' ','#'},
        {'#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#'},
        {'#','#','#','#','#','#',' ',' ',' ','#','#','#','#','#','#','#'},
        {'#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#'},
        {'#',' ','#',' ','#',' ',' ',' ',' ',' ','#','#','#','#',' ','#'},
        {'#',' ','#',' ','#',' ','#','#','#',' ',' ',' ',' ','#',' ','#'},
        {'#',' ','#',' ','#',' ','#',' ',' ','#',' ','#',' ','#',' ','#'},
        {'#',' ','#','#','#',' ','#',' ',' ','#',' ','#',' ','#',' ','#'},
        {'#',' ',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ','#'},
        {'#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#'}
        };
    char map2[16][16] =
        {
        {'#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#'},
        {'#',' ','#',' ',' ',' ','#',' ',' ','#',' ',' ',' ',' ',' ','#'},
        {'#',' ','#',' ','#',' ','#','#',' ','#',' ','#',' ','#',' ','#'},
        {'#',' ','#',' ','#',' ','#',' ',' ','#',' ','#',' ','#',' ','#'},
        {'#',' ',' ',' ','#',' ','#',' ',' ','#',' ','#',' ','#',' ','#'},
        {'#',' ','#','#','#',' ','#',' ',' ','#',' ','#',' ',' ',' ','#'},
        {'#',' ',' ',' ','#',' ','#',' ','#','#',' ','#','#','#','#','#'},
        {'#','#','#','#','#',' ','#',' ',' ',' ',' ',' ',' ',' ',' ','#'},
        {'#',' ',' ',' ',' ',' ',' ',' ','#','#','#','#',' ','#','#','#'},
        {'#',' ','#','#','#','#','#',' ','#',' ',' ','#',' ',' ',' ','#'},
        {'#',' ',' ',' ',' ',' ',' ',' ','#',' ',' ','#',' ',' ',' ','#'},
        {'#',' ','#','#','#','#','#',' ','#',' ',' ','#','#','#',' ','#'},
        {'#',' ',' ',' ',' ',' ','#',' ','#',' ',' ','#',' ',' ',' ','#'},
        {'#','#','#','#','#',' ','#',' ','#',' ',' ','#',' ',' ',' ','#'},
        {'#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#'},
        {'#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#'}
        };
    char map3[16][16] =
        {
        {'#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#'},
        {'#',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ','#',' ',' ','#'},
        {'#',' ','#',' ','#',' ','#','#','#','#','#',' ','#',' ',' ','#'},
        {'#',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#'},
        {'#',' ','#',' ','#','#','#','#','#','#','#','#','#',' ',' ','#'},
        {'#',' ','#',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ',' ','#'},
        {'#',' ','#',' ','#',' ',' ',' ',' ','#','#','#','#',' ',' ','#'},
        {'#',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#'},
        {'#','#','#',' ','#',' ',' ',' ',' ','#','#','#','#','#','#','#'},
        {'#',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ',' ','#'},
        {'#','#','#',' ','#',' ',' ',' ',' ','#',' ','#',' ','#',' ','#'},
        {'#',' ',' ',' ','#','#','#','#','#','#',' ','#',' ','#',' ','#'},
        {'#',' ',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ','#',' ','#'},
        {'#',' ',' ',' ','#',' ','#',' ','#',' ',' ','#',' ','#',' ','#'},
        {'#',' ',' ',' ','#',' ',' ',' ','#',' ',' ','#',' ',' ',' ','#'},
        {'#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#'}
        };
    struct enemy_struct{
        int enemy_x;
        int enemy_y;
    };
    struct walk {
	short walk_count;
	short x;
	short y;
	short back;
    };
    struct target {
	short x;
	short y;
    };
    vector<target> walk_queue;
    vector<walk> BFSArray;
    char tmp_map[16][16];
    int old_x;
    int old_y;
    int score;
    char character;
    char enemy;
    char berries;
    char loot_coins;
    char contraption_switch;
    char contraption;
    char exit;
    int pos_x;
    int pos_y;
    bool iswall;
    bool isenemy;
    bool isberry;
    bool iscontraption;
    bool islootcoin;
    int lives;
    HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD CursorPosition;
    // screen res
    int nScreenWidth = 17;
    int nScreenHeight = 26 ;
    DWORD colors;
    WORD color;
    COORD c;
    enemy_struct e1;
    enemy_struct e2;
    enemy_struct e3;
    void move_left(int);
    void move_right(int);
    void move_up(int);
    void move_down(int);
public:
    system_func();
    void AddArray( int , int , int  , int  );
    void FindPath( int , int , int , int , int);
    void gotoxy(int, int);
    void drawBorder();
    void setcursor(bool, DWORD);
    void open_contraption(int , int);
    void game_maps(int );
    void create_profile(string, int);
    void game_controls(int);
    void ui_keyboard(int);
    void character_color(int, int);
    void text_display(int);
    void main_menu();
    void pause(int);
    void set_spawnpnt(int );
    void removingitems(int, int, int);
    void dashboard();
    bool char_die();
    void death_screen();
    void credits();
    bool tocontinue();
    bool isfinish; // variable for main func
    void enemy_spawn(int);
};
system_func::system_func(){

    iswall = false;
    isenemy = false;
    isberry = false;
    iscontraption = false;
    isfinish = false;
    islootcoin = false;
    score = 0;
    lives = 3;
    character = '>';
    enemy = '@';
    berries = 'O';
    loot_coins = 'Ø';
    contraption_switch = 'E';
    contraption = '±';
    exit = 'F';
    map1[0][7] = exit;
    map1[1][7] = contraption;
    map1[4][3] = berries;
    map1[12][3] = berries;
    map1[3][12] = berries;
    map2[0][7] = exit;
    map2[1][1] = contraption_switch;
    map2[1][7] = contraption;
    map2[8][12] = contraption;
    map2[11][14] = contraption;
    map2[10][12] = loot_coins;
    map2[5][3] = berries;
    map2[4][14] = berries;
    map2[12][12] = berries;
    map3[7][9] = contraption;
    map3[1][1] = berries;
    map3[11][1] = contraption_switch;
    map3[8][3] = contraption;
    map3[7][6] = exit;
    map3[1][14] = berries;
    map3[14][14] = berries;
    color = 2;
}
void system_func::gotoxy(int x, int y){
	CursorPosition.X = x;
	CursorPosition.Y = y;
	SetConsoleCursorPosition(console, CursorPosition);
}
void system_func::AddArray( int x, int y, int wc , int back ){
	if( tmp_map[y][x] == ' ' || tmp_map[y][x] == '.' ){
		tmp_map[y][x] = '#';
		walk tmp;
		tmp.x = x;
		tmp.y = y;
		tmp.walk_count = wc;
		tmp.back = back;
		BFSArray.push_back( tmp );
	}
}
void system_func::FindPath( int sx, int sy, int x, int y , int map_choice){
	if (map_choice == 1){
        memcpy( tmp_map, map1, sizeof(map1) );
        BFSArray.clear();
        walk tmp;
        tmp.x = sx;
        tmp.y = sy;
        tmp.walk_count = 0;
        tmp.back = -1;
        BFSArray.push_back( tmp );
	}
	else if (map_choice == 2){
        memcpy( tmp_map, map2, sizeof(map2) );
        BFSArray.clear();
        walk tmp;
        tmp.x = sx;
        tmp.y = sy;
        tmp.walk_count = 0;
        tmp.back = -1;
        BFSArray.push_back( tmp );
	}
	else if (map_choice == 3){
        memcpy( tmp_map, map3, sizeof(map3) );
        BFSArray.clear();
        walk tmp;
        tmp.x = sx;
        tmp.y = sy;
        tmp.walk_count = 0;
        tmp.back = -1;
        BFSArray.push_back( tmp );
	}
	int i = 0;
	while( i < BFSArray.size() ){
		if( BFSArray[i].x == x && BFSArray[i].y == y ){
			walk_queue.clear();
			target tmp2;
			while( BFSArray[i].walk_count != 0 ){
				tmp2.x = BFSArray[i].x;
				tmp2.y = BFSArray[i].y;
				walk_queue.push_back( tmp2 );

				i = BFSArray[i].back;
			}

			break;
		}

		AddArray( BFSArray[i].x+1, BFSArray[i].y, BFSArray[i].walk_count+1, i );
		AddArray( BFSArray[i].x-1, BFSArray[i].y, BFSArray[i].walk_count+1, i );
		AddArray( BFSArray[i].x, BFSArray[i].y+1, BFSArray[i].walk_count+1, i );
		AddArray( BFSArray[i].x, BFSArray[i].y-1, BFSArray[i].walk_count+1, i );
		i++;
	}
	BFSArray.clear();
}
void system_func::drawBorder(){
	for(int i=0; i<nScreenHeight; i++){
		gotoxy(nScreenWidth, i); cout << "±";
		gotoxy(nScreenWidth+30, i); cout << "±";
	}
}
void system_func::setcursor(bool visible, DWORD size){
	if(size == 0)
	{
		size = 20;
	}
	CONSOLE_CURSOR_INFO lpCursor;
	lpCursor.bVisible = visible;
	lpCursor.dwSize = size;
	SetConsoleCursorInfo(console,&lpCursor);
}
void system_func::open_contraption(int map_choice, int completed){  // true - 0; false - 1
    if(map_choice == 1 && completed  == 0 ){
        map1[1][7] = ' ';
    }
    else if(map_choice == 2){
        if(completed == 0){
            map2[1][7] = ' ';
        }
        else{
            map2[8][12] = ' ';
            map2[11][14] = ' ';
        }
    }
    else if(map_choice == 3){
        if(completed == 0){
            map3[7][9] = ' ';
        }
        else{
            map3[8][3] = ' ';
        }
    }
}
void system_func::game_maps(int map_choice){
    if(map_choice == 1){
        for(int i = 0; i < 16; i++){
            for(int k = 0; k <16; k++){
                gotoxy(k,i); cout << map1[i][k];
            }
		cout << '\n';
        }
    }
    else if(map_choice == 2){
        for(int i = 0; i < 16; i++){
            for(int k = 0; k <16; k++){
                gotoxy(k,i); cout << map2[i][k];
            }
		cout << '\n';
        }
    }
    else if(map_choice == 3){
        for(int i = 0; i < 16; i++){
            for(int k = 0; k <16; k++){
                gotoxy(k,i); cout << map3[i][k];
            }
		cout << '\n';
        }
    }
    else{
        cout << "[!] ERROR - Entered invalid input. Please try again";
    }
}
void system_func::move_up(int map_choice){
    character = 'V';
    if(map_choice == 1){
        if(map1[pos_y-1][pos_x] == ' '){pos_y--;}
        else if(map1[pos_y-1][pos_x] == berries){pos_y--;removingitems(pos_x,pos_y,1);score+=100;}
        else if(map1[pos_y-1][pos_x] == loot_coins){score+=1000; pos_y--; removingitems(pos_x,pos_y,1);}
        else if(map1[pos_y-1][pos_x] == exit){isfinish = true; pos_y--;}
    }
    else if(map_choice == 2){
        if(map2[pos_y-1][pos_x] == ' '){pos_y--;}
        else if(map2[pos_y-1][pos_x] == berries){pos_y--;removingitems(pos_x,pos_y,2);score+=100;}
        else if(map2[pos_y-1][pos_x] == loot_coins){score+=1000; pos_y--; removingitems(pos_x,pos_y,2);}
        else if(map2[pos_y-1][pos_x] == exit){isfinish = true; pos_y--;}
    }
    else if(map_choice == 3){
        if(map3[pos_y-1][pos_x] == ' '){pos_y--;}
        else if(map3[pos_y-1][pos_x] == berries){pos_y--;removingitems(pos_x,pos_y,3);score+=100;}
        else if(map3[pos_y-1][pos_x] == loot_coins){score+=1000; pos_y--; removingitems(pos_x,pos_y,3);}
        else if(map3[pos_y-1][pos_x] == exit){isfinish = true; pos_y--;}
    }
}
void system_func::move_down(int map_choice){
    character = '^';
    if(map_choice == 1){
        if(map1[pos_y+1][pos_x] == ' '){pos_y++;}
        else if(map1[pos_y+1][pos_x] == berries){pos_y++;removingitems(pos_x,pos_y,1);score+=100;}
        else if(map1[pos_y+1][pos_x] == loot_coins){score+=1000; pos_y++; removingitems(pos_x,pos_y,1);}
        else if(map1[pos_y+1][pos_x] == exit){isfinish = true; pos_y++;}
    }
    else if(map_choice == 2){
        if(map2[pos_y+1][pos_x] == ' '){pos_y++;}
        else if(map2[pos_y+1][pos_x] == berries){pos_y++;removingitems(pos_x,pos_y,2);score+=100;}
        else if(map2[pos_y+1][pos_x] == loot_coins){score+=1000; pos_y++; removingitems(pos_x,pos_y,2);}
        else if(map2[pos_y+1][pos_x] == exit){isfinish = true; pos_y++;}
    }
    else if(map_choice == 3){
        if(map3[pos_y+1][pos_x] == ' '){pos_y++;}
        else if(map3[pos_y+1][pos_x] == berries){pos_y++;removingitems(pos_x,pos_y,3);score+=100;}
        else if(map3[pos_y+1][pos_x] == loot_coins){score+=1000; pos_y++; removingitems(pos_x,pos_y,3);}
        else if(map3[pos_y+1][pos_x] == exit){isfinish = true; pos_y++;}
    }
}
void system_func::move_right(int map_choice){
    character = '<';
    if(map_choice == 1){
        if(map1[pos_y][pos_x+1] == ' '){pos_x++;}
        else if(map1[pos_y][pos_x+1] == berries){pos_x++;removingitems(pos_x,pos_y,1);score+=100;}
        else if(map1[pos_y][pos_x+1] == loot_coins){score+=1000; pos_x++; removingitems(pos_x,pos_y,1);}
        else if(map1[pos_y][pos_x+1] == exit){isfinish = true; pos_x++;}
    }
    else if(map_choice == 2){
        if(map2[pos_y][pos_x+1] == ' '){pos_x++;}
        else if(map2[pos_y][pos_x+1] == berries){pos_x++;removingitems(pos_x,pos_y,2);score+=100;}
        else if(map2[pos_y][pos_x+1] == loot_coins){score+=1000; pos_x++; removingitems(pos_x,pos_y,2);}
        else if(map2[pos_y][pos_x+1] == exit){isfinish = true; pos_x++;}
    }
    else if(map_choice == 3){
        if(map3[pos_y][pos_x+1] == ' '){pos_x++;}
        else if(map3[pos_y][pos_x+1] == berries){pos_x++;removingitems(pos_x,pos_y,3);score+=100;}
        else if(map3[pos_y][pos_x+1] == loot_coins){score+=1000; pos_x++; removingitems(pos_x,pos_y,3);}
        else if(map3[pos_y][pos_x+1] == exit){isfinish = true; pos_x++;}
    }
}
void system_func::move_left(int map_choice){
    character = '>';
    if(map_choice == 1){
        if(map1[pos_y][pos_x-1] == ' '){pos_x--;}
        else if(map1[pos_y][pos_x-1] == berries){pos_x--;removingitems(pos_x,pos_y,1);score+=100;}
        else if(map1[pos_y][pos_x-1] == loot_coins){score+=1000; pos_x--; removingitems(pos_x,pos_y,1);}
        else if(map1[pos_y][pos_x-1] == exit){isfinish = true; pos_x--;}
    }
    else if(map_choice == 2){
        if(map2[pos_y][pos_x-1] == ' '){pos_x--;}
        else if(map2[pos_y][pos_x-1] == berries){pos_x--;removingitems(pos_x,pos_y,2);score+=100;}
        else if(map2[pos_y][pos_x-1] == loot_coins){score+=1000; pos_x--; removingitems(pos_x,pos_y,2);}
        else if(map2[pos_y][pos_x-1] == exit){isfinish = true; pos_x--;}
    }
    else if(map_choice == 3){
        if(map3[pos_y][pos_x-1] == ' '){pos_x--;}
        else if(map3[pos_y][pos_x-1] == berries){pos_x--;removingitems(pos_x,pos_y,3);score+=100;}
        else if(map3[pos_y][pos_x-1] == loot_coins){score+=1000; pos_x--; removingitems(pos_x,pos_y,3);}
        else if(map3[pos_y][pos_x-1] == exit){isfinish = true; pos_x--;}
    }
}
void system_func::game_controls(int map_choice){
    int no_berries = 0;
    int ex = 1;
	int ey = 1;
	int speedmod = 3;
	int frame = 0;
	FindPath( ex,ey,pos_x,pos_y, map_choice );
    while(isfinish == false || char_die() == true){
        dashboard();            // print dashboard
        gotoxy( pos_x, pos_y ); cout << " ";
        gotoxy( ex, ey ); cout << " ";
        old_x = pos_x;								// guide para sa reomoving of items
		old_y = pos_y;

        ui_keyboard(map_choice);    // WHILE LOOP

        if( old_x != pos_x || old_y != pos_y ){
			FindPath( ex,ey,pos_x, pos_y , map_choice);
		}
        character_color(pos_x, pos_y);
        removingitems(ey, ex, map_choice);

		if( frame%speedmod == 0 && walk_queue.size() != 0 ){		// speed of enemy
			ex = walk_queue.back().x;
			ey = walk_queue.back().y;
			walk_queue.pop_back();
		}

		gotoxy( ex, ey ); cout << enemy;

		if( ex == pos_x && ey == pos_y ){
            char_die();
			break;
		}
		text_display(map_choice);
		Sleep( 100 );
		frame++;
    }
    system("CLS");
}
void system_func::ui_keyboard(int map_choice){
    if(GetAsyncKeyState(VK_RIGHT) != 0){
        move_right(map_choice);
    }
    else if(GetAsyncKeyState(VK_LEFT) != 0){
        move_left(map_choice);
    }
    else if(GetAsyncKeyState(VK_UP) != 0){
        move_up(map_choice);
    }
    else if(GetAsyncKeyState(VK_DOWN) != 0){
        move_down(map_choice);
    }
    else if(GetAsyncKeyState(VK_SPACE) != 0){
        if(pos_x == 1 && pos_y == 2 && map_choice == 2 || pos_x == 1 && pos_y == 12 && map_choice == 3 || pos_x == 2 && pos_y == 11 && map_choice == 3){
        open_contraption(map_choice, 1);
        }
    }
}
void system_func::character_color(int x, int y){
    c = {pos_x, pos_y};                             // set coord for color of the char
    gotoxy(pos_x, pos_y); cout << character;        // setting character position
    WriteConsoleOutputAttribute(GetStdHandle(STD_OUTPUT_HANDLE), &color, 1, c, &colors);    // change character color
}
void system_func::text_display(int map_choice){
    gotoxy(nScreenWidth+2, 12);cout << "There's a switch";
    gotoxy(nScreenWidth+2, 13);cout << "Press [SPACE] to activate";
    if(score >= 300){
        gotoxy(nScreenWidth+2, 10);cout << "Something opened";
        open_contraption(map_choice, 0);
    }
}
void system_func::main_menu(){
    cout<<" ______________________________________________________________________________________________"<<endl;
	cout<<" |                                                                                            |"<<endl;
	cout<<" |                           ************                                                     |"<<endl;
	cout<<" |   **********     *****  ****************        ***      ***       *****  ***      ****    |"<<endl;
	cout<<" |   **********    ****** ******************       ****    ****      ******  ****     ****    |"<<endl;
	cout<<" |   ****   ***   ***  ** *******                  ****   *****     ***  **  *****    ****    |"    <<endl;
	cout<<" |   **********  ******** ******                   ***** ******    ********  ******   ****    |"  <<endl;
	cout<<" |   ********** ***   *** ******           *****   **** * *****   ***   ***  **** **  ****    |"  <<endl;
	cout<<" |   ***       ***    *** *******                  ****    ****  ***    ***  ****  ** ****    |" <<endl;
	cout<<" |   ***      ***     *** ******************       ****    **** ***     ***  ****   ******    |" <<endl;
	cout<<" |   ***      ***     ***  ***************         ****    **** ***     ***  ****    *****    |" <<endl;
	cout<<" |                           ************                                                     |"<<endl;
	cout<<" |                                                                                            |"<<endl;
	cout<<" |                                [ENTER TO START A GAME]                                     |" <<endl;
	cout<<" |                                                                                            |"<<endl;
	cout<<" |                                                                                            |" <<endl;
	cout<<" |   ********    ********    ********     ********                 *******                    |"<<endl;
	cout<<" |   ***  * *    ***  * *    ***  * *     ***  * *                *********                   |"<<endl;
	cout<<" |   ********    ********    ********     ********                ****       *  *  *  *  *    |"<<endl;
	cout<<" |   **  *  **   **  *  **   **  *  **    **  *  **               *********                   |"<<endl;
	cout<<" |   *   *   **  *   *   **  *   *   **   *   *   **               *******                    |"<<endl;
	cout<<" |____________________________________________________________________________________________|"<<endl;
}
void system_func::set_spawnpnt(int map_choice){
    if(map_choice == 1){
        pos_x = 7;
        pos_y = 14;
    }
    else if(map_choice == 2){
        pos_x = 1;
        pos_y = 14;
    }
    else if(map_choice == 3){
        pos_x = 1;
        pos_y = 14;
    }
    old_x = pos_x;
    old_y = pos_y;
}
void system_func::removingitems(int x, int y, int map_choice){
    if(map_choice == 1){
        map1[y][x] = ' ';
    }
    else if(map_choice == 2){
        map2[y][x] = ' ';
    }
    else if(map_choice == 3){
        map3[y][x] = ' ';
    }
}
void system_func::dashboard(){
    gotoxy(nScreenWidth+2, 4); cout << "Score: " << score;
    gotoxy(nScreenWidth+2, 5); cout << "X-position: " << pos_x;
    gotoxy(nScreenWidth+2, 6); cout << "Y-Position: " << pos_y;
}
bool system_func::char_die(){   // true - died
    return true;
}
void system_func::death_screen(){
    system("CLS");
    cout << endl << "\t\t\t SCORE: " << score << endl << endl;
    cout << "\t\t\tYou died!" << endl;
    cout << "\t\t\t GAME OVER!" << endl;
}
void system_func::credits(){
    string title = "PAC-BET MEMBERS";
    string rep = "Represents:";
    string Encoder = "Encoder: Kairus Tecson & Lloyd Hombre";
    string Writer = "Technical Writer: Shekyna Balason";
    string pres = "Presentor: Ron Iverson Del Mundo";
    string inst = "Instructor: Maurice Oliver Dela Cruz";
    string date = "7/21/2021";

    cout << endl;
    cout << "\n  \t\t";
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
bool system_func::tocontinue(){
    char choice = ' ';
    cin.ignore(INT_MAX , 1);
    cout << "Do you want to continue? [Y | N]: ";
    cin >> choice;
    if(choice == 'Y' || choice == 'y'){ return true;    }
    else { return false; }
}
void system_func::enemy_spawn(int map_choice){
    if (map_choice == 1){
        e1.enemy_x = 1;
        e1.enemy_y = 1;
        e2.enemy_x = 14;
        e2.enemy_y = 1;
        e3.enemy_x = 1;
        e3.enemy_y = 14;
    }
    else if (map_choice == 2){
        e1.enemy_x = 1;
        e1.enemy_y = 9;
        e2.enemy_x = 5;
        e2.enemy_y = 8;
        e3.enemy_x = 9;
        e3.enemy_y = 13;
    }
    else if (map_choice == 3){
        e1.enemy_x = 5;
        e1.enemy_y = 2;
        e2.enemy_x = 12;
        e2.enemy_y = 10;
        e3.enemy_x = 1;
        e3.enemy_y = 5;
    }
}

#endif
