/*
                                   Length of Circular Linked List 
                            

Given a circular linked list of size n, you need to find the length of the list (total number of nodes). The tail of the linked list is connected to head.

Example 1:

Input:
LinkedList: 1->2->3->4->5
(the first and the last node is connected,
i.e 5 --> 1)
Output: 5
Example 2:

Input:
LinkedList: 2->5->7->8->99->100
(the first and the last node is connected,
i.e 100 --> 2)
Output: 6
Your Task:
The task is to complete the function getLength() which takes head reference as argument and returns the total number of nodes in the list. The printing is done by the driver code.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(1).

Constraints:
1 <= number of nodes <= 1000
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

int getLength(Node * head)
{
    //Your code here
    int count=1;
    Node *curr=head;
    if(head==NULL) return 0;
    // if(head->next=head) return count;
    while(curr->next !=head)
        {
            count++;
            curr=curr->next;
        }
        return count;
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
	    
	    
	    cout<<getLength(head);
 
	    cout<<endl;
	}
	return 0;
}  // } Driver Code Ends