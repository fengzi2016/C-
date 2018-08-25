/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };
class Solution {
private:
    ListNode* addTwoNumbers(ListNode* l1,ListNode* l2) {
        ListNode *tmp = NULL;
        ListNode *result = NULL;
        int carry = 0;
        while(l1!=NULL||l2!=NULL||carry!=0) {
            int sum = (l1==NULL?0:l1->val) + (l2==NULL?0:l2->val) + carry;
            carry = sum / 10;
            ListNode *node = new ListNode(sum%10);
            if(tmp==NULL) {
                tmp = node;
                result = tmp;
            } else {
                tmp -> next = node;
                tmp = tmp -> next;
            }
            l1=l1==NULL?NULL:l1->next;
            l2=l2==NULL?NULL:l2->next;
        }
        return result;
    }
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *tmp = NULL;
        ListNode *result = NULL;
        int carry = 0;
        while(l1!=NULL || l2 !=NULL || carry != 0) {
            int sum = (l1==NULL?0:l1->val) + (l2==NULL?0:l2->val) + carry;
            carry = sum / 10;
            ListNode *node = new ListNode(sum%10);
            if(tmp == NULL) {
                tmp = node;
                result = tmp;
            }else{
                tmp->next = node;
                tmp = tmp->next;
            }
            l1 = l1==NULL?NULL:l1->next;
            l2 = l2==NULL?NULL:l2->next;
            
        }
        return result;
    }
};