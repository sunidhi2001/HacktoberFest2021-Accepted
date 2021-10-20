#include<bits/stdc++.h>
using namespace std;
class ListNode {
    public:
        int val;
        ListNode *next;
        ListNode(int val) {
            this->val = val;
            this->next = NULL;
        }
};

ListNode *insertNode(ListNode* head, int val) {

    if(head == NULL) {
        return new ListNode(val);
    }
    head->next = new ListNode(val);
    return head->next;
}

ListNode *merge(ListNode *head1, ListNode *head2) {

    //a dummy node added as first node but we will return next of that node as head of the final list.
    ListNode *temp = new ListNode(0);
    ListNode *newHead = temp;

    while(head1 and head2) {

        if(head1->val < head2->val) {
            temp->next = head1;
            head1 = head1->next;
        }
        else {
            temp->next = head2;
            head2 = head2->next;
        }
        temp = temp->next;
    }
    if(head1) {
        temp->next = head1;
        //head1 = head1
    }
    if(head2) {
        temp->next = head2;
    }
    return newHead->next;
}

ListNode *mergeSort(ListNode *head) {

    if(!head or !head->next) return head;
    
    //divide the list into two halfs
    ListNode *slow = head,
                *fast = head,
                *prev = head;

    while(fast and fast->next) {
        prev = slow;
        slow = slow->next;
        fast = fast->next->next;
    }
    prev->next = NULL;
    
    //do it recursively for all the halfs.
    ListNode *first = mergeSort(head);
    ListNode *second = mergeSort(slow);

    //finally start merging them at returning time.
    return merge(first,second);
}

void printNode(ListNode *head) {
    
    while(head) {
        cout<<head->val<<" ";
        head = head -> next;
    }
}

int main() {

    srand(time(NULL));
    ListNode *head = NULL;
    ListNode *curr = NULL;
    int lowest = 0;
    int range = 100;
    for(int i = 0; i< 20 ; i++) {
        curr = insertNode(curr, lowest + rand() % range );
        if(!head) head = curr;
    }
    cout<<"Before sorting\n";
    printNode(head);
    
    head = mergeSort(head);
    
    cout<<"\nAfter sorting\n";
    printNode(head);

}