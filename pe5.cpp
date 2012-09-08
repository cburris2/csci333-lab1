#include <iostream> //c++ answer to 5 on projecteuler.net Charles Burris
using std::cout;
using std::endl;

int smallDiv(int p);
int main(){

cout<< smallDiv(2000000) << endl;

return 0;

}

int smallDiv(int p){

	int a=0; 
	int b=0;
	for(int i=0; i<p;i++){

	

	if(i%2!=0 || i%4!=0 || i%3!=0 || i%5!=0 || i%6!=0 || i%7!=0 || i%8!=0){	

		a+=i;
	

	}
	if(i%9!=0 || i%10!=0 || i%11!=0 || i%12!=0 || i%13!=0 || i%14!=0){

		a+=i;

	}
	if(i%15!=0 || i%16!=0 || i%17!=0 || i%18!=0){
	 a+=i;
	}
	}
	return a;
}
/*	int r=0; // attempt at #5.)
	int n=0;
	float a=0;
	for(int i=21; i>20; i++){

		for(int j=20;j<=21;j--){

	 		while(i%j==0){
	   		 
			
		   
			  r++;	 		     
			
			if(r==20){

				n+=i;
			  break;
			
				}
			}

			}

	}
	return a;
	}
		
		
	return n;}*/ 	






