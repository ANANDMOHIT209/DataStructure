/*
                                        Delete Tail of Circular Linked List

Given a circular linked list of size n, you have to delete the tail (last element) in the linked list.
In a circular linked list, the tail is connect to the head using the next pointer.

Example 1:

Input:
LinkedList: 1->2
(the first and last node are connected,
i.e. 2 --> 1)
Output: 1
Example 2:

Input:
LinkedList: 2->5->7->8->99->100
(the first and last node are connected,
i.e. 100 --> 2)
Output: 2 5 7 8 99
Your Task:
The task is to complete the function deleteTail() which takes head reference  and returns reference to the head node, which is then used to display the list. The printing is done automatically by the driver code.

Expected Time Complexity: O(n).
Expected Auxiliary Space: O(1).

Constraints:
2 <= number of nodes <= 103

*/

// { Driver Code Starts
//Initial Template for C++


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


//Back-end complete function Template for C++

int getLength(Node * head)
{
    Node *temp=head;
    
    int count=0;
    while(temp->next!=head)
    {
        count++;
        temp=temp->next;
    }
    return count+1;
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
Node * deleteTail(Node * head)
{
    //Your code here
    if(head==NULL || head->next==head)
        return NULL;
    Node *curr=head;
    
    while(curr->next->next!=head)
    {
      curr=curr->next;  
    }
    curr->next=head;
    return head;

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
  

	    makeCircular(head);
	    
	    head=deleteTail(head);
	    
	    displayList(head);
	    
	    cout<<endl;
	}
	return 0;
}  // } Driver Code Ends