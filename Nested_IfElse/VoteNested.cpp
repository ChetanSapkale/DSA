#include <iostream>
using namespace std;

int main(){
	
	int age;
	
	cout << "Enter your age:";
	cin >> age;
	
	if(age>=18)
	{	
		if(age<=100){
			cout << "You are eligible for vote!";
		}
		else{
			cout << "Please enter valid age!";	
		}	
	}
	else
	{
		cout << "You are not eligible to vote";
	}
	
	return 0;
}