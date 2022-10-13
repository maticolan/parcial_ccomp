#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;

int i,j;
int matriz[10][10];

int main()
{
  for (int i = 0; i < 10; ++i)
  {
    for (int j = 0; j < 10; ++j)
    {
      matriz[i][j] = rand() % 99;
      cout<<matriz[i][j]<<" ";    
    }
    cout<<endl;
  }
}
