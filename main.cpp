#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;

int i,j;
int matriz[10][10];

int menu();
void funcion_01();
void funcion_02();

int main()
{
  int opcion;
  do
  {
    opcion = menu();
    switch(opcion)
    {
      case 0: break;
      case 1: funcion_01(); break;
      case 2: funcion_02(); break;
      default: cout<<"Try again.\n \n";
    }
  } while (opcion != 0);
  return (0);
}

int menu()
{
  int opcion;

  cout<<"Menu Principal\n";
  cout<<"0. Salir\n";
  cout<<"1. Funcion 1\n";
  cout<<"2. Funcion 2\n";
  cout << "\n";
  cout << "Seleccione una opcion: ";
  cin >> opcion;

  return opcion;
}

void funcion_01()
{
  for (int i = 0; i < 10; ++i)
  {
    for (int j = 0; j < 10; ++j)
    {
      matriz[i][j] = rand() % 99;
    }
  }
}

void funcion_02()
{
  for (int i = 0; i < 10; ++i)
  {
    for (int j = 0; j < 10; ++j)
    {
      cout<<matriz[i][j]<<" ";
    }
  cout<<endl;  
  cout<<'\n';  
  }
}
