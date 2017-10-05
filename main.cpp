//
//  main.cpp
//  Linked_List_Doody

#include <iostream>
#include "Stack.h"
#include "Linked_Lists.hpp"

using namespace std;


int main(int argc, const char * argv[]) {
    int c;
    int x;
    Headnode List;
    Stacks firstStack(5);
    
    
    cout << "Please enter 5 elements for the List " << endl;
    // adding elements to the list
    
    for(int i = 1; i <= 5; i++){
        cin >> c;
        List.AddNode(c);
        firstStack.push(c);
    }
        // input for deleteting the elements of the list
    
    cout << endl;
    cout << "The elements that were popped: " << endl;
    
    for(x = 1; x <= 3; x++){
        cout << "Please enter values to remove " << endl;
        cin >> c;
        List.DeleteNode(c);
    }
    
            cout << "These element were popped: " << endl;
    for(int y = 1; y<=3; y++){
        
            cout << firstStack.top() << endl;
            firstStack.pop();
        
            cout << endl;
    }
            cout << endl;
    
    cout << "Remainder in list: " << endl;
    List.PrintNode();
    cout << endl;
    
    firstStack.isFullStack();


    return 0;
}
