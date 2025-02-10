#include<iostream>
using namespace std;

int main(){
	
	int num1 = 10;
	int num2 = 20;
	int temp = num1;
	
	num1 = num2;
	num2 = temp;
	
	cout << num1 << endl << num2;
	
	return 0;
}