#include<iostream>
using namespace std;



bool isPrime(int n){
 	int rem,c=0,i=1;
 	while(n>=i){

	 rem = n%i;

	 if(rem==0){
	 	c+=1;
	 	i+=1;
	 	continue;
	 	
	 	
	 }
	 else{
	 	i+=1;
	 	continue;
	 }
	 
	 
	 
	}
	if (c>2){
		return false;
	}
	else {
		return true;
	}
		
}
/*Code by Mubdev69 aka Mubashir Ali*/

