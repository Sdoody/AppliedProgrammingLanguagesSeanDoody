//
//  main.cpp
//  Linked_List_Doody

#include <iostream>

using namespace std;
#include <iostream>
using namespace std;

#ifndef Linked_Lists_hpp
#define Linked_Lists_hpp

class Headnode{
private:
    
    typedef struct node{
        int element;
        node* next;
    }* nodePtr;
    
    nodePtr head;
    nodePtr current;
    nodePtr temp;
    
public:  // this is where the funcitons go to access the private data
    // This is the Ctor for the Headnode Class
    Headnode();
    void AddNode(int addElement);
    void DeleteNode(int DelElement);
    void PrintNode();
    
};

#endif /* Linked_Lists_hpp */

Headnode::Headnode(){
    head = NULL;
    current = NULL;
    temp = NULL;
    
} // ends HeadNode

void Headnode::AddNode(int addElement){
    // adds an element to the linked list
    
    nodePtr n = new node;
    n->next = NULL;
    n->element = addElement;
    
    if(head != NULL ){
        current = head;
        while(current->next != NULL){
            current = current->next;
            
        } // end while
        
        current ->next = n;
        
    } // end if
    
    else {
        head = n;
    }// end else
    
}// end add node

void Headnode::DeleteNode(int DelElement){
    // deletes and element from the linked list
    
    nodePtr delPtr = NULL;
    temp = head;
    current = head;
    while(current != NULL && current->element != DelElement){
        temp = current;
        current = current->next;
        
    }// end while
    
    if(current == NULL){
        cout << DelElement << " was not in the list" << endl;
        delete delPtr;
    }// end if
    
    else{
        //patches the hole that is in the list
        delPtr = current;
        current =  current->next;
        temp->next = current;
        if(delPtr == head){
            head = head -> next;
            temp = NULL;
            
        }
        
        // deletes the pointer to free the memory
        delete delPtr;
        
        cout << "The element " << DelElement << " was deleted" << endl;
    }// end else
} // end deleteNode

void Headnode::PrintNode(){
    // prints the current elements in the list
    
    
    current = head;
    while(current != NULL){
        cout << current->element << endl;
        current = current->next;
    } // end while
    
} //end print node


int main(int argc, const char * argv[]) {
    int c;
    Headnode List;
    
    cout << "Please enter 10 elements for the List " << endl;
    // adding elements to the list
    
    for(int i = 1; i <= 10; i++){
        cin >> c;
        List.AddNode(c);
        
    }
    // input for deleteting the elements of the list
    
    for(int x = 0; x <= 3; x++){
        cout << "Please enter values to remove " << endl;
        cin >> c;
        List.DeleteNode(c);
        cout << endl;
        // List.PrintNode();
        
    }
    
    
    cout << endl;
    cout << "The elements left in the list are: " << endl;
    List.PrintNode();
    
    return 0;
}
