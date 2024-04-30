class Solution
{
    public:
    //Function to add two numbers represented by linked list.
   struct Node* reverse(Node*head){
        struct Node* curr=head;
        struct Node* prev=nullptr;
        while(curr!=nullptr){
            struct Node* forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
        }
        return prev;
    }
    
    struct Node* addTwoLists(struct Node* num1, struct Node* num2)
    {
        // code here
        num1 = reverse(num1);
        num2 = reverse(num2);
        Node* head = num1;
        Node* prev = nullptr;
        int carry =0;
        
        while(num1!= nullptr || num2!=nullptr || carry!=0){
            
            int sum = (num1? num1->data : 0)+ (num2 ? num2->data :0) +carry;
            carry = sum/10;
            sum%=10;
            
            if(num1){
                num1->data = sum;
                prev= num1;
                num1 =num1->next;
            }else{
                Node* newNode = new Node(sum);
                prev->next = newNode;
                prev = newNode;
            }
            
            if(num2){
                num2 = num2->next;
            }
        }
        
        head = reverse(head);
        if(head->data==0){
            Node* dummy = head;
            while(dummy ->data==0 && dummy->next != nullptr){
                dummy = dummy->next;
            }
            return dummy;
        }
        return head;
        
    }
};
