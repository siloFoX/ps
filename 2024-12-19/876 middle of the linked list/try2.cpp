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
    ListNode* middleNode(ListNode* head) {
        // node 가 하나일 때 예외처리
        if (head->next == nullptr) {
            return head;
        }

        // 한 칸씩 전진하는 slowNode
        // 두 칸씩 전진하는 fastNode 그런데 다음 칸 부터 시작한다.
        ListNode* slowNode = head;
        ListNode* fastNode = head->next;

        // fastNode 의 next 가 없거나 nextnext 가 없는 두 가지 상황이 있다.
        // 그럴 때마다 중간노드는 원하는 노드의 바로 앞이다.
        while(fastNode->next != nullptr && fastNode->next->next != nullptr) {
            slowNode = slowNode->next;
            fastNode = fastNode->next->next;
        }

        return slowNode->next;
    }
};