/*                       Display Circular Linked List


Given a circular linked list of size n, you need to display the linked list.
The tail of the linked list is connected to head.

Example 1:

Input:
LinkedList: 1->2->3->4
(the last and the first node are connected,
i.e. 4 -> 1)
Output: 1 2 3 4
Example 2:

Input:
LinkedList: 1->2
(the last and the first node are connected,
i.e. 2 -> 1)
Output: 1 2
Your Task:
The task is to complete the function displayList() which takes head reference as argument and returns the circular linked list as a list.

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



void makeCircular(Node * head)
{
    Node * temp=head;
    
    while(temp->next)
    {
        temp=temp->next;
    }
    temp->next=head;
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

vector<int> displayList(Node *head)
{
   //Your code here
   vector<int> v;
   Node *curr=head;
   
   do{
       v.push_back(curr->data);
       curr=curr->next;
   }while(curr!=head);
   return v;
}



// { Driver Code Starts.


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
	    
	    vector<int> vec = displayList(head);
	    for(int i = 0;i<vec.size();i++){
	        cout<<vec[i]<<" ";
	    }
	    
	    cout<<endl;
	}
	return 0;
}  // } Driver Code Ends