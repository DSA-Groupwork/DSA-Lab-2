# DSA-Lab-2
# DSA Week Two Labs



Replace the Switch-Case control structure in the code below with if-elseif-else control structure statements and code then upload your solution 

![image](https://user-images.githubusercontent.com/64952843/94399581-53deb000-0170-11eb-8031-f861dda26753.png)


 

  #CODE
  
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
	    		
	    		
# SOLUTION
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
![image](https://user-images.githubusercontent.com/64952843/94399371-e7fc4780-016f-11eb-9146-8a5fee45c88e.png)


![image](https://user-images.githubusercontent.com/64952843/94399428-fc404480-016f-11eb-913e-c7e48de63ded.png)



