/*
 * Title: hw2_3.cpp
 * Abstract: This program reads converts a directed graph data 
             from a user into a corresponding adjacency list format.
 * Author: Justin Mello
 * ID: 2002
 * Date: 03/15/2021
 */

#include <iostream>
#include<bits/stdc++.h>
#include <vector>
#include<stdlib.h>

using namespace std;

int main() {

    //Initial variables
    int vertices;
    int edges;
    int fromVertice;
    int toVertice;
    int tempSize;

    //Create vectors
    vector< vector<int> > graphList;
    vector<int> singleList;
    
    //Get number of vertices and populate with input
    cin >> vertices;
    for(int i = 0; i < vertices; i++) {
        graphList.push_back(singleList);
    }
    
    //Get number of edges and populate with input
    cin >> edges;
    for(int i = 0; i < edges; i++) {
        cin >> fromVertice >> toVertice;
        graphList[fromVertice].push_back(toVertice);
    }

    //sort each of the list in adjacency list
    for(int i = 0; i < vertices; i++) {
        sort(graphList[i].begin(), graphList[i].end());
    }

    for(int i = 0; i < vertices; i++) {
        tempSize = graphList[i].size();
        cout << i ;
    
    for(int j = 0; j < tempSize; j++) {
        cout << "->" << graphList[i][j];
    }
    cout << endl;
}

    return(0);
    
}
