#include "Solutions.h"
ListNode* Solutions::mergeKLists(vector<ListNode*>& lists)
{
    // Custom comparator function for the priority queue
    auto cmp = [](ListNode* a, ListNode* b)
    {
        return a->val > b->val; // Comparison is done based on the node values
    };

    // Priority queue to store the smallest element of each linked list
    std::priority_queue<ListNode*, std::vector<ListNode*>, decltype(cmp)> pq(cmp);

    // Insert the first node of each linked list into the priority queue
    for (ListNode* node : lists)
    {
        if (node != NULL)
        {
            pq.push(node);
        }
    }

    // Dummy node to start the merged linked list
    ListNode* dummy = new ListNode(0);
    ListNode* curr = dummy;

    // Loop until the priority queue is empty
    while (!pq.empty())
    {
        // Get the smallest element from the priority queue
        ListNode* smallest = pq.top();
        pq.pop();

        // Add the smallest element to the merged linked list
        curr->next = smallest;
        curr = curr->next;

        // Add the next node of the linked list containing the smallest element
        if (smallest->next != NULL)
        {
            pq.push(smallest->next);
        }
    }

    return dummy->next; // Return the merged linked list
}