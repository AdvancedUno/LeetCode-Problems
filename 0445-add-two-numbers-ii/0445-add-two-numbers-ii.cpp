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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode* first = l1;
        ListNode* second = l2;
        
 

        int firstNum =0;
        int secondNum = 0;
        
        vector<int>firstStore;
        vector<int>secondStore;
        
        while(first != nullptr){
            
            firstStore.push_back(first->val);
            
            first = first->next;
        }
        
        while(second != nullptr){
            
            secondStore.push_back(second->val);
            
            second = second->next;
        }
        
        int maxNum = max(firstStore.size(), secondStore.size());
        ListNode* temp = new ListNode();
        ListNode* move = temp;
        int leftover = 0;
        ListNode* tempX ;
        for(int i= 0; i < maxNum; i ++){
            tempX = new ListNode();

            if(secondStore.size() > i && firstStore.size() > i){
                int num = secondStore[secondStore.size()-i-1] +firstStore[firstStore.size()-i-1] + leftover;
                leftover = num /10;
                tempX->val = num%10;
                
            }
            
            else if(firstStore.size() > i){
                
                int num = firstStore[firstStore.size()-i-1] + leftover;
                leftover = num /10;
                tempX->val = num%10;
            }else{
                
                int num = secondStore[secondStore.size()-i-1] + leftover;
                leftover = num /10;
                tempX->val = num%10;
            }
           cout << tempX->val << endl;
            move -> next = tempX;
            move = tempX;

        }

        if(leftover >0){
            tempX = new ListNode();
            tempX->val =leftover;
            move -> next = tempX;
            move = tempX;
        }

        temp = reverseList(temp);


        
        return temp;
        
        
        
      
        
    }

    ListNode * Reverse(ListNode* current){
        if(current ->next == nullptr)return current;
        Reverse(current)->next = current;
        return current;
    }
    
  ListNode* reverseList(ListNode* head) {
    ListNode* prev = nullptr;
    ListNode* current = head->next;

    while (current != nullptr) {
        ListNode* nextTemp = current->next;
        current->next = prev;
        prev = current;
        current = nextTemp;
    }

    return prev;
}


    
    
};