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

int mar[10][10] = {0};

int generar()
{
  int n;
  srand(time(NULL));
  n = ((rand() % 7) + 1);

  return (n);
}

int generar2()
{
  int n;
  n = ((rand() % 8) + 1);

  return (n);
}

int generar3()
{
  int n;
  n = ((rand() % 9) + 1);

  return (n);
}

void randoms()
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
  int tiro1;
  // para que genere otros numeros aleatorios
  int n10;
  int n11;
  int n12;
  int n13;
  int boat = 0;

  n = generar();
  n2 = generar();
  n3 = n2 + 1;
  n4 = n2 + 2;
  mar[n][n2] = 1;
  mar[n][n3] = 1;
  mar[n][n4] = 1;

  n5 = generar2();
  n6 = generar2();
  n7 = n5 + 1;
  mar[n7][n6];
  mar[n5][n6];
  n8 = generar3();
  n9 = generar3();
  mar[n8][n9];

  while (boat == 0)
  {
    if (mar[n7][n6] == 0 && mar[n5][n6] == 0)
    {
      boat = 1;
      mar[n7][n6] = 2;
      mar[n5][n6] = 2;
    }
    if (mar[n7][n6] == 1 || mar[n5][n6] == 1)
    {
      boat = 1;
      n12 = generar2();
      n13 = generar2();
      n7 = n12 + 1;
      mar[n7][n13] = 2;
      mar[n12][n13] = 2;
    }
    if (mar[n8][n9] == 0)
    {
      boat = 1;

      mar[n8][n9] = 3;
    }
  }

  if (mar[n8][n9] == 1 || mar[n8][n9] == 2)
  {
    boat = 1;
    n10 = generar3();
    n11 = generar3();
    mar[n10][n11] = 3;
  }
}

void mapa()
{
  randoms();
  // for (int i = 0; i < 10; i++)
  // {

  //   for (int j = 0; j < 10; j++)
  //   {

  //     mar[i][j];
  //   }
  // }
}

void tableroUpdate()
{
  for (int i = 0; i < 10; i++)
  {

    for (int j = 0; j < 10; j++)
    {
      if (mar[i][j] == 5)
      {
        cout << "*";
      }
      else if (mar[i][j] == 9)
      {
        // printf("x");
        cout << "x";
      }
      else
      {
        cout << mar[i][j];
      }
      cout << "\t";
    }

    cout << "\n";
  }
}

void tablero()
{

  mapa();
  for (int i = 0; i < 10; i++)
  {

    for (int j = 0; j < 10; j++)
    {
      if (mar[i][j] == 5)
      {
        cout << "*";
        // printf("*");
      }
      else if (mar[i][j] == 9)
      {
        cout << "x";
        // printf("x");
      }
      else
      {
        cout << mar[i][j];
      }
      cout << "\t";
    }
    cout << "\n";
  }
}

int fila()
{
  int filatiro;
  printf("\n-porfavor ingrese las coordenadas a las cuales quiere disparar:"
         "\n");
  printf("\n-las filas y columnas se cuentan del 0 al 9 :)"
         "\n");
  do
  {
    printf("\n-ingrese elnumero de la fila:");
    scanf("%d", &filatiro);

  } while (filatiro > 9);

  return (filatiro);
}

int columna()
{

  int columnatiro;
  do
  {
    printf("-igrese el numero de la columna:");
    scanf("%d", &columnatiro);

  } while (columnatiro > 9);

  return (columnatiro);
}

int comparacion()
{

  int coordenada1 = fila();
  int coordenada2 = columna();
  // filas       columnas//
  mar[coordenada1][coordenada2];

  if (mar[coordenada1][coordenada2] == 2)
  {
    mar[coordenada1][coordenada2] = 5;

    if (mar[coordenada1 + 1][coordenada2] == 2)
    {
      mar[coordenada1 + 1][coordenada2] = 5;
    }
    else if (mar[coordenada1 - 1][coordenada2] == 2)
    {
      mar[coordenada1 - 1][coordenada2] = 5;
    }
    system("cls");
    printf("le diste a un barco \n");
  }

  if (mar[coordenada1][coordenada2] == 3)
  {
    mar[coordenada1][coordenada2] = 3;
  }

  // tableroUpdate();

  if (mar[coordenada1][coordenada2] == 1)
  {
    mar[coordenada1][coordenada2] = 5;
    if (mar[coordenada1][coordenada2 - 1] == 1)
    {
      mar[coordenada1][coordenada2 - 1] = 5;

      if (mar[coordenada1][coordenada2 - 2] == 1)
      {
        mar[coordenada1][coordenada2 - 2] = 5;
      }
      else
      {
        mar[coordenada1][coordenada2 + 1] = 5;
      }
    }
    else
    {
      mar[coordenada1][coordenada2 + 1] = 5;
      mar[coordenada1][coordenada2 + 2] = 5;
    }
    system("cls");
    printf("le diste a un barco \n");
  }

  tableroUpdate();

  if (mar[coordenada1][coordenada2] == 0)
  {
    mar[coordenada1][coordenada2] = 9;
    system("cls");
    tableroUpdate();
    printf("fallaste el tiro \n");
  }
}

int main()
{
  int tiro1;
  int tiro2;
  int tiro3;
  int tiro4;
  int tiro5;
  int tiro6;
  int tiro7;
  int tiro8;
  int tiro9;
  int tiro10;
  int tiro11;

  int contador = 10;

  tablero();

  tiro1 = comparacion();
  tiro2 = comparacion();
  tiro3 = comparacion();
  tiro4 = comparacion();
  tiro5 = comparacion();
  tiro6 = comparacion();
  tiro7 = comparacion();
  tiro8 = comparacion();
  tiro9 = comparacion();
  tiro10 = comparacion();
}
