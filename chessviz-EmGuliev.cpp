#include <Windows.h>
#include <iostream>

using namespace std;

const int n = 64;

void Doska(char figures[n]);


enum ConsoleColor {
    Black = 0,
    Blue = 1,
    Green = 2,
    Cyan = 3,
    Red = 4,
    Magenta = 5,
    Brown = 6,
    LightGray = 7,
    DarkGray = 8,
    LightBlue = 9,
    LightGreen = 10,
    LightCyan = 11,
    LightRed = 12,
    LightMagenta = 13,
    Yellow = 14,
    White = 15
};

void SetColor(int text, int background)
{
    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hStdOut, (WORD)((background << 4) | text));
}


int main()
{
    char buff;
    char figures[n];
    for (int i = 0; i < 63; i++) {
        figures[i] = ' ';
    }
    for (int i = 8; i < 16; i++) {
        figures[i] = 'P';
    }
    for (int i = 55; i > 47; i--) {
        figures[i] = 'P';
    }
    figures[0] = 'R';
    figures[1] = 'N';
    figures[2] = 'B';
    figures[3] = 'Q';
    figures[4] = 'K';
    figures[5] = 'B';
    figures[6] = 'N';
    figures[7] = 'R';
    figures[56] = 'R';
    figures[57] = 'N';
    figures[58] = 'B';
    figures[59] = 'Q';
    figures[60] = 'K';
    figures[61] = 'B';
    figures[62] = 'N';
    figures[63] = 'R';
    Doska(figures);
    return 0;
}

void Doska(char figures[n])
{
    system("cls");
    cout << "\n\n\n\n\n\n\t\t\t\t\t\t8 ";
    for (int i = 0; i < 8; i += 2) {
        SetColor(Black, White);
        cout << " " << figures[i] << " ";
        SetColor(Black, DarkGray);
        cout << " " << figures[i + 1] << " ";
    }
    SetColor(White, Black);
    cout << "\n\t\t\t\t\t\t7 ";
    for (int i = 8; i < 16; i += 2) {
        SetColor(Black, DarkGray);
        cout << " " << figures[i] << " ";
        SetColor(Black, White);
        cout << " " << figures[i + 1] << " ";
    }
    SetColor(White, Black);
    cout << "\n\t\t\t\t\t\t6 ";
    for (int i = 16; i < 24; i += 2) {
        SetColor(Black, White);
        cout << " " << figures[i] << " ";
        SetColor(Black, DarkGray);
        cout << " " << figures[i + 1] << " ";
    }
    SetColor(White, Black);
    cout << "\n\t\t\t\t\t\t5 ";
    for (int i = 24; i < 32; i += 2) {
        SetColor(Black, DarkGray);
        cout << " " << figures[i] << " ";
        SetColor(Black, White);
        cout << " " << figures[i + 1] << " ";
    }
    SetColor(White, Black);
    cout << "\n\t\t\t\t\t\t4 ";
    for (int i = 32; i < 40; i += 2) {
        SetColor(Black, White);
        cout << " " << figures[i] << " ";
        SetColor(Black, DarkGray);
        cout << " " << figures[i + 1] << " ";
    }
    SetColor(White, Black);
    cout << "\n\t\t\t\t\t\t3 ";
    for (int i = 40; i < 48; i += 2) {
        SetColor(Black, DarkGray);
        cout << " " << figures[i] << " ";
        SetColor(Black, White);
        cout << " " << figures[i + 1] << " ";
    }
    SetColor(White, Black);
    cout << "\n\t\t\t\t\t\t2 ";
    for (int i = 48; i < 56; i += 2) {
        SetColor(DarkGray, White);
        cout << " " << figures[i] << " ";
        SetColor(LightGray, DarkGray);
        cout << " " << figures[i + 1] << " ";
    }
    SetColor(White, Black);
    cout << "\n\t\t\t\t\t\t1 ";
    for (int i = 56; i < 63; i += 2) {
        SetColor(LightGray, DarkGray);
        cout << " " << figures[i] << " ";
        SetColor(DarkGray, White);
        cout << " " << figures[i + 1] << " ";
    }
    SetColor(White, Black);
    cout << "\n\t\t\t\t\t\t  ";
    cout << " a  b  c  d  e  f  g  h ";
    SetColor(Black, Black);
}