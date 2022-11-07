#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
    	int count = 0;
    	int n;
    	cin>>n;
        string s;
        cin>>s;
        
        for(int i = 0; i<n; i++)
        {
           
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
            {
                count = 0;
                continue;
            }
            else
            {
                count++;
                if(count>=4)
            {
                break;
            }
                
            }        
            
            
            
        }
        
        if(count>=4)
        
        {
            cout<<"No\n";
        }
        else
        {
            cout<<"Yes\n";
        }
	}
	return 0;
}