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
        // 한 칸씩 전진하는 slowNode
        // 두 칸씩 전진하는 fastNode
        // 이번에는 같은 위치에서 시작 fastNode 는 slowNode 가 간 거리 * 2 - 1 만큼 간다.
        ListNode* slowNode = head;
        ListNode* fastNode = head;

        // fastNode 가 nullptr 을 가질 수 있지만
        // nullptr->next 는 없는 값이므로 조건을 다음과 같이 설정
        while(fastNode != nullptr && fastNode->next != nullptr) {
            slowNode = slowNode->next;
            fastNode = fastNode->next->next;
        }

        return slowNode;
    }
};