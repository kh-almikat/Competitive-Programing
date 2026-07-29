/*problem link: https://leetcode.com/problems/merge-nodes-in-between-zeros/description/ */


class Solution {

    void insert_at_tail(ListNode* &head, ListNode* &tail, int val)
    {
        ListNode* newnode = new ListNode (val);

        if(head == NULL)
        {
            head = newnode;
            tail = newnode;
            return;
        }

        tail->next = newnode;
        tail = newnode;
    }
public:
    ListNode* mergeNodes(ListNode* head) {
        
        ListNode* headB = NULL;
        ListNode* tailB = NULL;

        head = head->next;
        int sum = 0;

        while (head != NULL)
        {
            if(head->val == 0)
            {
                insert_at_tail(headB, tailB, sum);
                sum = 0;
            }
            else
                sum = sum + head->val;

            head = head->next;
        }

        return headB;
    }
};