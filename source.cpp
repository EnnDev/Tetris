#include <iostream>

std::wstring tetromino[7];
int nFieldWidth = 12;
int nFieldHeight = 18;
unsigned char *pField = nullptr;

int Rotate(int px, int py, int r)
{
    switch (r %4)
    {
        case 0: return py * 4 + px;         // 0 Degrees
        case 1: return 12 + py - (px * 4);  // 90 Degrees
        case 2: return 15 + (py * 4) - px;
        case 3: return 3 + py + (px * 4);
    }
}

int main()
{
    //create assets
    tetromino[0].append(L"..X.");
    tetromino[0].append(L"..X.");
    tetromino[0].append(L"..X.");
    tetromino[0].append(L"..X.");

    tetromino[1].append(L"..X.");
    tetromino[1].append(L".XX.");
    tetromino[1].append(L".X..");
    tetromino[1].append(L"....");

    tetromino[2].append(L".X..");
    tetromino[2].append(L".XX.");
    tetromino[2].append(L"..X.");
    tetromino[2].append(L"....");

    tetromino[3].append(L"....");
    tetromino[3].append(L".XX.");
    tetromino[3].append(L".XX.");
    tetromino[3].append(L"....");

    tetromino[4].append(L"..X.");
    tetromino[4].append(L".XX.");
    tetromino[4].append(L"..X.");
    tetromino[4].append(L"....");

    tetromino[5].append(L"....");
    tetromino[5].append(L".XX.");
    tetromino[5].append(L".X..");
    tetromino[5].append(L".X..");

    tetromino[6].append(L".X..");
    tetromino[6].append(L".X..");
    tetromino[6].append(L".XX.");
    tetromino[6].append(L"....");

    pField = new unsigned char[nFieldWidth*nFieldHeight];   // Creates playing field
        for (int x = 0; x < nFieldWidth; x++)   // Board Boundary
            for (int y = 0; y < nFieldHeight; y++)
                pField[y*nFieldHeight + x] = (x == 0 || x == nFieldWidth - 1 || y == nFieldHeight - 1) ? 9 : 0;


    return 0;
}