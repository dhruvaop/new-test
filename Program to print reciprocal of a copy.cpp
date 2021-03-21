# include <iostream>
using namespace std;


int main() {
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
	{
	    string s;
	    getline(cin,s);

	    int n=s.size();
	    for(int i=0;i<n;i++)
	    {
	        if(isupper(s[i]))
	        {
	            int d=s[i]-'A';
	            cout<<char('Z'-d);
	        }
	        else if(islower(s[i]))
	        {
	            int d=s[i]-'a';
	            cout<<char('z'-d);
	        }
	        else
	        cout<<s[i];
	    }
	    cout<<endl;
	}

	return 0;
}
