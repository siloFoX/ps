void deleteLinkedList (LinkedNode* head) {
    // 현재 값을 저장하는 current 노드를 만든다.
    LinkedNode* current = head;

    // tmp 노드를 만들어서 current 노드를 저장하고
    // current 노드를 다음 노드로 바꾼다.
    // 그리고 tmp 노드를 삭제한다.
    while(current != nullptr) {
        LinkedNode* tmp = current;
        current = current->next;
        delete tmp;
    }
}