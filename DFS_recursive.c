#include<stdio.h>
void DFS(int);
int G[10][10],visited[10]={0},n;
int main()
{
	int i,j,v;
	printf("Enter number of vertices: ");
	scanf("%d",&n);
	printf("Enter adjacency matrix of graph: \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&G[i][j]);
		}
	}
	printf("Enter your starting vertex: ");
	scanf("%d",&v);
	DFS(v);
	return 0;
}
void DFS(int v)
{
	int j;
	printf("%c\t",v+65);
	visited[v]=1;
	for(j=0;j<n;j++)
	{
		if(!visited[j]&&G[v][j]==1)
			DFS(j);
	}
}
