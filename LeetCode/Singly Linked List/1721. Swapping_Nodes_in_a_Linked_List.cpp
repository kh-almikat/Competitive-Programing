/*problem link: https://leetcode.com/problems/swapping-nodes-in-a-linked-list/description/ */


class Solution {
public:

    int size(ListNode* head)
    {
        int cnt = 0;
        ListNode* temp = head;

        while(temp != NULL)
        {
            cnt++;
            temp = temp->next;
        }

        return cnt;
    }

    ListNode* swapNodes(ListNode* head, int k) {

        int sz = size(head);

        ListNode* tempA = head;
        for(int i = 1; i < k; i++)
        {
            tempA = tempA->next;
        }
        ListNode* left = tempA;


        ListNode* tempB = head;
        for(int i = 1; i < sz - k + 1; i++)
        {
            tempB = tempB->next;
        }
        ListNode* right = tempB;

        swap(left->val, right->val);

        return head;
    }
};