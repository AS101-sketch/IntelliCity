#include <iostream>

#include "graph/Graph.h"
#include "graph/Vertex.h"
#include "graph/Edge.h"

int main()
{
    Graph city;

    Vertex v1(1, "F-8", 100, 200);
    Vertex v2(2, "Blue Area", 300, 250);
    Vertex v3(3, "I-8", 150, 400);

    city.addVertex(v1);
    city.addVertex(v2);
    city.addVertex(v3);

    Edge e1(1, 2, 5.0, 1.2);
Edge e2(2, 3, 4.5, 1.1);
Edge e3(1, 3, 7.2, 1.5);

city.addEdge(e1);
city.addEdge(e2);
city.addEdge(e3);



std::cout << "\nRemoving vertex...\n\n";
city.removeVertex(2);

city.displayGraph();

    return 0;
}