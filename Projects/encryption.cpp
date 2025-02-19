#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
int main()
{    
    int i,j=0,k,count=0,n=0,N=26,size=50,output1[size],output2[size];
	char input[size],num='0',word='a',x='a',X='A',output3[size],output4[size];
     
    cout<<"Input Text:"; 
    cin.get(input,size);
    cout<<input<<endl; 
	   	
    while(input[i] != '\0')
    {   
        if(input[i]>='a'&& input[i]<='z')
		{    
			if(input[i]==x)
			{
				output1[i]=n;
                i++;
			    n=0;
		        x='a';
		        
		        
			}
		    else
            {
        	x++;
			n++;
			}		
			
		}	

		else if(input[i]>='A' && input[i]<='Z')
		{   
           
			if(input[i]==X)
			{
			    output2[i]=N;
                i++; 
                X='A';
			    N=26; 
			 
			}
		    else
            {
			    N++;
			    X++;
			}
			
		}
		
		else if(input[i]>='0'&& input[i]<= '9')
        {    
          
			if(input[i]==num)
			{   
				output3[i]=word;
				i++;
				word='a';
				num='0';
			
				
			}
			else
			{   
				num++;
				word++;
			}
			
        }
        else
		{   
          
            if(input[i]==' ')
			{
				output4[i]='x'; 
				i++;
			}
			else if(input[i]=='@')
			{
                output4[i]='z'; 
                i++;
            }  
            else if(input[i]=='_') 
			{
                output4[i]='l'; 
                i++;
            }
            else if(input[i]=='.')
			{
                output4[i]='m'; 
                i++;
            }
            else if(input[i]=='?')
			{
                output4[i] ='n'; 
                i++;
            }
            else if( input [i]=='!')
			{
				output4[i] ='o'; 
				i++;
			}
			else
			{
				output4[i]=input[i];
                i++;
			}
	    }
	}
		for(j=0;input[j]!='\0';j++)
		   cout<<output1[j];
		cout<<endl;
		for(j=0;input[j]!='\0';j++)
		    cout<<output2[j];
		cout<<endl;	 
		for(j=0;input[j]!='\0';j++)
		    cout<<output3[j];
		cout<<endl;  
		for(j=0;input[j]!='\0';j++)
		    cout<<output4[j];
	    cout<<endl;	 
}