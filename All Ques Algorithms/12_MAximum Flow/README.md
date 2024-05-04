Problem Definition:

Given a flow network represented as a directed graph with capacity constraints, the objective is to find the maximum flow from a source node (s) to a sink node (t).

Key Concepts:

Flow Network: A directed graph where each edge has a capacity, indicating the maximum flow that the edge can carry.

Residual Graph: A graph derived from the original flow network where the capacities are updated to reflect the remaining capacity after accounting for the flow.

Augmenting Path: A path from source to sink in the residual graph with available capacity, allowing more flow to be pushed through.

Ford-Fulkerson Algorithm: An algorithm to find the maximum flow in a flow network by repeatedly finding augmenting paths and updating the residual graph accordingly.

Algorithm Outline:

Initialize the Residual Graph:

Create a residual graph rG from the given graph g, with capacities initialized to the original capacities.

Loop Until No More Augmenting Paths:

Use the bfs function to find an augmenting path from s to t.

If an augmenting path is found:

Determine the maximum flow (flow) that can be pushed through this path, which is the minimum capacity along the path.
Update the residual graph rG by reducing the capacity along the augmenting path and increasing the capacity in the reverse direction.
Add flow to max_flow.
If no augmenting path is found, the algorithm terminates.

Return the Maximum Flow:

The final value of max_flow represents the maximum flow from s to t in the flow network.

Key Functions:

bfs Function:

This function finds an augmenting path from s to t in the residual graph rG.
It uses a Breadth-First Search (BFS) strategy with a queue to traverse the graph.
If an augmenting path is found, the parent vector p records the parent of each node, enabling reconstruction of the path.

Updating the Residual Graph:

After finding an augmenting path, update the capacities in rG to reflect the new flow. The capacity is decreased along the path and increased in the reverse direction to account for potential flow reversal in subsequent augmenting paths.

Complexity:
The time complexity of the Ford-Fulkerson algorithm depends on the method used to find augmenting paths. The worst-case complexity is O(E * F), where E is the number of edges, and F is the maximum flow.
Overall, the code finds the maximum flow from a source to a sink in a directed flow network, using the Ford-Fulkerson algorithm with a Breadth-First Search strategy to find augmenting paths.
