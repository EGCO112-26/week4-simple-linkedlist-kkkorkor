#include <stdio.h>
#include <stdlib.h>
#include "std_node.h"
int main(int argc, const char * argv[]){
    int i,n;
    struct std_node;
    n=(argc-1)/2;
    stdPtr temp, head;
        head = (stdPtr)malloc(sizeof(struct node));
        temp=head;

        for(int i=0;i<n;i++){
            temp->id = ;
            temp->next = (stdPtr)malloc(sizeof(struct node));
            temp= temp->next;
        }
        temp->next = NULL;

        return 0;
    }