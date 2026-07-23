#include <iostream>

#include "graph/Graph.h"
#include "graph/Vertex.h"

int main()
{
    Graph city;

    Vertex v1(1, "F-8", 100, 200);
    Vertex v2(2, "Blue Area", 300, 250);
    Vertex v3(3, "I-8", 150, 400);

    city.addVertex(v1);
    city.addVertex(v2);
    city.addVertex(v3);

    city.displayGraph();

    return 0;
}