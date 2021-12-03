/*


                            Delete Tail of Linked List 

Given a linked list of size n, you have to delete the tail (last element) in the linked list.

Example 1:

Input:
LinkedList: 1->2
Output: 1
Example 2:

Input:
LinkedList: 2->5->7->8->99->100
Output: 2 5 7 8 99
Your Task:
The task is to complete the function deleteTail() which takes head reference and returns reference to the head node, which is then used to display the list. The printing is done automatically by the driver code.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(1).

Constraints:
2 <= number of nodes <= 103
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

Node * deleteTail(Node *head)
{
    //Your Code here
    Node *curr = head;
    if(head->next == NULL || head == NULL){
        return NULL;
    }
    while(curr->next->next!=NULL)
    {
        curr=curr->next;
    }
    curr->next = NULL;
    return head;
}


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
        head = deleteTail (head);
        displayList (head);
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends
