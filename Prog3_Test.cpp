#include <vector>
#include <ctime>                // keep this line if you want to generate different random objects for each run
#include "MyObj.h"


int PV(vector<MyObj>& , int, int);

main()
{
   srand(time(0));              // keep this line if you want to generate different random objects for each run 
   vector<MyObj> v;

   int x = 1, y = 2, z = 3;
   for (int i = 0; i < 6; i++)
	{
	   MyObj a(x++, y++, z++);
	   v.push_back(a);
	}
   x = x-3;
   for (int i = 0; i < 4; i++)
	{
	   MyObj a(x--, y--, z--);
	   v.push_back(a);
	}
   for (int i = 0; i < 10; i++)
	cout << v[i];
   cout << endl;
   cout << PV(v, 0, 9) << endl;
}

