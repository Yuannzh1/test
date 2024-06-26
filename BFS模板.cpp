/**
 * Return the length of the shortest path between root and target node.
 */
int BFS(Node root, Node target) {
    queue<Node> queue; // store all nodes which are waiting to be processed
    step = 0;      // number of steps neeeded from root to current node

    // initialize
    add root to queue;

    // BFS
    while (queue is not empty) {
        step = step + 1;

        // iterate the nodes which are already in the queue
        int size = q.size();
        for (int i = 0; i < size; ++i) {
            Node cur = the first node in queue;

            return step if cur is target;
            for (Node next : the neighbors of cur) {
                add next to queue;
            }

            remove the first node from queue;
        }
    }

    return -1;  // there is no path from root to target
}
