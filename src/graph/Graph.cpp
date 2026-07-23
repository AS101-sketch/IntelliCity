#include "Graph.h"

#include <iostream>

// Constructor
Graph::Graph()
{

}

// Add Vertex
void Graph::addVertex(const Vertex& vertex)
{
    int id = vertex.getId();

    // Check if vertex already exists
    if (vertices.find(id) != vertices.end())
    {
        std::cout << "Vertex with ID " << id << " already exists.\n";
        return;
    }

    // Add vertex
    vertices[id] = vertex;

    // Create empty adjacency list
    adjacencyList[id] = std::vector<Edge>();

    std::cout << "Vertex \"" << vertex.getName()
              << "\" added successfully.\n";
}
void Graph::displayGraph() const
{
    std::cout << "\n========== IntelliCity Graph ==========\n";

    if (vertices.empty())
    {
        std::cout << "Graph is empty.\n";
        return;
    }

    for (const auto& vertexPair : vertices)
    {
        const Vertex& vertex = vertexPair.second;

        std::cout << "\nVertex ID : " << vertex.getId() << "\n";
        std::cout << "Name      : " << vertex.getName() << "\n";
        std::cout << "Position  : ("
                  << vertex.getX()
                  << ", "
                  << vertex.getY()
                  << ")\n";

        std::cout << "Connected Roads:\n";

        auto it = adjacencyList.find(vertex.getId());

        if (it != adjacencyList.end() && !it->second.empty())
        {
            for (const Edge& edge : it->second)
            {
                std::cout
                    << " -> "
                    << edge.getDestinationId()
                    << " | Distance: "
                    << edge.getDistance()
                    << " km"
                    << " | Traffic: "
                    << edge.getTrafficFactor()
                    << "\n";
            }
        }
        else
        {
            std::cout << " No connected roads.\n";
        }
    }

    std::cout << "\n=======================================\n";
}