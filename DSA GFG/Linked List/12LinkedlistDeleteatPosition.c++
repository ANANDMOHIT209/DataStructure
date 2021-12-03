/*
                            Linked List Delete at Position

Given a linked list of size n, you have to delete the node at position pos of the linked list and return the new head. The position of initial node is 1.

Example 1:

Input:
LinkedList: 1->2->3->4->5
pos = 4
Output: 1 2 3 5
Example 2:

Input:
LinkedList: 2->5->7->8->99->100
pos = 6
Output: 2 5 7 8 99
Your Task:
The task is to complete the function deleteAtPosition() which takes head reference and pos as argument and returns reference to the new head node, which is then used to display the list. The printing is done automatically by the driver code.

Expected Time Complexity: O(pos).
Expected Auxiliary Space: O(1).

Constraints:
2 <= number of nodes <= 103
1 <= pos <= n
*/

// { Driver Code Starts
//Initial Template for C++


#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node * next;
    Node (int x)
    {
        data=x;
        next=NULL;
    }
        
};


void displayList(Node *head)
{
    while(head)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
}



 // } Driver Code Ends

 //User function Template for C++


/*
struct Node
{
    int data;
    Node * next;
    Node (int x)
    {
        data=x;
        next=NULL;
    }
        
};
*/

Node * deleteAtPosition(Node *head,int pos)
{
    //Your code here
    Node *curr=head;
    if(head==NULL)
        return NULL;
    if(pos==1){
        curr=head->next;
        return curr;
    }
    for(int i=1;i<pos-1;i++){
        curr=curr->next;
    }
    // cout<<curr->data;
    Node *temp=curr->next;
    curr->next =temp->next;
    // delete curr->next;
    return head;
}

 // { Driver Code Starts.


int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;

        int data;
        cin>>data;
        struct Node *head = new Node(data);
        struct Node *tail = head;
        for (int i = 0; i < n-1; ++i)
        {
            cin>>data;
            tail->next = new Node(data);
            tail = tail->next;
        }
        int pos;
	    cin>>pos;
	    head=deleteAtPosition(head,pos);
    	displayList(head);
	    cout<<endl;
    }
    return 0;
}  // } Driver Code Ends