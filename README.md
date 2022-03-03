<h1 align='center'>Data Structure</h1>

- A data structure is a logical or mathematical model of a particular organization of data in a computer.
- The choice of a particular data model depends on two considerations.
 - First, it must be **rich** enough in structure to mirror the actual relationship of the data in the real world.
 - Second, it must be **simple** enough that one can effectively process the data when necessary.
***

## Types of Data Structure
There are two types of data structure available for the programming purpose:
> - [Primitive Data Structure](#Primitive-Data-Structure)
> - [Non-primitive Data Structure](#Non-primitive-Data-Structure)

### Primitive Data Structure
Primitive data structure is a fundamental type of data structure that stores the data of only one type.
> **Most of the languages provide the following built-in fundamental data structure.**
> - Integer
> - Float
> - Boolean
> - Character and Strings
> - Pointer

### Non-primitive Data Structure
The non-primitive data structure is a  user-defined type of data structure that stores the data of different types in a single entity.
> **The most used user-defined data structures can be subdivided in the following categories.**
> - Linear
>  - Static
>    - [Arrays](#Array-Data-Structure)
>  - Dynamic
>    - [Linked Lists](#Linked-List-Data-Structure)
>    - [Stacks](#Stack-Data-Structure)
>    - [Queues](#Queue-Data-Structure)
> - Non Linear
>  - [Trees](#Tree-Data-Structure)
>  - [Graphs](#Graph-Data-Structure)

**The data structures can also be classified on the basis of the following characteristics:**

Characterstic |	Description
--- | ---
Linear |	In Linear data structures,the data items are arranged in a linear sequence that is one after the other. Example: Array
Non-Linear |	In Non-Linear data structures,the data items are not in sequence but one element will be connected to one or more elements(elements contain a hierarchical relationship). Example: Tree, Graph
Homogeneous	| In homogeneous data structures, all the elements are of same type. Example: Array
Non-Homogeneous	| In Non-Homogeneous data structure, the elements may or may not be of the same type. Example: Structures
Static |	Static data structures are those whose sizes and structures associated memory locations are fixed, at compile time. Example: Array
Dynamic |	Dynamic structures are those which expands or shrinks depending upon the program need and its execution. Also, their associated memory locations changes. Example: Linked List created using pointers

***
## Data Structure Operations
The data in the data structures are processed by certain operations.
> **The following four operations play a major role in this context.**
> - **Traversing:** Traverse element in a data structure one after another.
> - **Searching:** Search for any element in a data structure.
> - **Inserting:** Insert the new element in a data structure
> - **Deleting:** Perform the delete operation to remove the element from the data structure.

> **Sometimes the following two types of operations may be performed for special situations.**
> - **Sorting:** Sort the elements of a data structure either in an ascending or descending order.
> - **Merging:** Combine the elements two data structures into a single data structure.
***

## Array Data Structure
An array is the simplest type of data structure which can store the primitive type of data such as int, char, double, float, etc in contiguous memory locations.
> **Following are the important terms to understand the concept of Array.**
> - **Element:** Each item stored in an array is called an element.
> - **Index:** Each location of an element in an array has a numerical index, which is used to identify the element.

### Basic Array Operations
There is some specific operation that can be performed or those that are supported by the array.
> **Basic array operations are:**
> - **Traverse:** Traverse the array from lower bound to upper bound or vice-versa and process all the array elements one by one.
> - **Insert:** Traverse from upper bound and shift the element to the right index for making a space and insert the new element at the given index.
> - **Delete:** Traverse from lower bound and delete the element at given index and shift the remaining elements to the left index.
> - **Update:** Update an element at given index using the array index.
> - **Search:** Traverse from lower bound to upper bound or vice-versa and search for an element using the given index or by value.
***

## Linked List Data Structure
The linked list or one way list is a linear data structure where data is not stored in contiguous memory locations but each data node is connected to the next data node via a pointer, hence forming a chain.
> **Following are the important terms to understand the concept of Linked List.**
> - **Node:** Linked list is a series of connected nodes. A node in the linked list contains two parts.
>   - **Data Part:** Each element of the linked list is stored in the data part.
>   - **Address Part:** The location of the next node in the linked list is pointed by the pointer in the address part. The last node contains a pointer to the null.

### Types of Linked List
> **Linked list is classified into the following types.**
> - **Singly Linked List:** A node consists of two parts - data part and link part to the next node.
> - **Doubly Linked List:** A node consists of three parts - data part,  a link part pointer to the previous as well as link part pointer to the next node in the sequence.
> - **Circular Linked List:** A circular linked list can be either singly linked or doubly linked
>   - **Circular Singly Linked List:** The last node of the singly list contains a pointer to the first node of the list.
>   - **Circular Doubly Linked List:** The last node of the doubly list contains the address of the first node in its next pointer and the first node also contains the address of the last node in its previous pointer.

### Basic Linked List Operations
There are various linked list operations that can be performed for different actions on linked lists.
> **Basic linked list operations are:**
> - **Traverse:** Access each element of the linked list
>   - For displaying the nodes keep moving the `temp` node from `head or start` to the next one and display its contents until `temp` is `null`.
> - **Insert:** Add a new node in the linked list. Firstly allocate memory for `new node` and store data in data part and null in next part and then the insertion can be done.
>   - Insertion at the beginning of the list.
>     - Change `next` of new node to point to `head`.
>     - Change `head` to point to `new node`.
>   - Insertion at the end of the list.
>     - Traverse to last node.
>     - Change `next` of last node point to `new node`.
>   - Insertion after the given node.
>     - Traverse to node just before the required position of new node.
>     - Change `next pointers` to include new node in between.
> - **Delete:** Remove an existing node from linked list.  Deletion can be either from the beginning, end or from a particular position.
>   - Deletion from the beginning of the list.
>     - Point `head` to the `second node`.
>   - Deletion from the end of the list.
>     - Traverse to second last node.
>     - Change its `next` pointer to `null`.
>   - Deletion of the node with given item or node following given node.
>     - Traverse to element before the element to be deleted.
>     - Change `next pointers` to exclude the node from the chain.
> - **Search:** Find a node in the linked list.
>   - Traverse the list starting from `head` as the `current node` and loop until the `current node` is `null`.
>   - In each iteration, check if the key of the node is equal to item or not.
> - **Sort:** Sort the nodes of the linked list.
>   - Traverse the list starting from `current node` pointing  `head` until `current node` is `null`. And also create another node `index` for later use.
>   - In each iteration, store the `next node of current` in `index`.
>   - Check if the data of the `current node` is greater than the `index node`, if it is greater, `swap` current and index and do this until `index` is `null`.
***

## Stack Data Structure
A stack is an abstract data type or a linear data structure with a bounded(predefined) capacity that allows adding and removing elements in a particular order. Stack follows the principle of Last In First Out (LIFO). This means the last element inserted inside the stack is removed first.\
It works just like a pile of plates where the new plate kept on the top and will be removed first.
> **Following is the important terms to understand the concept of Stack.**
> - **Top:** Every time an element is added, it goes on the top of the stack and the only element that can be removed is the element that is at the top of the stack.
>   - If `top = -1` then the stack is `empty`.
>   - If `top = 0` then there is `only one element` in the stack.
>   - If `top = n-1` then the stack is `full`.
>   - If `top = n` then the stack is in `overflow state`.

### Basic Stack Operations
There are some basic operations that can be performed on a stack using array or linked list representation.
> **Basic stack operations are:**
> - **Push:** Add an element to the top of a stack
> - **Pop:** Remove an element from the top of a stack
> - **IsEmpty:** Check if the stack is empty
> - **IsFull:** Check if the stack is full
> - **Peek:** Get the value of the top element without removing it
***

## Queue Data Structure
A queue is an abstract data type or a linear data structure  with a bounded capacity that allows adding and removing elements in a particular order. Queue follows the principle of First In First Out (FIFO). This means the first element stored in the queue will be removed first.\
It works just like a queue of people in the ticket counter where first person on the queue will get the ticket first.
> **Following are the important terms to understand the concept of Queue.**
> - **Front:** also called `head`. In this end the removal of existing element takes place.
> - **Rear:** also called `tail`. In this end the insertion of new element takes place.

### Types of Queue
> **There are four different types of queues:**
> - **Simple Queue:** In a simple queue, insertion takes place at the rear and removal occurs at the front. It strictly follows the FIFO (First in First out) rule.
> - **Circular Queue:** In a circular queue, the last element points to the first element making a circular link. The main advantage of a circular queue over a simple queue is better memory utilization. If the last position is full and the first position is empty, we can insert an element in the first position. This action is not possible in a simple queue.
> - **Priority Queue:** A priority queue is a special type of queue in which each element is associated with a priority and is served according to its priority. If elements with the same priority occur, they are served according to their order in the queue. Insertion occurs based on the arrival of the values and removal occurs based on priority.
> - **Double Ended Queue:** In a double ended queue, insertion and removal of elements can be performed from either from the front or rear. Thus, it does not follow the FIFO (First In First Out) rule.

### Basic Queue Operations
There are some basic operations that can be performed on a queue using array or linked list representation.
> **Basic operations associated with queues are:**
> - **EnQueue:** Add an element to the queue.
> - **DeQueue:** Remove an element from the queue.
> - **Peek:** Get the element at the front of the queue without removing it.
> - **IsFull:** Check if the queue is full.
> - **IsEmpty:** Check if the queue is empty.

## Graph Data Structure
A graph data structure is a collection of nodes, each node is called vertex and each vertex is connected to other vertices through edges.
### Graph Terminology
> - **Vertex:** Each node of the graph is represented as a vertex.
> - **Edge:** Edge represents a path between two vertices or a line between two vertices.
> - **Adjacency:** Two vertex are adjacent if hey are connected through an edge.
> - **Path:** A sequence of edges that allows you to go from vertex A to vertex B is called a path.
### Types of Graph
> - **Undirected Graph:** The edges do not specify a particular direction. The edges are bi-directional.
> - **Directed Graph:** The edges can be traversed in a specified direction only.
> - **Weighted Graph:** The edges are associated with a weight. This is generally the cost to traverse the edge.
> - **Unweighted Graph:** The edges doesn't contain any weight.
### Graph Representation
> **Graphs are commonly represented in two ways.**
> - Adjacency Matrix
> - Adjacency List
### Basic Graph Operations
> **The most common graph operations are:**
> - **Insert:** Add elements(vertex, edges) to the graph
> - **Search:** Check if the element is present in the graph
> - **Graph Traversal:**
>   - **Depth First Search (DFS)** algorithm traverses a graph in a depthward motion and uses a stack to remember to get the next vertex to start a search, when a dead end occurs in any iteration.
>   - **Breadth First Search (BFS)** algorithm traverses a graph in a breadthward motion and uses a queue to remember to get the next vertex to start a search, when a dead end occurs in any iteration.
> - **Path:** Finding the path from one vertex to another.

## Trees Data Structure
A tree is a nonlinear hierarchical data structure that consists of nodes connected by edges. However, in tree data structure, there can only be one edge between two vertices.
### Tree Terminology
> - **Node:** An entity that contains a key or value and pointers.
> - **Edge:** The link between any two nodes.
> - **Root:** The topmost node in a tree.
> - **Parent:** Every node (excluding a root) in a tree is connected by a directed edge from exactly one other node. This node is called a parent.
> - **Child:** A node directly connected to another node when moving away from the root.
> - **Leaf/External node:** Node with no children.
> - **Internal node:** Node with at least one children.
> - **Height of a Node:** The number of edges from the node to the deepest leaf (i.e. the longest path from the node to a leaf node).
> - **Depth of a Node:** The number of edges from root to the node.
> - **Height of a Tree:** The height of the root node or the depth of the deepest node.
> - **Degree of a Node:** The total number of branches of that node.
> - **Forest:** A collection of disjoint trees is called a forest.
> - **Sub-tree:** Sub-tree represents the descendants of a node.
### Types of Tree
> - **Binary Tree:** Every parent node has a maximum of two child nodes, therefore, each node can have 0, 1, or 2 nodes.
> - **Binary Search Tree:**  A node-based binary tree data structure in which all the nodes follow the below-mentioned properties −
>   - The value of the key of the left sub-tree is less than the value of its parent (root) node's key
>   - The value of the key of the right sub-tree is greater than or equal to the value of its parent (root) node's key.
>   - The left and right subtree each must also be a binary search tree.
> - **AVL Tree:** The difference of heights of left and right subtrees of any node is less than or equal to one. It consists of properties from both the binary as well as as binary search tree.
> - **B-Tree:** A self-balancing search tree, also known as the height-balanced m way tree, where m is the order of the tree. Each node of the tree can have more than one key and more than two child nodes.

### Basic Tree Operations
The basic operations that can be performed on a binary search tree data structure, are the following.
> - **Insert:** Inserts an element in a tree/create a tree.
> - **Delete:** Deletes an element from a trees.
> - **Search:** Searches an element in a tree.
> - **Tree Traversal:**
>   - **Preorder Traversal:** Process root node then traverse left subtree completely and then traverse right subtree.
>   - **Inorder Traversal:** First traverse left subtree then process the current root node and then traverse right subtree.
>   - **Postorder Traversal:** First traverse left subtree completely then traverse right subtree completely and then process the root node.
