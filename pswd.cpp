#include <iostream>
using namespace std;

int main(){
	int word;
	int count = 0;
	while(count < 3){
		cout << "enter your passcode:  ";
		cin >> word; 
		if (word == 204532){
			cout << "access granted!" <<endl;
			break;
		}
		else{
		count = count+1;
		}
	}
}
