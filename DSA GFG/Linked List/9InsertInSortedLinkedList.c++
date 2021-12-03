/*
                        Insert In Sorted Linked List

Given a sorted (non decreasing) linked list of size n, you have to insert the given data at appropriate position in the linked list.

Example 1:

Input:
LinkedList: 1->2->3->4->5
data = 10
Output: 1 2 3 4 5 10
Example 2:

Input:
LinkedList: 2->5->7->8->99->100
data = 100
Output: 2 5 7 8 99 100 100
Your Task:
The task is to complete the function insertInSorted() which takes head reference and data to be inserted as the arguments. The function returns reference to the head node, which is then used to display the list.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(1).

Constraints:
1 <= number of nodes <= 103
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

Node * insertInSorted(Node * head, int data)
{
    //Your code here
    Node *temp = new Node(data);
    if(head == NULL)
     return temp;
    Node *curr =head;
    if(head->data > data){
        temp->next=head;
        return temp;
    }
    while(curr->next!=NULL && curr->next->data < data )
    {    curr=curr->next;}
      temp->next=curr->next;
      curr->next=temp;
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
        cin >> data;
        head = insertInSorted(head, data);
        displayList (head);
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends