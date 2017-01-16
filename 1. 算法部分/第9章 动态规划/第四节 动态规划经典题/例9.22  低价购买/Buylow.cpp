#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int i,j,k,n,max,num,a[5002],b[5002],f[5002];
	bool ok[50002];
	cin>>n;
	for (i=1;i<=n;i++) cin>>a[i];
	memset(b,0,sizeof(b));
	memset(f,0,sizeof(f));
	b[1]=1;
	f[1]=1;
	for (i=2;i<=n+1;i++)
	{
		max=0;
		f[i]=1;
		for (j=i-1;j>=1;j--)
		if (a[i]<a[j])
		  if (b[j]>max)
		  {
				max=b[j];
				memset(ok,1,sizeof(ok));
				ok[a[j]]=false;
				f[i]=f[j];
				}
		  else if (b[j]==max && ok[a[j]])
		  {
				ok[a[j]]=false;
				f[i]+=f[j];
				}
		  b[i]=max+1;
		} 
	cout<<b[n+1]-1<<' '<<f[n+1]<<endl;
	return 0;
}
