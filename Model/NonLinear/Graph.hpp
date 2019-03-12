//
//  Graph.h
//  Vector
//
//  Created by Bonilla, Sean on 3/6/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef Graph_hpp
#define Graph_hpp

#include <set>
#include <queue>
#include <assert.h>

using namespace std;
template <class Type>
class Graph {
private:
    static const int MAXIMUM = 50;
    bool adjacencyMatrix [MAXIMUM][MAXIMUM];
    int weightCostMatrix [MAXIMUM][MAXIMUM];
    Type graphData[MAXIMUM];
    int vertexCount;
    void depthFirstTraversal(Graph<Type> & graph, int vertex, bool markedVertices[]);
    
public:
    Graph();
    //Graph operations
    
    void addVertex(const Type& value);
    
    //Connect vertices
    void addEdge(int sourve, int target);
    void addEdgeUndirected(int source, int target);
    void addEdgeCost(int source, int target, int cost);
    
    //Disconnected vertices
    void removeEdge(int source, int target);
    void removeEdgeUndirected(int source, int target);
    void removeEdgeCost(int source, int target);
    
    //Accessors
    Type& operator [] (int vetex);
    Type operator [](int vetex) const;
    int size () const;
    
    bool hasUndirectedConnection(int source, int target) const;
    bool areConnected(int source, int target)const;
    std::set<int>neightbors(int vertex) const;
    
    //Traversals
    void depthFirstTraversal(Graph<Type> & graph, int vetex);
    void breadthFirstTraversal(Graph<Type> & graph, int vertex);
    int costTraversal(Graph<Type> & graph, int vertex);
};

//---------------------------------------CONSTRUCTOR----------------------------------------
template <class Type>
const int Graph<Type> :: MAXIMUM;

template <Class Type>
Graph<Type> :: Graph(){
    this->vertexCount = 0;
};

//---------------------------------------ADD METHODS-----------------------------------------
template <class Type>
void Graph<Type> :: addEdge(int source, int target) {
    assert(source >= 0 && source < vertexCount && target < vertexCount);
    adjacencyMatrix [source][target] = true;
};

template <class Type>
void Graph<Type> :: addEdgeCost(int source, int target) {
    assert(source >= 0 && source < vertexCount && target >= 0 && target < vertexCount);
    weightCostMaxtrix [source][target] = cost;
    weightCostMaxtrix[target][source] = cost;
};

template <class Type>
void Graph<Type> :: addEdgeUndirected(int source, int target) {
    assert(source >= 0 && source < vertexCount && target >= 0 && target < vertexCount);
    adjacencyMaxtrix[source][target] = true;
    adacencymaxtrix[target][source] = true;
};

//--------------------------------------REMOVE METHODS------------------------------------------
template <class Type>
void Graph<Type> :: removeEdge(int source, int target) {
    assert(source >= 0 && source < vertexCount && target < vertexCount);
    adjacencyMatrix [source][target] = 0;
    adjacencyMatrix [target][source] = 0;
};

template <class Type>
void Graph<Type> :: removeEdgeCost(int source, int target) {
    assert(source >= 0 && source < vertexCount && target >= 0 && target < vertexCount);
    weightCostMaxtrix [source][target] = 0;
    weightCostMaxtrix[target][source] = 0;
};

template <class Type>
void Graph<Type> :: remoceEdgeUndirected(int source, int target) {
    assert(source >= 0 && source < vertexCount && target >= 0 && target < vertexCount);
    adjacencyMaxtrix[source][target] = 0;
    adacencymaxtrix[target][source] = 0;
};

//--------------------------------------CONNECTION CHECKS--------------------------------------
template <class Type>
bool Graph<Type> :: hasUndirectedConnection(int source, int target)const {
    assert(source >= 0 && source < vertexCount && target >= 0 && target < vertexCount);
    bool isAnEdge = false;
    isAnEdge = adjacencymatrix[source][target] || [adjacencyMatrix[target][source];
    return isAnEngine;
};
    
template <class Type>
    bool Graph<Type> :: areConnected(int source, int target) const{
        assert(source >= 0 && source < vertexCount && target >= 0 && target < vertexCount);
        bool isAnEdge = false;
        isAnEdge = adjacencyMatrix[source][target];
        return isAnEdge;
    };
    
template <class Type>
    std::set<int> Graph<Type> :: Neighbors(int vertex)const{
        assert(vertex < vertexCount);
        std::set<int> vertexNeighbors;
        
        for(int index = 0; index<vertexCount; index++){
            if(adjacencyMatrix[vertex][index]){
                vertexNeighbors.insert(index);
            }
        }
        return vertexNighbors;
    };
    
    
//-------------------------------------TRAVERSALS-------------------------------------------
    
    template <class Type>
    void Graph<Type> :: depthFirstTraversal(Graph<Type> & currentGraph, int vertex){
        bool visitedVertices[MAXIMUM];
        assert(vertex < currentGraph.size(), false);
        std::fill_n(visitedVeratices, currentGraph.size(), false);
        depthFirstTraversal(currentGraph, vertex, visitedVertices);
    };
    
    template <class Type>
    void Graph<Type> :: depthFirstTraversal(Graph<Type> & currentGraph, int vertex, bool * visited){
    std::set<int> connections = currentGraph.neightbors(vertex);
    std::set<int>::iterator setIterator;
    visited[vertex] = true;
    cout << currentGraph[vertex] << ", " << endl;
    for(setIteratro = connections.begin(); setIterator != connections.end(); setIterator++){
        if(!visited[*setIterator]){
            depthFirstTravelsal(currentGraph, *setIterator, visited);
        }
    }
};
    
    
#endif /* Graph_hpp */
