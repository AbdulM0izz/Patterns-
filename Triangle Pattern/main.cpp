#include <iostream>
using namespace std;
int main(){
	char ch='A';
	int rows = 5;
	for(int i=0; i<rows; i++){
		for (int j=0; j<i+1; j++){
			
			cout<<ch;
		}
			ch++;
		cout<<endl;
	}
	return 0;
}
