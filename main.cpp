#include <iostream>
#include <cstdio>
using namespace std;

int i,j;
int matriz[10][10];

int menu();
void funcion_01();
void funcion_02();
void funcion_03();
void funcion_04();
void funcion_05();
void funcion_06();

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
      case 3: funcion_03(); break;
      case 4: funcion_04(); break;
      case 5: funcion_05(); break;
      case 6: funcion_06(); break;
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
  cout<<"3. Funcion 3\n";
  cout<<"4. Funcion 4\n";
  cout<<"5. Funcion 5\n";
  cout<<"6. Funcion 6\n";
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
  cout<<"\n";
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

void funcion_03()
{
  int fila, columna, fc;

  do
  {
    cout<<"Ingrese la fila de la casilla por cambiar: "<<endl;
    cin>>fila;
    if (fila>=9 || fila<0)
    {
      cout<<"Ingresaste un valor inadmisible.\n";
    }
  } while (fila>=9 || fila<0);
  
  do
  {
    cout<<"Ingrese la columna de la casilla por cambiar: "<<endl;
    cin>>columna;
    if (columna>=9 || columna<0)
    {
      cout<<"Ingresaste un valor inadmisible.\n";
    }
  } while (columna>=9 || columna<0);

  cout<<"Ingrese el nuevo valor para la casilla: ("<<fila<<", "<<columna<<"): "<<endl;
  cin>>fc;
  matriz[fila][columna]=fc;
  cout<<"\n";
}

void funcion_04()
{
  matriz[0][0]=0;
  matriz[1][1]=0;
  matriz[2][2]=0;
  matriz[3][3]=0;
  matriz[4][4]=0;
  matriz[5][5]=0;
  matriz[6][6]=0;
  matriz[7][7]=0;
  matriz[8][8]=0;
  matriz[9][9]=0;
  cout<<"\n";
}

void funcion_05()
{
  int nr1, nr2, nr3, nd1=0, nd2=0, nd3=0;

  do
  {
    cout<<"Ingrese el primer numero por encontrar: "<<endl;
    cin>>nr1;
    if (nr1>=100 || nr1<0)
    {
      cout<<"Ingresaste un valor inadmisible.\n";
    }
  } while (nr1>=100 || nr1<0);

  do
  {
    cout<<"Ingrese el segundo numero por encontrar: "<<endl;
    cin>>nr2;
    if (nr2>=100 || nr2<0)
    {
      cout<<"Ingresaste un valor inadmisible.\n";
    }
    else if (nr2==nr1)
    {
      cout<<"Ingresaste un valor ya ingresado.\n";
    }
  } while (nr2>=100 || nr2<0 || nr2==nr1);
  
  do
  {
    cout<<"Ingrese el tercer numero por encontrar: "<<endl;
    cin>>nr3;
    if (nr3>=100 || nr3<0)
    {
      cout<<"Ingresaste un valor inadmisible.\n";
    }
    else if (nr3==nr1 || nr3==nr2)
    {
      cout<<"Ingresaste un valor ya ingresado.\n";
    }
  } while (nr3>=100 || nr3<0 || nr3==nr1 || nr3==nr2);

  for (int fila = 0; fila < 10; ++fila)
  {
    for (int columna = 0; columna < 10; ++columna) 
    {
      if (matriz[fila][columna]==nr1)
      {
        nd1++;
      }
      else if (matriz[fila][columna]==nr2)
      {
        nd2++;
      }
      else if (matriz[fila][columna]==nr3)
      {
        nd3++;
      }
    }
  }
  
  cout<<"El numero "<<nr1<<" se repite "<<nd1<<" veces, "<<nr2<<" "<<nd2<<" veces y "<<nr3<<" "<<nd3<<" veces.\n\n";
}

void funcion_06()
{
  int nmenor, nmayor;
  do
  {
    cout<<"Ingrese un numero entre 0-99 para buscar: ";
    cin>>nmenor;
    if (nmenor>=100 || nmenor<0)
    {
      cout<<"Ingresaste un valor inadmisible.\n";
    }
  } while (nmenor>=100 || nmenor<0);

  do
  {
    cout<<"Ingrese un numero entre 100-200 para reemplazar: ";
    cin>>nmayor;
    if (nmayor>=100 || nmayor<0)
    {
      cout<<"Ingresaste un valor inadmisible.\n";
    }
  } while (nmayor>=201 || nmayor<100);


  for (int fila = 0; fila < 10; ++fila)
  {
    for (int columna = 0; columna < 10; ++columna) 
    {
      if (matriz[fila][columna]==nmenor)
      {
        matriz[fila][columna]=nmayor;
      }

    }
  }
  if (nmenor!=matriz[fila][columna])
      {
        cout<<"Este numero no esta en la matriz.";
      }
  cout<<"\n";
}
