#include <Windows.h>
#include <iostream>

using namespace std;

enum { length_of_board = 8 };
enum { width_of_board = 8 };
enum { size_of_board = length_of_board * width_of_board };

void Doska(char* chess_grid[size_of_board], int change_color);
int check_color(int i, char* chess_grid[size_of_board], int change_color);

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

char rook_black, knight_black, bishop_black, queen_black, king_black,
        pawn_black; // figures black
char rook_white, knight_white, bishop_white, queen_white, king_white,
        pawn_white; // figures white

int main()
{
    int change_color = 0;
    char* chess_grid[size_of_board]; // needed to move pieces around the board.
    char empty = ' ';
    for (int i = 0; i < size_of_board; i++) {
        chess_grid[i] = &empty;
    }
    rook_black = 'R';
    knight_black = 'N';
    bishop_black = 'B';
    queen_black = 'Q';
    king_black = 'K';
    pawn_black = 'P';
    rook_white = 'R';
    knight_white = 'N';
    bishop_white = 'B';
    queen_white = 'Q';
    king_white = 'K';
    pawn_white = 'P';
    // filling with black pawns
    for (int i = 8; i < 16; i++) {
        chess_grid[i] = &pawn_black;
    }
    // filling with white pawns
    for (int i = 48; i < 56; i++) {
        chess_grid[i] = &pawn_white;
    }
    // filling with basic black chess pieces
    chess_grid[0] = &rook_black;
    chess_grid[1] = &knight_black;
    chess_grid[2] = &bishop_black;
    chess_grid[3] = &queen_black;
    chess_grid[4] = &king_black;
    chess_grid[5] = &bishop_black;
    chess_grid[6] = &knight_black;
    chess_grid[7] = &rook_black;
    // filling with basic white chess pieces
    chess_grid[56] = &rook_white;
    chess_grid[57] = &knight_white;
    chess_grid[58] = &bishop_white;
    chess_grid[59] = &queen_white;
    chess_grid[60] = &king_white;
    chess_grid[61] = &bishop_white;
    chess_grid[62] = &knight_white;
    chess_grid[63] = &rook_white;
    Doska(chess_grid, change_color);
    return 0;
}

int check_color(int i, char* chess_grid[size_of_board], int change_color)
{
    if ((chess_grid[i] == &rook_white) || (chess_grid[i] == &knight_white)
        || (chess_grid[i] == &bishop_white) || (chess_grid[i] == &king_white)
        || (chess_grid[i] == &queen_white) || (chess_grid[i] == &pawn_white)) {
        change_color = White;
    } else
        change_color = Black;
    return change_color;
}

void Doska(char* chess_grid[size_of_board], int change_color)
{
    system("cls");
    cout << "\n\n\n\n\n\n\t\t\t\t\t\t8 ";
    for (int i = 0; i < 8; i += 2) {
        SetColor(check_color(i, chess_grid, change_color), LightGray);
        cout << " " << *chess_grid[i] << " ";
        SetColor(check_color(i + 1, chess_grid, change_color), DarkGray);
        cout << " " << *chess_grid[i + 1] << " ";
    }
    SetColor(White, Black);
    cout << "\n\t\t\t\t\t\t7 ";
    for (int i = 8; i < 16; i += 2) {
        SetColor(check_color(i, chess_grid, change_color), DarkGray);
        cout << " " << *chess_grid[i] << " ";
        SetColor(check_color(i + 1, chess_grid, change_color), LightGray);
        cout << " " << *chess_grid[i + 1] << " ";
    }
    SetColor(White, Black);
    cout << "\n\t\t\t\t\t\t6 ";
    for (int i = 16; i < 24; i += 2) {
        SetColor(check_color(i, chess_grid, change_color), LightGray);
        cout << " " << *chess_grid[i] << " ";
        SetColor(check_color(i + 1, chess_grid, change_color), DarkGray);
        cout << " " << *chess_grid[i + 1] << " ";
    }
    SetColor(White, Black);
    cout << "\n\t\t\t\t\t\t5 ";
    for (int i = 24; i < 32; i += 2) {
        SetColor(check_color(i, chess_grid, change_color), DarkGray);
        cout << " " << *chess_grid[i] << " ";
        SetColor(check_color(i + 1, chess_grid, change_color), LightGray);
        cout << " " << *chess_grid[i + 1] << " ";
    }
    SetColor(White, Black);
    cout << "\n\t\t\t\t\t\t4 ";
    for (int i = 32; i < 40; i += 2) {
        SetColor(check_color(i, chess_grid, change_color), LightGray);
        cout << " " << *chess_grid[i] << " ";
        SetColor(check_color(i + 1, chess_grid, change_color), DarkGray);
        cout << " " << *chess_grid[i + 1] << " ";
    }
    SetColor(White, Black);
    cout << "\n\t\t\t\t\t\t3 ";
    for (int i = 40; i < 48; i += 2) {
        SetColor(check_color(i, chess_grid, change_color), DarkGray);
        cout << " " << *chess_grid[i] << " ";
        SetColor(check_color(i + 1, chess_grid, change_color), LightGray);
        cout << " " << *chess_grid[i + 1] << " ";
    }
    SetColor(White, Black);
    cout << "\n\t\t\t\t\t\t2 ";
    for (int i = 48; i < 56; i += 2) {
        SetColor(check_color(i, chess_grid, change_color), LightGray);
        cout << " " << *chess_grid[i] << " ";
        SetColor(check_color(i + 1, chess_grid, change_color), DarkGray);
        cout << " " << *chess_grid[i + 1] << " ";
    }
    SetColor(White, Black);
    cout << "\n\t\t\t\t\t\t1 ";
    for (int i = 56; i < 63; i += 2) {
        SetColor(check_color(i, chess_grid, change_color), DarkGray);
        cout << " " << *chess_grid[i] << " ";
        SetColor(check_color(i + 1, chess_grid, change_color), LightGray);
        cout << " " << *chess_grid[i + 1] << " ";
    }
    SetColor(White, Black);
    cout << "\n\t\t\t\t\t\t  ";
    cout << " a  b  c  d  e  f  g  h ";
    SetColor(Black, Black);
}