/*problem link: https://leetcode.com/problems/palindrome-linked-list/description/ */


class Solution {
public:
    bool isPalindrome(ListNode* head) {
        
        vector<int> v, vv;

        ListNode* temp = head;
        while(temp != NULL)
        {
            v.push_back(temp->val);
            temp = temp->next;
        }

        vv = v;

        reverse(v.begin(), v.end());

        if(v == vv)
        return true;

        else
        return false;
    }
};