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
        int count = 0;
        ListNode* current = head;

        // count 는 linked list 의 노드 갯수를 가져온다.
        while(current != nullptr) {
            count++;
            current = current->next;
        }

        // current 를 초기화
        current = head;

        // i 는 count 노드의 중간 에서 멈추는데
        // 중간 중에서 앞에 위치한다.
        // 5면 2, 6이면 3 이렇게 중간 앞.
        // idx 가 0부터 시작하므로 그대로 넣어도 된다.
        for (int i = 0; i < count/2; i++) {
            current = current->next;
        }

        return current;
    }
};