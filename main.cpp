// write your code here
#include <iostream>
#include <cstdlib>
using namespace std;
int main() 
{
  int num, value;
  cout << " Enter Number of values desired" << endl;
  num =1;
  cin >> value;
  while (num <= value )
    {
    cout << rand()% 100;
      cout << " ";
     num = num + 1;
  }
  return 0;
    
  }
