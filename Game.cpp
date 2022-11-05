#include <iostream>
#include <vector>
#include <utility>
using namespace std;
//help from tutors: Grace, Pablo

//why does it need to be constant value?
//Size of the Board
const int Columns = 16;
const int Rows = 16;
int num;
int guess;

int numShips = 10;
int s;

//Known as "arrays of arrays"
int BoardGame[Columns][Rows];
int c,r;

/*enum Status
{
hit = 1,
miss = 0,
nearmiss = 2,
};
*/

 

void setShipCorrdinates()
{
  int s = 0;
  while(s < numShips)
  {
    int x = rand() % Columns;
    int y = rand() % Rows;
    if(BoardGame[x][y] != 1)
    {
        s++;
        BoardGame[x][y] = 1;
    }
  }
}

void displayBoard()
{
for (int c = 0; c < Columns; c++)
{
    for (int r = 0; r < Rows; r++)
    {
        cout << BoardGame[c][r] << " ";
    }
    cout << endl;
    
}
}

void Reset()
{
for (int  c = 0; c < Columns; c++)
{
    for (int r = 0; r < Rows; r++)
    {
        BoardGame[c][r] = 0;
    }
}
} 

void Scan()
{
    for(int r = 0; r < Rows; r++)
    {
        for(int c = 0; c < Columns; c++)
        {
            if (BoardGame[r][c] == 1 )
            {
                cout << "->HIT" << endl;
                
            }
            else if (BoardGame[r][c] == 0)
            {
                cout << "MISS" << endl;
                
            //top left corner 
             /*if (r < 1 && c < 1)
            {
                BoardGame[r][c+1] = 0;
                BoardGame[r+1][c+1] = 0;
                BoardGame[r+1][c] = 0;
               
            }
            //top right corner
            else if(r < 1 && c < 17)
            {
                BoardGame[r][c-1] = 0;
                BoardGame[r+1][c-1] = 0;
                BoardGame[r+1][c] = 0;
            }
            //bottom left corner
            else if(r < 17 && c < 1)
            {
                BoardGame[r][c+1] = 0;
                cout << "HIT" << endl;
                BoardGame[r-1][c+1] = 0;
                cout << "NEARMISS" << endl;
                BoardGame[r-1][c] = 0;
                cout << "NEARMISS" << endl;
            }
            //bottom right corner 
            else if( r < 17 && c < 17)
            {
                BoardGame[r][c-1] = 0;
                BoardGame[r-1][c-1] = 0;
                BoardGame[r-1][c] = 0;
                
            }
            */
            
            }
        }
    }
}

int main()
{
Reset();
setShipCorrdinates();
displayBoard();
Scan();
return 0;
}


