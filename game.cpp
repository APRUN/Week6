#include <iostream>
#include <windows.h>
using namespace std;

int inc;
int scorenew(int score);
void printMaze();
void gotoxy(int x, int y);
void erase(int x, int y, char previous);
void erasechar(int x, int y);
void printPacman(int x, int y);
void G1(int x, int y);
void G2(int x, int y);
char getCharAtxy(short int x, short int y);

main()
{
    int score = 0;
    int  score11 = 0;
    int pacmanX = 31;
    int pacmanY = 10;
    int ghostx = 4;
    int ghosty = 1;
    int ghostX = 3;
    int ghostY = 6;
    string directionhor = "right";
    string directionver = "up";
    char lastchar = ' ';

    bool gameRunning = true;

    system("cls");
    printMaze();
    printPacman(pacmanX, pacmanY);

    while (gameRunning)
    {
        // Ghost
        if (directionhor == "right")
        {
            char nextLocation = getCharAtxy(ghostx + 1, ghosty);
            if (nextLocation == '|')
            {
                directionhor = "left";
            }
            else if (nextLocation == ' ' || nextLocation == '.')
            {
                lastchar = nextLocation;
                erase(ghostx, ghosty, lastchar);
                ghostx = ghostx + 1;
                G1(ghostx, ghosty);
            }
        }

        if (directionhor == "left")
        {
            char nextLocation = getCharAtxy(ghostx - 1, ghosty);
            if (nextLocation == '|')
            {
                directionhor = "right";
            }
            else if (nextLocation == ' ' || nextLocation == '.')
            {
                lastchar = nextLocation;
                erase(ghostx, ghosty, lastchar);
                ghostx = ghostx - 1;
                G1(ghostx, ghosty);
            }
        }
        if (directionver == "up")
        {
            char nextLocation = getCharAtxy(ghostX, ghostY + 1);
            if (nextLocation == '#')
            {
                directionver = "down";
            }
            else if (nextLocation == ' ' || nextLocation == '.')
            {
                lastchar = nextLocation;
                erase(ghostX, ghostY, lastchar);
                ghostY = ghostY + 1;
                G2(ghostX, ghostY);
            }
        }
        if (directionver == "down")
        {
            char nextLocation = getCharAtxy(ghostX, ghostY - 1);
            if (nextLocation == '#')
            {
                directionver = "up";
            }
            else if (nextLocation == ' ' || nextLocation == '.')
            {
                lastchar = nextLocation;
                erase(ghostX, ghostY, lastchar);
                ghostY = ghostY - 1;
                G2(ghostX, ghostY);
            }
        }
        // Pacman

        if (GetAsyncKeyState(VK_LEFT))
        {
            char nextLocation = getCharAtxy(pacmanX - 1, pacmanY);
            if (nextLocation == ' ')
            {
                erasechar(pacmanX, pacmanY);
                pacmanX = pacmanX - 1;
                printPacman(pacmanX, pacmanY);
            }
            else if (nextLocation == '.')
            {
                erasechar(pacmanX, pacmanY);
                pacmanX = pacmanX - 1;
                printPacman(pacmanX, pacmanY);
                 score11 = scorenew(score);
                gotoxy(60, 24);
                cout << "Score: " <<  score11;
            }
        }
        if (GetAsyncKeyState(VK_RIGHT))
        {
            char nextLocation = getCharAtxy(pacmanX + 1, pacmanY);
            if (nextLocation == ' ')
            {
                erasechar(pacmanX, pacmanY);
                pacmanX = pacmanX + 1;
                printPacman(pacmanX, pacmanY);

                gotoxy(60, 24);
                cout << "Score: " <<  score11;
            }
            else if (nextLocation == '.')
            {
                erasechar(pacmanX, pacmanY);
                pacmanX = pacmanX + 1;
                printPacman(pacmanX, pacmanY);
                 score11 = scorenew(score);
                gotoxy(60, 24);
                cout << "Score: " <<  score11;
            }
        }
        if (GetAsyncKeyState(VK_UP))
        {
            char nextLocation = getCharAtxy(pacmanX, pacmanY - 1);
            if (nextLocation == ' ')
            {
                erasechar(pacmanX, pacmanY);
                pacmanY = pacmanY - 1;
                printPacman(pacmanX, pacmanY);

                gotoxy(60, 24);
                cout << "Score: " <<  score11;
            }
            else if (nextLocation == '.')
            {
                erasechar(pacmanX, pacmanY);
                pacmanY = pacmanY - 1;
                printPacman(pacmanX, pacmanY);
                 score11 = scorenew(score);
                gotoxy(60, 24);
                cout << "Score: " <<  score11;
            }
        }
        if (GetAsyncKeyState(VK_DOWN))
        {
            char nextLocation = getCharAtxy(pacmanX, pacmanY + 1);
            if (nextLocation == ' ')
            {
                erasechar(pacmanX, pacmanY);
                pacmanY = pacmanY + 1;
                printPacman(pacmanX, pacmanY);

                gotoxy(60, 24);
                cout << "Score: " <<  score11;
            }
            else if (nextLocation == '.')
            {
                erasechar(pacmanX, pacmanY);
                pacmanY = pacmanY + 1;
                printPacman(pacmanX, pacmanY);
                 score11 = scorenew(score);
                gotoxy(60, 24);
                cout << "Score: " <<  score11;
            }
        }
        if (GetAsyncKeyState(VK_ESCAPE))
        {
            gameRunning = false;
        }
        Sleep(100);
    }
}

