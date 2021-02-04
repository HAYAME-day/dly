#include <iostream>
using namespace std;

int main()
{
    int F[1000001];
	F[1]=1;
	F[2]=1;
	int n;
	cin>>n;
	for(int i=3;i<=n;i++){
		F[i]=(F[i-1]+F[i-2])%10007;
	}
	cout<<F[n];
	return 0;

}
