#include <iostream>
#include<vector>
using namespace std;

enum colorname {WHITE, GRAY, BLACK};
int color[20] ,discover_time[20], finish_time[20];
int time, vertex,edge;

void DFS(vector<int>G)
{
    for(int u=0 ; u<vertex ; u++)
        color[u]=WHITE;
    time=0;
    for(int u=0; u<vertex , u++)
    {
        if(color[u]== WHITE)
            DFS_VISIT(G,u);
    }
}
int main()
{
    //int vertex, edge;
    cout<<"Enter number of vertex and edges"<<endl;
    cin>> vertex>>edge;
    vector<int> graph[vertex];
    int u,v;
    cout<<"Input each edges :"<<endl;

    for(int e=1 ; e<=edge; e++)
    {
        cin>>u>>v;
        graph[u].push_back(v);
    }

    cout<<"Given Graph "<<endl;

    for(int u=0; u<vertex ; u++)
    {
        cout<<u<<"---->";
        for(int v=0 ; v<graph[u].size(); v++)
        {
            cout<<"  "<<graph[u][v];

    }
    cout<<endl;
    }


    return 0;
}