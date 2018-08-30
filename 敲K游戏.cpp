#include<queue>
#include<stdio.h>
#include<windows.h>
using namespace std;

int main(){
    int n,k;
	queue<int> q;
	scanf("%d%d",&n,&k);
	for(int i=1;i<=n;i++)
	q.push(i);
	int t=1,u=1;
	while(!q.empty())
	{
		u=q.front();
		q.pop();
		if(t%k==0||t%10==k);
		else q.push(u);
		t++;
	}
	printf("%d\n",u);
    system("pause");
	return 0;
}