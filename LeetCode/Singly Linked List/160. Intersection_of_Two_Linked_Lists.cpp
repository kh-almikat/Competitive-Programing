/*problem link: https://leetcode.com/problems/intersection-of-two-linked-lists/description/ */


/*

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {

        for (ListNode* i = headA; i != NULL; i = i->next)
        {
            for (ListNode* j = headB; j != NULL; j = j->next)
            {
                if (i == j)
                {
                    return i;
                }
            }
        }

        return NULL;
    }
};

*/



/*           optimized way          */


class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        ListNode* tempA = headA;
        ListNode* tempB = headB;

        while(tempA != tempB)
        {
            if(tempA == NULL)
                tempA = headB;
            else
                tempA = tempA->next;


            if(tempB == NULL)
                tempB = headA;
            else
                tempB = tempB->next;

        }

        return tempA;
    }
};