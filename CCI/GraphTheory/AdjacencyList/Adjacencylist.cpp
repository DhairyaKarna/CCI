#include<bits/stdc++.h>

using namespace std;

class Graph{
    int V;
    list<int> *l;

    public:
        Graph(int v){
            V=v;
            l = new list<int>[V];
        }

        void addEdge(int i, int j,bool undir = true){
            l[i].push_back(j);
            l[j].push_back(i);
        }

        void printAdjList(){
            //Iterate Over all the rows
            for(int i =0; i<V; i++){
                cout<<i<<"-->";
                
                //Every element in ith Linked list
                for(auto node: l[i]){
                    cout<<node<<",";
                }

                cout<<endl;
            }
        }
};

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("error.txt","w",stderr);
    #endif

    int v;
    cin>>v;

    Graph g(v);
    g.addEdge(0,1);
    g.addEdge(0,4);
    g.addEdge(2,1);
    g.addEdge(3,4);
    g.addEdge(4,5);
    g.addEdge(2,3);
    g.addEdge(3,5);

    g.printAdjList();

    return 0;
}
