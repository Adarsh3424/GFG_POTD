class Solution{
    public:
    Node* deleteMid(Node* head)
    {
        // Your Code Here
        int count=0;
        Node* start = head;
        while(start != NULL)
        {
            start = start->next;
            count++;
        }
        if(count==1)
            return NULL;
        start = head;
        for(int i=0; i<count/2 - 1; i++)
        {
            start = start->next;
        }
        Node* temp = start->next;
        start->next = temp->next;
        free(temp);
        return head;
    }
};
