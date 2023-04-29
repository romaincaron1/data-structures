/*
 * Graph.h
 *
 * Created by Romain Caron on 29/04/2023.
 */

#include "Graph.h"

namespace graph {
    bool Graph::addVertex(string vertex) {
        if (adjList.count(vertex) == 0) {
            adjList[vertex];
            return true;
        }
        return false;
    }

    void Graph::printGraph() {
        for (auto [vertex, edges] : adjList) {
            cout << vertex << ": [";
            for (auto edge : edges) {
                cout << edge << ",";
            }
            cout << "]" << endl;
        }
    };

    bool Graph::addEdge(string vertex1, string vertex2) {
        if (adjList.count(vertex1) != 0 && adjList.count(vertex2) != 0) {
            adjList.at(vertex1).insert(vertex2);
            adjList.at(vertex2).insert(vertex1);
            return true;
        }
        return false;
    }

    bool Graph::removeEdge(string vertex1, string vertex2) {
        if (adjList.count(vertex1) != 0 && adjList.count(vertex2) != 0) {
            adjList.at(vertex1).erase(vertex2);
            adjList.at(vertex2).erase(vertex1);
            return true;
        }
        return false;
    }

    bool Graph::removeVertex(string vertex) {
        if (adjList.count(vertex) == 0) return false;
        for (auto otherVertex : adjList.at(vertex)) {
            adjList.at(otherVertex).erase(vertex);
        }
        adjList.erase(vertex);
    }
} // graph
















