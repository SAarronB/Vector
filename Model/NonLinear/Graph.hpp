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
#include <iostream>

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

template <class Type>
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
void Graph<Type> :: addEdgeCost(int source, int target, int cost) {
    assert(source >= 0 && source < vertexCount && target >= 0 && target < vertexCount);
    weightCostMatrix [source][target] = cost;
    weightCostMatrix[target][source] = cost;
};

template <class Type>
void Graph<Type> :: addEdgeUndirected(int source, int target) {
    assert(source >= 0 && source < vertexCount && target >= 0 && target < vertexCount);
    adjacencyMatrix[source][target] = true;
    adjacencyMatrix[target][source] = true;
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
    weightCostMatrix [source][target] = 0;
    weightCostMatrix[target][source] = 0;
};

template <class Type>
void Graph<Type> :: removeEdgeUndirected(int source, int target) {
    assert(source >= 0 && source < vertexCount && target >= 0 && target < vertexCount);
    adjacencyMatrix[source][target] = 0;
    adjacencyMatrix[target][source] = 0;
};

//--------------------------------------CONNECTION CHECKS--------------------------------------
template <class Type>
bool Graph<Type> :: hasUndirectedConnection(int source, int target)const {
    assert(source >= 0 && source < vertexCount && target >= 0 && target < vertexCount);
    bool isAnEdge = false;
    isAnEdge = adjacencyMatrix[source][target] || adjacencyMatrix[target][source];
    return isAnEdge;
};
    
template <class Type>
    bool Graph<Type> :: areConnected(int source, int target) const{
    assert(source >= 0 && source < vertexCount && target >= 0 && target < vertexCount);
    bool isAnEdge = false;
    isAnEdge = adjacencyMatrix[source][target];
    return isAnEdge;
};
    
template <class Type>
std::set<int> Graph<Type> :: neightbors(int vertex)const{
        assert(vertex < vertexCount);
        std::set<int> vertexNeighbors;
        
        for(int index = 0; index<vertexCount; index++){
            if(adjacencyMatrix[vertex][index]){
                vertexNeighbors.insert(index);
            }
        }
        return vertexNeighbors;
    };
    
    
//-------------------------------------TRAVERSALS-------------------------------------------
    
    template <class Type>
    void Graph<Type> :: depthFirstTraversal(Graph<Type> & currentGraph, int vertex){
        bool visitedVertices[MAXIMUM];
        assert(vertex < currentGraph.size());
        std::fill_n(visitedVertices, currentGraph.size(), false);
        depthFirstTraversal(currentGraph, vertex, visitedVertices);
    };
    
    template <class Type>
    void Graph<Type> :: depthFirstTraversal(Graph<Type> & currentGraph, int vertex, bool * visited){
    std::set<int> connections = currentGraph.neightbors(vertex);
    std::set<int>::iterator setIterator;
    visited[vertex] = true;
    cout << currentGraph[vertex] << ", " << endl;
        for(setIterator = connections.begin(); setIterator != connections.end(); setIterator++){
            if(!visited[*setIterator]){
                depthFirstTravelsal(currentGraph, *setIterator, visited);
            }
        }
    };
    
    template<class Type>
    void Graph<Type> :: breadthFirstTraversal(Graph<Type> & currentGraph, int vertex){
        assert(vertex < currentGraph.size());
        bool visited[MAXIMUM];
        std::set<int> connections;
        std::set<int>::iterator setIterator;
        std::queue<int> vertexQueue;
        std::fill_n(visited, currentGraph.size(), false);
        visited[vertex] = true;
        cout << currentGraph[vertex] << endl;
        vertexQueue.push(vertex);
        while (!vertexQueue.empty()){
            connections = currentGraph.neightbors(vertexQueue.front());
            vertexQueue.pop();
            for(setIterator = connections.begin(); setIterator != connections.end(); setIterator++){
                if(!visited[*setIterator]){
                    visited[*setIterator] = true;
                    cout << currentGraph[*setIterator] << endl;
                    vertexQueue.push(*setIterator);
                }
            }
        }
    };
#endif /* Graph_hpp */
