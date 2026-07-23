#include "Vertex.h"

// Default Constructor
Vertex::Vertex()
{
    id = 0;
    name = "";
    x = 0;
    y = 0;
}

// Parameterized Constructor
Vertex::Vertex(int id, const std::string& name, int x, int y)
{
    this->id = id;
    this->name = name;
    this->x = x;
    this->y = y;
}

// Getters
int Vertex::getId() const
{
    return id;
}

std::string Vertex::getName() const
{
    return name;
}

int Vertex::getX() const
{
    return x;
}

int Vertex::getY() const
{
    return y;
}

// Setters
void Vertex::setId(int id)
{
    this->id = id;
}

void Vertex::setName(const std::string& name)
{
    this->name = name;
}

void Vertex::setX(int x)
{
    this->x = x;
}

void Vertex::setY(int y)
{
    this->y = y;
}