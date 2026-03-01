#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "std_node.h"
int main(int argc, const char * argv[]){
    int i;
    stdPtr temp, head;
        head = (stdPtr)malloc(sizeof(struct std_node));
        temp = head;

        for(i=1; i<argc; i+=2){
            
            temp->id = atoi(argv[i]);
            strcpy(temp->name, argv[i+1]);
            if(i < argc-1){
              temp->next = (stdPtr)malloc(sizeof(struct std_node)); 
              temp = temp->next; 
            }
            
        }
        temp->next = NULL;

        //print data
        temp=head;
        while(temp != NULL){
            printf("%d %s\n", temp->id, temp->name);
            temp = temp->next;
        }


        //delete data
        temp=head;
        while(temp != NULL){ 
            stdPtr next = temp->next;
            free(temp);
            temp = next;
        }

        return 0;
    }