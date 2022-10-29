#include <iostream>
using namespace std;
int
main ()
{


  int count = 0;
  for (int i = 9; i >= 1; i--)
    {
      cout << "         ";
      for (int j = 1; j < i; j++)
	{
	  cout << " ";
	}
      for (int k = 9; k >= i; k--)
	{
	  cout << "*";
//	  cout << k;
	}
      // count++;
      // cout<<count;
      cout << "\n";
    }

  return 0;
}
