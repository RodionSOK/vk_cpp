# BFS (Breadth-First Search) Implementation

## Description

This C++ program implements the Breadth-First Search (BFS) algorithm for traversing or searching graph data structures. It calculates the shortest path distances from a given starting vertex to all other vertices in an unweighted, undirected graph.

## Features

- Reads graph structure from input file
- Implements standard BFS algorithm
- Calculates shortest path distances in unweighted graphs
- Handles undirected graphs
- Outputs distances from start vertex to all other vertices

## Requirements

- C++ compiler (g++, clang++, etc.)
- Standard C++ library

## Usage

### Compilation

g++ bfs.cpp -o bfs

### Running the Program

./bfs

### Input File Format (`graph.txt`)

The program expects an input file named `graph.txt` with the following format:

<number_of_vertices> <number_of_edges>
<vertex1> <vertex2>  # edge 1
<vertex3> <vertex4>  # edge 2
...
<start_vertex>

Example:
5 6
0 1
0 2
1 3
2 3
2 4
3 4
0

### Output

The program outputs the distance from the start vertex to each vertex in the graph (one per line), with -1 indicating unreachable vertices.

## Implementation Details

### Key Functions

- `bfs()`: The main BFS implementation that takes a graph and starting vertex, returns distances
- `main()`: Handles file I/O and displays results

### Algorithm Characteristics

- Time Complexity: O(V + E) where V is vertices and E is edges
- Space Complexity: O(V)
- Uses adjacency list representation for efficient traversal

## Example

For the example input above, the output would be:

0  # distance to vertex 0
1  # distance to vertex 1
1  # distance to vertex 2
2  # distance to vertex 3
2  # distance to vertex 4

## Limitations

- Only handles undirected graphs
- No input validation for malformed files
- Fixed input filename (`graph.txt`)
- No weighted graph support
