#include <iostream>

struct Node 
{
    int Data; 
    Node* L, *R, *R_sibling; 
    int Level; // 
};

void siblings(Node* root);
{
    L->R_sibling = R;
    L->R->R_sibling = 
}

int main()
{
    std::cout << "Hello World!\n";
}
