#include <iostream>
using namespace std;

int main(){
	
	int num1, num2, num3;
	
	cout << "Enter Numbers:";
	cin >> num1;
	cin >> num2;
	cin >> num3;
	
	if(num1>=num2)
	{
		
		if(num1>=num3){
			cout << "Num 1 is maximum";
		}else{
			cout << "Num 3 is maximum";
		}
	}
	else
	{
		if (num2 >= num3) {
			cout << "Num 2 is maximum";
        } else {
        	cout << "Num 3 is maximum";
        }
	}
	
	return 0;
}