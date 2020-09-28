#include<iostream>
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
	    cout<<"Enter the letter grades."<<endl;
	    cout<<"Enter the EOF character to end input ."<<endl;
	    
	    while((grade = cin.get() ) !=EOF){
	    	switch (grade){
	    		case 'A':
	    		case 'a':
	    			++acount;
	    			break;
	    			
	    		case 'B':
	    		case 'b':
	    			++bcount;
	    			break;
	    			
	    		case 'C':
	    		case 'c':
	    			++ccount;
	    			break;
	    			
	    		case 'D':
	    		case 'd':
	    			++dcount;
	    			break;
	    			
	    		case 'F':
	    		case 'f':
	    			++acount;
	    			break;
	    			
	    		case '\n':
	    		case '\t':
	    		  break;
	    		  
	    		  default:
	    		  cout<<"Incorrect letter grade entered"<<endl;
	    		  cout<<"Enter a new grade"<<endl;
	    		  break;
	    	}
	    }
	    cout<<"\n\nTotals for each letter grade are:"
	        <<"\nA:"<<acount
	        <<"\nB:"<<bcount
	        <<"\nC:"<<ccount
	        <<"\D:"<<dcount
	        <<"\nF:"<<fcount<<endl;
	        
	        return 0;
	    }
	    		
	    		
	    			
		

