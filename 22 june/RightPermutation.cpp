#include<bits/stdc++.h>
using namespace std;

int count1=0;

void digits(int a[],int l,int r)
{
	if(l==r)
	{   
		for(int i=0;i<r;i++)
		{
		    if(a[i]+1==a[i+1])	
            {
                //cout<<a[i]<<" "<<a[i+1];
                return;
            }
				
		}
		for(int i=0;i<=r;i++)
        {
            
            cout<<a[i];
        }
        cout<<endl;
		
	}
        
	else		
    {
		    
			
	
	for(int i=l;i<=r;i++)
	{
		swap(a[l],a[i]);
	digits(a,l+1,r);
	swap(a[l],a[i]);
	}
    }
	
}

int main()
{
	int a[4];
	for(int i=0;i<4;i++)
	{
		cin>>a[i];
	}
	digits(a,0,3);
	//cout<<count1;
	
}
