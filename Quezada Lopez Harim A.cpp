#include<iostream>
using namespace std;
int main() {
	int allowedAmps = 20, inputAmps;
	cout<<"digita los amperes: ";
	cin>>inputAmps;
	
	if (allowedAmps >= inputAmps){
		cout<<"Los amperes son correctos";
	} else {
		cout<<"Los amperes no son correctos";
	} 
	return 0;
}
