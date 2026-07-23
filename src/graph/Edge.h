#ifndef EDGE_H
#define EDGE_H

class Edge
{
private:
    int sourceId;
    int destinationId;
    double distance;
    double trafficFactor;

public:
    // Constructors
    Edge();
    Edge(int sourceId, int destinationId, double distance, double trafficFactor);

    // Getters
    int getSourceId() const;
    int getDestinationId() const;
    double getDistance() const;
    double getTrafficFactor() const;

    // Setters
    void setSourceId(int sourceId);
    void setDestinationId(int destinationId);
    void setDistance(double distance);
    void setTrafficFactor(double trafficFactor);
};

#endif