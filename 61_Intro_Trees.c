/* 
---------------------------- INTRODUCTION TO TREES ---------------------------------------
Tree is a non-linear Data structure.
        -> Used to represent Hierarchial Data
        ex: Position in aCompany , Program Files (C:Folder->DSA Course->Code->61_Intro_Trees.c) in C folder we have multiple things and in Code also.

example of linear data structures: Array,stack,LinkedList,Queue etc.

 Terminologies used in Trees:
    1.Root: The top most node of a tree is called a root. There is no edge pointing to it,
            But one or more than one edge originating from it.
    2.Parent: Any Node which connects to the child. Node which has an edge pointing to some node
    3.Child: Any Node which is connected to a parent Node. Node which has an edge pointing towards it from another Node.
    4.Siblings: Nodes belonging to the same parents are called siblings of each other,
    5.Ancestor: Nodes accessible by following up the edges from a child node upwards are called the ancestor.
                Ancestors are also the parents of the parents of.... that Node.
    6.Descendants: Nodes accessible by following up the edges from a parent node downwards are called the descendants of that node.
                   Descendants are also called the child of the child of.... that Node.
    7.Leaf/External Node (NO child): Nodes which have no edge originating from it, and have no child attached to it.
                          The nodes cannot be a parent.
    8.Internal Node: Nodes with atleast one child.
    9.Depth: Depth of a node is the number of edges from root to that node.
    10.Height: Height of the node is the number of edges from the node to the deepest leaf.  
    11.Degree: The number of childs connected to a Node is called its Degree. 
    12.Degree of Tree: It is the highest degree of a node among all the nodes present in a tree.  

    -> n nodes then (n-1) edges 
    -> BINARY TREE: it is a tree in which the parents have atmost 2 children (children <= 2) for all the nodes
                    Or tree of maximum degree of tree = 2.  (0,1,2)
*/