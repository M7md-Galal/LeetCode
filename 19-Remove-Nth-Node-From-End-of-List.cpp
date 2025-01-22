#include <iostream>


class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* fast = dummy;
        ListNode* slow = dummy;
        
        for (int i = 0; i < n; i++) {
            fast = fast->next;
        }
        
        while (fast->next != nullptr) {
            fast = fast->next;
            slow = slow->next;
        }
        
        ListNode* toDelete = slow->next;
        slow->next = slow->next->next;
        delete toDelete;
        
        ListNode* newHead = dummy->next;
        delete dummy;
        return newHead;
    }
};


ListNode* createLinkedList(int arr[], int size) {
    if (size == 0) return nullptr;
    ListNode* head = new ListNode(arr[0]);
    ListNode* current = head;
    for (int i = 1; i < size; i++) {
        current->next = new ListNode(arr[i]);
        current = current->next;
    }
    return head;
}


void printLinkedList(ListNode* head) {
    while (head != nullptr) {
        std::cout << head->val << " ";
        head = head->next;
    }
    std::cout << std::endl;
}


void testSolution() {
    Solution solution;
    
    int arr1[] = {1, 2, 3, 4, 5};
    ListNode* head1 = createLinkedList(arr1, 5);
    head1 = solution.removeNthFromEnd(head1, 2);
    printLinkedList(head1); 
    
    int arr2[] = {1};
    ListNode* head2 = createLinkedList(arr2, 1);
    head2 = solution.removeNthFromEnd(head2, 1);
    printLinkedList(head2); 
    
    int arr3[] = {1, 2};
    ListNode* head3 = createLinkedList(arr3, 2);
    head3 = solution.removeNthFromEnd(head3, 1);
    printLinkedList(head3); 
}


