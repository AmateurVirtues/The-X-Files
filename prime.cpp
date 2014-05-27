#include <iostream> 
using namespace std;

int isprime(int x){
	int count = 0;
	for(int i=2; i<=x; i++){
		if (x%i != 0){
			count = count + 1;
		}
		else{
			break;
		}
	}
	if (count == x-2){
		return true;
	}
	else {
		return false;
	}
}
			

int main(){
	for (int i=0; i>=0; i++){
		if(isprime(i)){
			cout << i <<endl;
		}
	}
}
