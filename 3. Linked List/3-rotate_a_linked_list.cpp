// Rotate a Linked List

// LINK:- https://practice.geeksforgeeks.org/problems/rotate-a-linked-list/1

class Solution
{
    public:
    //Function to rotate a linked list.
    Node* rotate(Node* head, int k)
    {
        // Your code here
        k--;
        Node* temp = head;
        while(k--){temp=temp->next;}
        if(temp->next==NULL){return head;}
        
        Node* tail = temp;
        Node* newHead = temp->next;
        
        while(temp->next!=NULL){temp = temp->next;}
        temp->next = head;
        tail->next = NULL;
        
        return newHead;
    }
};