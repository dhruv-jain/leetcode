/*https://www.youtube.com/watch?v=oZuR2-AKkXE 

a b c d e f g 

1. Split the list into two parts from the middle. 
2. Prepare the two linked lists 
3. If the list is odd then ignore the middle. 
4. Reverse the second linked list. 
5. Compare the two linked lists. 
*/

 ListNode* p;
        ListNode* q;
        ListNode* start_second;
        while(1) {
            p = p->next->next;
            if(p->next==NULL) {
                start_second = q->next->next;
                break;
            }
            if(p==NULL) {
                start_second = q->next; 
                break;
            }
            q=q->next;
        }
        q->next=NULL;
