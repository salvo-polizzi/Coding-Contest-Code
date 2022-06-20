#include "graph.h"
#include <fstream>

int main() {
    fstream input("input.txt", fstream::in);
    fstream output("output.txt", fstream::out);

    for(int i=0; i<100; i++) {
        int numNodes;
        input >> numNodes;

        int numEdges;
        input >> numEdges;

        string type;
        input >> type;

        Graph<int> intGraph;
        Graph<double> doubleGraph;
        Graph<char> charGraph;

        for(int j=0; j<numNodes; j++) {
            if(type == "int") {
                int value;
                input >> value;
                intGraph.insertNode(value);
            }else if (type == "double") {
                double value;
                input >> value;
                doubleGraph.insertNode(value);
            }else{
                char value;
                input >> value;
                charGraph.insertNode(value);
            }
        }

        for(int j = 0; j < numEdges; j++) {
            //string edge;
            //input >> edge;
            //cout << edge << endl;

            if(type == "int") {
                int key1, key2;
                //string value1 = edge.substr(1, edge.find(" "));
                //string value2 = edge.substr(edge.find(" ")+1 , edge.find(")"));
                string value1, value2;
                input >> value1 >> value2;
                value1 = value1.substr(1);
                value2 = value2.substr(0, value2.find(")"));

                key1 = stoi(value1);
                key2 = stoi(value2);

                intGraph.addEdge(key1, key2);

                cout << "key1: " << key1 << ", key2: " << key2 << endl;
            }else if(type == "double") {
                double key1, key2;
                //string value1 = edge.substr(1, edge.find(" "));
                //string value2 = edge.substr(edge.find(" ")+1 , edge.find(")"));
                string value1, value2;
                input >> value1 >> value2;
                value1 = value1.substr(1);
                value2 = value2.substr(0, value2.find(")"));

                key1 = stod(value1);
                key2 = stod(value2);

                doubleGraph.addEdge(key1, key2);

                //cout << "key1: " << key1 << ", key2: " << key2 << endl;
            }else{
                char key1, key2;

                //key1 = edge[1];
                //key2 = edge[3];
                string value1, value2;
                input >> value1 >> value2;
                value1 = value1.substr(1);
                value2 = value2.substr(0, value2.find(")"));

                key1 = value1[0];
                key2 = value2[0];

                charGraph.addEdge(key1, key2);

                //cout << "key1: " << key1 << ", key2: " << key2 << endl;
            }
        }

        if(type == "int") {
            output << intGraph << endl;
            //intGraph.printMatrix();
        }
        else if(type == "double") {
            output << doubleGraph << endl;
            //doubleGraph.printMatrix();
        }
        else {
            output << charGraph << endl;
            //charGraph.printMatrix();
        }
    }
}
