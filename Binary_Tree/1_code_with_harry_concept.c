#include <stdio.h>
#include<malloc.h>
struct node
{
int data;
struct node* left;
struct node* right;

};

struct node* createNode(int data)
{
struct node *n;
n = (struct node*) malloc (sizeof(struct node)); // allocating memory int the heap
n->data =2; // setting the data
n->left = NULL; // settingthe lef and rifhtr children to NULL
n->right = NULL; // settingthe lef and rifhtr children to NULL

return n; //FINALLY RETURNING THE CREATED NODE

}

int main()
{

// CONSTRUCTIN THE ROOT NODE
                                                    // struct node *p;
                                                    // p = (struct node*) malloc (sizeof(struct node));
                                                    // p->data =1;
                                                    // p->left = NULL;
                                                    // p->right = NULL;


                                                    // //CONSTRUCTING THE 2nd NODE
                                                    // struct node *p1;
                                                    // p1 = (struct node*) malloc (sizeof(struct node));
                                                    // p1->data =1;
                                                    // p1->left = NULL;
                                                    // p1->right = NULL;

                                                    // //CONSTRUCTING THE 3rd NODE
                                                    // struct node *p2;
                                                    // p->data =4;
                                                    // p2 = (struct node*) malloc (sizeof(struct node));
                                                    // p2->left = NULL;
                                                    // p2->right = NULL;

                                                    // // LINKING THE ROOT NODE WITH LEFT AND RIGHT CHILDREN
                                                    // p->left = p1;
                                                    // p->right = p2;


struct node *p = createNode(2);
struct node *p1 = createNode(4);
struct node *p2 = createNode(1);

//   LINKING THE ROOT NODE WITH LEFT AND RIGHT CHILDREN
  p->left = p1;
  p->right = p2;


printf("the p-> left is %d",*p->left);
printf("the p-> right is %d",*p->right);




    return 0;
}
