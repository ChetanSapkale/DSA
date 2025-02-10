
#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Enter Number:-";
	cin >> n;
	
	int i=n;
	while(i>=1)
	{
		if(i%2==0)
		{
			cout << i << endl;
		}
		i--;
	}
}
