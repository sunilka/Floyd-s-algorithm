#include<bits/stdc++.h>
using namespace std;
int main()
{
    int nvertices;
    cout<<"please enter the number of vertices :\n";
    cin>>nvertices;

    int a[nvertices][nvertices];
    printf("\n please enter the cost martix \n");
    for(int i=0;i<nvertices;i++)
    {
        for(int j=0;j<nvertices;j++)
        {
            cin>>a[i][j];
        }
    }

    for(int k=0;k<nvertices;k++)
    {
        for(int i=0;i<nvertices;i++)
        {
            for(int j=0;j<nvertices;j++)
            {
                if(a[i][j] > min(a[i][j],a[i][k] + a[k][j]))
                    a[i][j] = min(a[i][j],a[i][k] + a[k][j]);
            }
        }
    }

    cout<<"\n All pairs shortest path is :\n";
    for(int i=0;i<nvertices;i++)
    {
        for(int j=0;j<nvertices;j++)
        {
            printf("%3d ",a[i][j]);
        }
        printf("\n");
    }
}
