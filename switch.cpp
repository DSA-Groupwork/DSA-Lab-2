#include<iostream>
using namespace std;

using std::cout;
using std::cin;
using std::endl;

int main(){
	int grade,
	    acount=0,
	    bcount=0,
	    ccount=0,
	    dcount=0,
	    fcount=0;
	    int A,a,b,c,d,f,B,C,D,F;
	    cout<<"Enter the letter grades."<<endl;
	    cout<<"Enter the EOF character to end input ."<<endl;
	    
	    while((grade = cin.get() ) !=EOF){
	      if (grade==A||a){
	      	acount++;
	      	cout<<"\nA:"<<A<<endl;
	      	continue;
		  }	
		  else if (grade==B||b){
		  	bcount++;
		  	cout<<"\nB:"<<B<<endl;
		  		continue;
		  }
		  else if (grade==C||c){
		  	ccount++;
		  	cout<<"\nC:"<<C<<endl;
		  		continue;
		  }
		  else if (grade ==D||d){
		  	dcount++;
		  	cout<<"\nD:"<<D<<endl;
		  		continue;
		  }
		  else if (grade == F||f){
		  	fcount++;
		  	cout<<"\nC:"<<F<<endl;
		  		continue;
		  }
		   else {
		   	cout<<"Incorrect grade entered"<<endl;
		   	cout<<"Enter a new grade"<<endl;
		   }
		  
		  
		  
		  
		  
		  
		  
		}
		 return 0;
}

