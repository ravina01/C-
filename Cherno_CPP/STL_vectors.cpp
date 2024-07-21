#include<iostream>
#include<vector>

using namespace std;

struct Vertex
{
    float x, y,z;
};

// Overload the << operator to print Vertex objects
ostream& operator<<(ostream& os, const Vertex& v) {
    os << "Vertex(" << v.x << ", " << v.y << ", " << v.z << ")";
    return os;
}
int main()
{
    // std::vector<int> arr;

    vector<Vertex> vertices;
    vertices.push_back({1.0,2.0, 3.0});
    vertices.push_back({3.0,7.0, 3.0});

    cout<<vertices.size()<<endl;

    for(int i=0; i<vertices.size(); i++)
    {
        std::cout<<vertices[i]<<endl;
    }
    for(Vertex& vertice: vertices)// ref wont copy the data 
    {
       cout<<vertice<<endl; 
    }

    vertices.clear();

    return 0;
}