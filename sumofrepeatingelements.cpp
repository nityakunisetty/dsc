#include <iostream>

struct Node {
    int data;
    Node* next;
};

int sumDuplicates(Node* head) {
    int sum = 0;
    Node* curr = head;
    while (curr) {
        Node* checker = head;
        bool isDuplicate = false;
        while (checker != curr) {
            if (checker->data == curr->data) {
                isDuplicate = true;
                break;
            }
            checker = checker->next;
        }
        if (isDuplicate) {
            sum += curr->data;
        }
        curr = curr->next;
    }
    return sum;
}

int main() {
    Node n5 = {1, NULL};
    Node n4 = {3, &n5};
    Node n3 = {2, &n4};
    Node n2 = {2, &n3};
    Node n1 = {1, &n2};

    int result = sumDuplicates(&n1);
    
    std::cout << "Sum of duplicate elements: " << result;

    return 0;
}