void printMaze()
{
    cout << "   #######################################################################" << endl;
    cout << "   ||...................................................................||" << endl;
    cout << "   ||...%%%%%%%%%%%%%%%%................%%%%%%%%%%%%%%..|%|.....%%%%....||" << endl;
    cout << "   ||..........|%|   |%|......|%|.......|%|        |%|..|%|......|%|....||" << endl;
    cout << "   ||..........|%|   |%|......|%|.......|%|        |%|..|%|......|%|....||" << endl;
    cout << "   ||......... %%%%%%%%%  . . |%|...... %%%%%%%%%%%%%%     .....%%%%....||" << endl;
    cout << "   ||..........|%|......... . |%|......................|%| .............||" << endl;
    cout << "   ||..........%%%%%%%%%%%. . |%|......%%%%%%%%%%%%....|%| .....%%%%....||" << endl;
    cout << "   ||..................|%|.............|%|.............|%| ......|%|....||" << endl;
    cout << "   ||...................|%|............|%|.......|%|.............|%|....||" << endl;
    cout << "   ||..|%|...|%|%%%|%|.|%|..|%|..................|%|.........|%| |%|....||" << endl;
    cout << "   ||..|%|...|%|...|%|......%%%%%%%%%%%%.........|%|.........|%|........||" << endl;
    cout << "   ||..|%|...|%|...|%|...............|%|......%%%%%%.........|%|........||" << endl;
    cout << "   ||..|%|...........................|%|...............|%| ..|%|........||" << endl;
    cout << "   ||..|%|   %%%%%%%%%%%%%%%.........|%|%%%%%%%%%%%....|%| ..|%|%%%%%...||" << endl;
    cout << "   ||..................................................|%| .............||" << endl;
    cout << "   ||...................................................................||" << endl;
    cout << "   ||..|%|  |%|....|%|.....%%%%%%%%%%%%%.........|%|   |%|...|%|........||" << endl;
    cout << "   ||..|%|..|%|....|%|...............|%|......%%%%%%...|%|...|%|........||" << endl;
    cout << "   ||..|%|...........................|%|...............|%|...|%|........||" << endl;
    cout << "   ||..|%|  %%%%%%%%%%%%%%...........|%|%%%%%%%%%%%....|%|...|%|%%%%%...||" << endl;
    cout << "   ||..................................................|%|..............||" << endl;
    cout << "   ||...................................................................||" << endl;
    cout << "   #######################################################################" << endl;
}

void gotoxy(int x, int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

char getCharAtxy(short int x, short int y)
{
    CHAR_INFO ci;
    COORD xy = {0, 0};
    SMALL_RECT rect = {x, y, x, y};
    COORD coordBufSize;
    coordBufSize.X = 1;
    coordBufSize.Y = 1;
    return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar : ' ';
}

void erase(int x, int y, char previous)
{
    gotoxy(x, y);
    cout << previous;
}

void printPacman(int x, int y)
{
    gotoxy(x, y);
    cout << "P";
}

void G1(int x, int y)
{
    gotoxy(x, y);
    cout << "G";
}

void G2(int x, int y)
{
    gotoxy(x, y);
    cout << "G";
}
void erasechar(int x, int y)
{
    gotoxy(x, y);
    cout << " ";
}
int scorenew(int score)
{
    inc = inc + 1;
    int scorenew = score + inc;
    return scorenew;
}