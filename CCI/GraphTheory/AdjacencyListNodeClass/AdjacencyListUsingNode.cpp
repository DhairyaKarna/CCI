#include<bits/stdc++.h>

using namespace std;

class Node{
    public:
        string name;
        list<string> nbrs; //Neighbours
    
    Node(string name){
        this->name = name;
    }
};

class Graph{
    //Hashmap (string, Node*) - Address of Node object
    unordered_map<string, Node*> m;

    public:
        Graph(vector<string> cities){
            for(auto city : cities){
                m[city] = new Node(city);
            }
        }

        void addEdge(string x, string y, bool undir = false){
            //m[x] - Node value - node pointer
            m[x]->nbrs.push_back(y);

            if(undir == true)
                m[y]->nbrs.push_back(x);
        }

        void printAdjList(){
            //map stores value in form of key value pair
            for(auto cityPair : m){
                auto city = cityPair.first;
                Node *node = cityPair.second;

                cout<<city<<" -> ";
                
                for(auto nbr : node->nbrs){
                    cout<<nbr<<",";
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

    vector<string> cities = {"Delhi","London","Paris","New York"};
    Graph g(cities);
    g.addEdge("Delhi","London");
    g.addEdge("New York","London");
    g.addEdge("Paris","New York");
    g.addEdge("Delhi","Paris");

    g.printAdjList();

    return 0;
}
