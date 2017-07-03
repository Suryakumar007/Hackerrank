#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	
	int n, x;
	cin>>n>>x;
	int a[n];
	int b[n];
	
	for(int i=0;i<n;i++)
	cin>>a[i];
	
	int y=n-x;
	int c=n-x;
	for(int i=0;i<y;i++)
	{
		b[i]=a[x];
		x++;
	}
	
	
	//cout<<c;
	for(int i=0;i<n;i++)
	{
		b[c]=a[i];
		c++;
	}
	
	
	for(int i=0;i<n;i++)
	cout<<b[i];
	return 0;
}
