The Three Topics - "https://www.codechef.com/submit/THREETOPICS"
SUBMISSION

#include <iostream>
using namespace std;

int main() 
{
	int a,b,c=0,d;
	int arr[3];
	
	int i;
	for (i=0; i<3; i++)
	{
	    cin>>a;
	    arr[i] = a;
	}
	cin>>b;
	
	string ans;
	int j;
	for(j=0; j<3; j++)
	{
	    if(arr[j] == b)
	        c++;
	        
	    else
	        d++;
	}
	
	if(c == NULL)
	    cout<<"\nNO";
	    
    else
        cout<<"\nYES";

	return 0;
}
