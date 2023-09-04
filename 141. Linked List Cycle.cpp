class Solution {
public:
    bool hasCycle(ListNode *head) {
         //if there is no node in the list, then simply return false
        if(head == NULL)return false;
        //intially both fast and slow reference(pointers) will be at head of linked list
        ListNode *slow = head, *fast = head;
        while(fast != NULL && fast->next != NULL){
            fast = fast->next->next;
            slow = slow->next;
            //after they have moved a certain number of times if there exists a case where both them are pointing at the same node in the linked list, then a cycle is existing, otherwise if the loop terminates then return false
            if(fast == slow)return true;
        }
        return false;
    }
};
