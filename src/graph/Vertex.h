#ifndef VERTEX_H
#define VERTEX_H

#include <string>

class Vertex
{
private:
    int id;
    std::string name;
    int x;
    int y;

public:
    // Constructors
    Vertex();
    Vertex(int id, const std::string& name, int x, int y);

    // Getters
    int getId() const;
    std::string getName() const;
    int getX() const;
    int getY() const;

    // Setters
    void setId(int id);
    void setName(const std::string& name);
    void setX(int x);
    void setY(int y);
};

#endif