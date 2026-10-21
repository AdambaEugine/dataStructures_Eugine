#include <iostream>
#include <queue>

struct Node // struct called Node
{
    char data;
    Node *child1;
    Node *child2;
};

// function in-order traversal
void inOrder(Node *root)
{
    // check if the pointer to the root (*root) is null,if it is it means there is no root node 
    if (root == nullptr)
    {
        //thus returns because there is no nodes to traverse
        return;
    }
    // left->root-> right
    inOrder(root->child1); // left side
    std::cout << root->data << " "; //print the data in the node
    inOrder(root->child2); // rigt side
}

void preOrder(Node *root)
{
    // check if the pointer to the root (*root) is null,if it is it means there is no root node 
    if (root == nullptr)
    {
        //thus returns because there is no nodes to traverse
        return;
    }
    // root-> left-> right
    std::cout << root->data << " ";//print the data
    preOrder(root->child1); // left side
    preOrder(root->child2); // right side
}

void postOrder(Node *root)
{
    // check if the pointer to the root (*root) is null,if it is it means there is no root node 
    if (root == nullptr)
    {
        //thus returns because there is no nodes to traverse
        return;
    }
    // left-> right->root
    postOrder(root->child1); // left side
    postOrder(root->child2); // right side
    std::cout << root->data << " ";//print the data 
}

void levelfirstOrder(Node *root){
    std::queue<Node*>q;
    // check if the pointer is null,if it is it means there are no more nodes to traverse
    if(root == nullptr){
        return;
    }
    // add the root to the front of the queue 
    q.push(root);
    while(!q.empty()){ //for when the queue is not empty
        Node *currentNode= q.front(); //get the front node (process 1)
        std::cout<<currentNode->data<<" "; //display its data (process 2)
        q.pop();//remove it from the queue(dequeue(root))(process 3)
        if(currentNode->child1 != nullptr){ //check if the root had a child(left)
            q.push(currentNode->child1);//add the child into the queue if present and loops back to process 1->3
        }
        if(currentNode->child2 != nullptr){//checks if root had a child (right)
            q.push(currentNode->child2);//add the child into the queue if present and loops back to process 1 ->3
        }

    }
}

int main()
{
    // create a pointer pointing to the root node
    // alternatively Node root{10,nullptr,nullptr} which creates a node object directly and can be accessed by root.data;/[]
    Node *root = new Node{'A', nullptr, nullptr};
    // create a child for the root A  left side
    root->child1 = new Node{'B', nullptr, nullptr};
    // create a child for the root A right side
    root->child2 = new Node{'C', nullptr, nullptr};
    // create a child for child1(B) left side
    root->child1->child1 = new Node{'D', nullptr, nullptr};
    // create another child for child1(B) right side
    root->child1->child2 = new Node{'E', nullptr, nullptr};
    // create a child for child2(C) right side
    root->child2->child2 = new Node{'F', nullptr, nullptr};

    // visualization
    std::cout << "         " << root->data << std::endl; // A
    std::cout << "        /" << " \\" << std::endl;
    std::cout << "       " << root->child1->data << "   " << root->child2->data << std::endl; // B ,C
    std::cout << "      /" << " \\" << "   \\" << std::endl;
    std::cout << "     " << root->child1->child1->data << "   " << root->child1->child2->data << "   " << root->child2->child2->data << std::endl; // D,E,F


    std::cout<<std::endl;
    std::cout << "In Order traversal sequence: ";
    inOrder(root);
    std::cout<<std::endl;
    std::cout << "pre Order traversal sequence: ";
    preOrder(root);
    std::cout<<std::endl;
    std::cout << "post Order traversal sequence: ";
    postOrder(root);
    std::cout<<std::endl;
    std::cout << "depth/levil first traversal sequence: ";
    levelfirstOrder(root);
    
    return 0;
}
