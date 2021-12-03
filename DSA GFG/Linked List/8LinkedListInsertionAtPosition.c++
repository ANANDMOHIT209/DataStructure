/*
                        Linked List Insertion At Position

You are given a linked list of size n. You need to insert an element data just after the given position pos.
The position of first element is 1. If the given position is greater than n, then don't insert anything as it is not possible.

Example 1:

Input:
LinkedList: 1->2->3->4->5
position = 6, data = 10
Output: 1 2 3 4 5
Explanation: The given linked list is
1 2 3 4 5. The data 10 is to be inserted
after position 6. However, the linked
list only contains 5 elements so we
cannot insert the data.
Example 2:

Input:
LinkedList: 2->4->6->7->5->1->0
position = 7, data = 99
Output: 2 4 6 7 5 1 0 99
Your Task:
This is a function problem. You only need to complete the function insertAtPosition that takes head, pos, and data as parameters.  The printing is done automatically by the driver code.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(1).

Constraints:
1 <= n, pos <= 103

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
//Complete this function
void insertAtPosition(Node *head, int pos, int data)
{
    //Your code here
    Node *temp =new Node(data);
    if(pos==0)
    {
        temp->next=head;
        temp=head;
        // return ;
    }
       int count =0;
    // if(head==NULL)
    //     return;
    struct Node *curr;
    for(curr=head ; curr!=NULL ; curr=curr->next)
    {    count++;}
    
    if(pos>count)
        return;
    
    curr = head;
    for(int i=1;i<pos;i++){
        curr=curr->next;
    }
    
    temp->next=curr->next;
    curr->next=temp;
    
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
        int pos; cin >> pos;
        int d; cin >> d; 
        insertAtPosition(head, pos, d);
        displayList (head);
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends