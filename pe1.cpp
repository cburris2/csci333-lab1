
#include <iostream>
using std::cout;
using std::endl;

int add(int a);
int main(){

cout<< add(1000) << endl;
return 0;

}

int add(int a){
	int sum=0;
	for (int i=0; i<a; i++) {
 
	
	if (i%3==0 || i%5==0) {
	sum+=i;

	}

}
	return sum;
}
