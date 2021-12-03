/*
                                Display Linked List

Given a singly linked list of integers. The task is to display the linked list.

Example 1:

Input:
LinkedList: 1->2->3->4->5
Output: 1 2 3 4 5
Constraints:
1 <= Number of nodes <= 100
0 <= value of nodes<= 103

Your Task:
Your task is to complete the given function displayList(), which takes head reference as argument and return the linkedlist as an array.

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

vector<int> displayList(Node *head);

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
        vector<int> list = displayList(head);
        for(int x : list){
            cout<<x<<" ";
        }
        cout << endl;
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

vector<int> displayList(Node *head)
{
    //Your code here
    vector<int> v;
    Node *curr=head;
    while(curr != NULL){
        v.push_back(curr->data);
        curr=curr->next;
    }
    return v;
}