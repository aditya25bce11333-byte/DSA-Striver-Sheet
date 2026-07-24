/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        // Storing a pointer to its next node so we can freeup it's memory.
        ListNode* nextNode = node->next;
        // Copy the value from the next node to the current node.
        node->val = nextNode->val;
        // bypass the next node.
        node->next = nextNode->next;
        // Clean up the memory. (Highly sought practice in C++).
        delete nextNode;
    }
};