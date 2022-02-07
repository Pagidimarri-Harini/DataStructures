#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node *left;
    struct Node *right;
};
struct Node* Search(struct Node *, int);
struct Node* Insert(struct Node *, int);
struct Node* Delete(struct Node *, int);
void inorder(struct Node *);
void preorder(struct Node *);
void postorder(struct Node *);
struct Node* new_node(int);
struct Node* find_minimum(struct Node*);
int main(){
    int ch, cont, data, key;
    struct Node *root = NULL;
    struct Node *r;
    do{
        printf("Enter choice: 1.insert, 2.delete, 3.search, 4.inorder, 5.preorder, 6.postorder\n");
        scanf("%d", &ch);
        switch(ch){
            case 1:
                printf("Enter value to be inserted: ");
                scanf("%d", &data);
                root = Insert(root, data);
                break;
            case 2:
                printf("Enter the node to be deleted: ");
                scanf("%d", &data);
                root = Delete(root, data);
                break;
            case 3:
                printf("Enter the key to be searched: ");
                scanf("%d", &key);
                r = Search(root,key);
                if(r == NULL){
                    printf("Element not found\n");
                }else{
                    printf("Succesful\n");
                }
                break;
            case 4:
                inorder(root);
                break;
            case 5:
                preorder(root);
                break;
            case 6:
                postorder(root);
                break;
        }
        printf("Want to continue? Enter 1\n");
        scanf("%d", &cont);
    }while(cont == 1);
    return 0;
}
struct Node *Search(struct Node *root, int x){
    if(root == NULL || root -> data == x){
        return root;
    }else if(x < root -> data){
        return Search(root -> left, x);
    }else{
        return Search(root -> right, x);
    }
}
struct Node* new_node(int x){
    struct Node* p;
    p = malloc(sizeof(struct Node(struct Node)));
    p -> data = x;
    p -> left = NULL;
    p -> right = NULL;
    return p;
}
struct Node* Insert(struct Node *root, int x){
    if(root == NULL)
        return new_node(x);
    else if(x > root -> data)
        root -> right = Insert(root -> right, x);
    else
        root -> left = Insert(root -> left, x);
    return root;
}
struct Node* find_minimum(struct Node* root){
    if(root == NULL)
        return NULL;
    else if(root -> left != NULL)
        return find_minimum(root -> left);
    return root;
}
struct Node* Delete(struct Node* root, int x){
    if (root == NULL)
        return NULL;
    if (x < root-> data)
        root->left = Delete(root->left, x);
    else if (x > root-> data)
        root->right = Delete(root->right, x);
    else{
        if(root -> left == NULL && root -> right == NULL){
            free(root);
            return NULL;
        }else if(root -> left == NULL || root -> right == NULL){
            struct Node* temp;
            if(root -> left == NULL)
                temp = root->right;
            else
                temp = root->left;
            free(root);
            return temp;
        }else{
            struct Node* temp = find_minimum(root->right);
            root->data = temp->data;
            root->right = Delete(root->right, temp->data);
        }
    }
    return root;

}
void inorder(struct Node* root){
    if(root){
        inorder(root -> left);
        printf("%d ", root ->data);
        inorder(root -> right);
    }

}
void preorder(struct Node* root){
    if(root){
        printf("%d", root -> data);
        preorder(root -> left);
        preorder(root -> right);
    }
}
void postorder(struct Node* root){
    if(root){
        postorder(root -> left);
        postorder(root ->right);
        printf("%d", root -> data);
    }
}
