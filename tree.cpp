#include <iostream>

struct Node
{
    char data;
    Node *child1;
    Node *child2;
};

// function in-order traversal
void inOrder(Node *root)
{
    if (root == nullptr)
    {
        return;
    }
    // left->root-> right
    inOrder(root->child1); // left side
    std::cout << root->data << "->";
    inOrder(root->child2); // rigt side
}

void preOrder(Node *root)
{
    if (root == nullptr)
    {
        return;
    }
    // root-> left-> right
    std::cout << root->data << "->";
    preOrder(root->child1); // left side
    preOrder(root->child2); // right side
}

void postOrder(Node *root)
{
    if (root == nullptr)
    {
        return;
    }
    // left-> right->root
    postOrder(root->child1); // left side
    postOrder(root->child2); // right side
    std::cout << root->data << "->";
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

    std::cout << "In Order traversal sequence: ";
    inOrder(root);
    std::cout<<std::endl;
    std::cout << "pre Order traversal sequence: ";
    preOrder(root);
    std::cout<<std::endl;
    std::cout << "post Order traversal sequence: ";
    postOrder(root);
    return 0;
}
