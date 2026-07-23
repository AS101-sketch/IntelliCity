#ifndef GRAPH_H
#define GRAPH_H

#include <unordered_map>
#include <vector>

#include "Vertex.h"
#include "Edge.h"

class Graph
{
private:

    // Stores all vertices using their ID
    std::unordered_map<int, Vertex> vertices;

    // Adjacency List
    std::unordered_map<int, std::vector<Edge>> adjacencyList;

public:

    Graph();

    // Vertex Operations
    void addVertex(const Vertex& vertex);
    void removeVertex(int id);
    bool hasVertex(int id) const;

    // Edge Operations
    void addEdge(const Edge& edge);
    void removeEdge(int sourceId, int destinationId);

    // Utility
    void displayGraph() const;

    Vertex getVertex(int id) const;

    std::vector<Edge> getNeighbors(int id) const;

};

#endif