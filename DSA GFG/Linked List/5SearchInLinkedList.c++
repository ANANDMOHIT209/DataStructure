
/*
                                    Search In Linked List

You are given a singly linked list of N elements, and also an element x. You need to find if x is present in the linked list or not.

Example 1:

Input:
LinkedList: 1->2->3->4->5
x = 4
Output: 1
Example 2:

Input:
LinkedList: 2->4->6->7->5->1->0
x = 10
Output: 0
Your Task:
Your task is to complete the given function searchLinkedList() which takes head reference and x as arguments and returns true if x is present else returns false. (1 is printed by the driver code if the returned value is true, otherwise 0)

Constraints:
1 <= n <= 100
1 <= x, value <= 103

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(1).
*/
// { Driver Code Starts
//Initial Template for C

#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
    
}*start;

void insert();
//struct Node *start;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
      start=NULL;
      insert();
      int x;
      scanf("%d",&x);
      printf("%d",searchLinkedList(start, x));
      printf("\n");
    }
    return 0;

}


 void insert()
 {
     int n,value,i;
     scanf("%d",&n);
     struct Node *temp;
     for(i=0;i<n;i++)
     {
         scanf("%d",&value);
         if(i==0)
         {
              start=(struct Node *) malloc( sizeof(struct Node) );
              start->data=value;
              start->next=NULL;
              temp=start;
              continue;
         }
         else
         {
             temp->next= (struct Node *) malloc( sizeof(struct Node) );
             temp=temp->next;
             temp->data=value;
             temp->next=NULL;
         }
     }
 }
// } Driver Code Ends

//User function Template for C

int searchLinkedList(struct Node *head, int x)
{
    while(head!=NULL){
        if(head->data == x)
            return 1;
        head=head->next;
    }
    return 0;
}