/*
 * Graph.h
 *
 * Created by Romain Caron on 29/04/2023.
 */

#ifndef DATA_STRUCTURES_GRAPH_H
#define DATA_STRUCTURES_GRAPH_H

#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>

using namespace std;

namespace graph {

    class Graph {
        private:
            unordered_map<string, unordered_set<string> > adjList;

        public:
            void printGraph();
            bool addVertex(string vertex);
            bool addEdge(string vertex1, string vertex2);
            bool removeEdge(string vertex1, string vertex2);
            bool removeVertex(string vertex);
    };

} // graph

#endif //DATA_STRUCTURES_GRAPH_H
