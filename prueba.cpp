#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <cstdlib>
#include <iostream>
#include <windows.h>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <cstdlib>

using namespace std;
int main()
{

  int n;
  int n2;
  int n3;
  int n4;
  int n5;
  int n6;
  int n7;
  int n8;
  int n9;
  int poner;

  int mar[10][10] =
      {
          {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
          {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
          {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
          {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
          {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
          {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
          {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
          {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
          {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
          {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      };

  int boat = 0;
  for (int i = 0; i < 10; i++)
  {
    cout << endl;
    for (int j = 0; j < 10; j++) // esto es un ciclo for anidado para mostrar el mapa osea ira cargadno las casillas
    {
      cout << mar[i][j];
    }

    srand(time(NULL));

    n = ((rand() % 7) + 1);
    n2 = ((rand() % 5) + 2);
    n8 = n2 + 1;
    n9 = n2 + 2;
    mar[n][n2] = 1;
    mar[n][n8] = 1;
    mar[n][n9] = 1;

    n3 = ((rand() % 8) + 1);
    n4 = ((rand() % 8) + 1);
    n7 = n3 + 1;
    mar[n3][n4];
    mar[n7][n4];

    while (boat == 0)
    {

      if (mar[n7][n4] == 0 && mar[n3][n4] == 0)
      {
        boat = 1;
        mar[n7][n4] = 2;
        mar[n3][n4] = 2;
      }
    }

    n5 = ((rand() % 9) + 1);
    n6 = ((rand() % 9) + 1);
    mar[n5][n6] = 3;
  }
}
