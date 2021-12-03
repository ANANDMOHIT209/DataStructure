/*
                                Circular Linked List Head Insert

Given a circular linked list of size N, you need to insert an element data before the head and make it the new head. The tail of the linked list is connected to head.

Example 1:

Input:
LinkedList: 1->2->3->4
(the first and last node is connected,
i.e. 4 --> 1)
data = 10
Output: 10 1 2 3 4
Example 2:

Input:
LinkedList: 1 2
(the first and last node is connected,
i.e. 2 --> 1)
data = 5
Output: 5 1 2
Your Task:
The task is to complete the function insertInHead() which takes head reference and data as arguments and returns the head of the updated list. The printing is done by the driver code.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(1).
1 <= Number of nodes <= 1000
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

Node *newNode(int data)
{
    Node *temp=new Node(data);
    
    return temp;
}


Node *addNode(Node *head, int data)
{
    if(head==NULL)
    head=newNode(data);
    else
    head->next=addNode(head->next,data);
    
    return head;
}


void displayList(Node *head)
{
    Node *temp=head;
    while(temp->next!=head)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<temp->data<<" ";
}



 // } Driver Code Ends


 


 Node *insertInHead(Node * head, int data)
{
    //Your code here
    Node *temp = new Node(data);
        if(head==NULL){
            temp->next=temp;
            return temp;
        }
        else{
            temp->next=head->next;
            head->next =temp;
            int t= head->data;
            head->data=temp->data;
            temp->data=t;
            return head;
        }
}


// { Driver Code Starts.


void makeCircular(Node * head)
{
    Node * temp=head;
    
    while(temp->next)
    {
        temp=temp->next;
    }
    temp->next=head;
}

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    Node *head=NULL, *tail = NULL;
	    int x;
	    cin >> x;
	    head = new Node(x);
	    tail = head;
	    for(int i=0;i<n-1;i++)
	    {
	        cin>>x;
	        tail -> next = new Node(x);
	        tail = tail -> next;
	    }
	    
	    int data;
	    cin>>data;
	    
	    makeCircular(head);
	    
	    head=insertInHead(head,data);
	    
	    displayList(head);
	    
	    cout<<endl;
	}
	return 0;
}  // } Driver Code Ends