/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        stack<int> arr;
        ListNode* temp=head;
        while(temp!= nullptr){
            if(arr.empty()) arr.push(temp->val);
            else if(temp->val!= arr.top()){
            arr.push(temp->val);
            }
            else{
                arr.pop();
            }
            temp=temp->next;
        }
        return arr.empty();
    }
};