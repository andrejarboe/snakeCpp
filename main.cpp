#include <iostream>
using namespace std;

// global vars
bool gameOver;
const int width = 40;
const int height = 20;
int x, y, foodX, foodY, score;
enum eDirection
{
    STOP = 0,
    LEFT,
    RIGHT,
    UP,
    DOWN
};
eDirection dir;

void Setup()
{
    gameOver = false;
    dir = STOP;
    x = width / 2;
    y = width / 2;

    // time(0) is elapsed seconds from Jan 1 1970
    srand(time(0));
    foodX = rand() % width;
    foodY = rand() % width;

    score = 0;
}
void Draw()
{
    // system("cls"); //windows
    system("clear"); // linux

    //top of # box
    for (int i = 0; i < width+2; i++)
    {
        cout << "#";
    }
    cout << endl;

    // Row
    for (int i = 0; i < height; i++)
    {
        // column
        for (int j = 0; j < width; j++)
        {
            if (j == 0)
            {
                cout << "#";
            }

            cout << " ";

            if (j == width - 1)
            {
                cout << "#";
            }
        }
        cout << endl;
    }

    //bottom of # box
    for (int i = 0; i < width +2; i++)
    {
        cout << "#";
    }
    cout << endl;
}
void Input()
{
}
void Logic()
{
}

int main()
{
    Setup();
    while (!gameOver)
    {
        Draw();
        Input();
        Logic();
        // Sleep(10);
    }

    return 0;
}