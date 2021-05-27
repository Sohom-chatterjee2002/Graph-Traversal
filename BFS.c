#include<stdio.h>
#include<stdlib.h>
#define MAX 10
int n;
int adj[MAX][MAX];
int visited[MAX]={0},queue[MAX];
int front=-1,rear=-1;
void input()
{
	int i,j;
	printf("Enter the number of vertices: ");
	scanf("%d",&n);
	printf("Enter the adjacency matrix: \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			scanf("%d",&adj[i][j]);
	}
}
void BFS(int v)
{
	int i;
	queue[++rear]=v;
	visited[v]=1;
	while(rear!=front)
	{
		v=queue[++front];
		printf("%c\t",v+65);
		for(i=0;i<MAX;i++)
		{
			if(adj[v][i]==1 && visited[i]==0)
			{
				queue[++rear]=i;
				visited[i]=1;
			}
		}
	}
}
int main()
{
	input();
	int v;
	printf("Enter your starting vertex where you want to start BFS traversal of your graph: ");
	scanf("%d",&v);
	printf("BFS traversal:\n");
	BFS(v);
	return 0;
}
