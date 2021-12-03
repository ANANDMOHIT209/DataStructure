/*
                            Sum The Nodes of Linked List

Given a singly linked list of size N. The task is to sum the elements of the linked list.

Example 1:

Input:
LinkedList: 1->2->3->4->5
Output: 15
Example 2:

Input:
LinkedList: 2->4->6->7->5->1->0
Output: 25
 

Your Task:
Your task is to complete the given function sumOfElements(), which takes head reference as argument and should return the sum of all the nodes in the Linked List. 

Constraints:
1 <= n <= 100
1 <= value <= 103

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(1).

*/

// { Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

int sumOfElements(struct Node* head);

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
        cout << sumOfElements(head) << endl;
    }
    return 0;
}// } Driver Code Ends

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

int sumOfElements(Node *head)
{
   //Your code here
   //Node *temp =head;
    int sum=0;
    while(head!=NULL){
        sum+=head->data;
        head=head->next;
    }
    return sum;
}
