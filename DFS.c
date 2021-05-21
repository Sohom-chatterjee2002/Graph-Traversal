#include<stdio.h>
#include<stdlib.h>
#define MAX 10
int n;
int adj[MAX][MAX];
int visited[MAX]={0},stack[MAX];
int top=-1;
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
void DFS(int v)
{
	int i;
	printf("%c\t",v+65);
	visited[v]=1;
	stack[++top]=v;
	while(top!=-1)
	{
		v=stack[top];
		for(i=0;i<MAX;i++)
		{
			if(adj[v][i]&&visited[i]==0)
			{
				stack[++top]=i;
				printf("%c\t",i+65);
				visited[i]=1;
				break;
			}
		}
		if(i==MAX)
			top--;
	}
}
int main()
{
	input();
	int v;
	printf("Enter your starting vertex where you want to start DFS traversal of your graph: ");
	scanf("%d",&v);
	printf("DFS traversal:\n");
	DFS(v);
	return 0;
}

