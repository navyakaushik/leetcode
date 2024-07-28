/**
 * Definition for singly-linked list.
 * class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) {
 *         val = x;
 *         next = null;
 *     }
 * }
 */
public class Solution {
    public int lengthCycle(ListNode head){
        ListNode fast = head;
        ListNode slow = head;

        while( fast != null && fast.next != null){
            fast = fast.next.next; //Move fats pointer 2 steps at a time
            slow = slow.next; //Move slow pointer one step at a time
            if(fast == slow){
                //cycle detected
                //calculate the length
                ListNode temp = slow; //use a temporary node to traverse the cycle
                int length = 0;
                do{
                    temp = temp.next; // move to the next node in the cycle
                    length ++; //increment the cycle length counter
                } while (temp != slow); //stop when we have looped back to the starting node
                return length; //return the length of the cycle
            }
        }
        return 0; //no cycle found
    }

    //detect the start of the cycle
    public ListNode detectCycle(ListNode head){
        int length = 0;

        ListNode fast = head;
        ListNode slow = head;

        while(fast != null && fast.next != null){
            fast = fast.next.next;
            slow = slow.next;
            if( fast == slow){
                length = lengthCycle(slow);
                break;
            }
        }

        if(length == 0){
            return null;
        }
        // find the start node
        ListNode f = head;
        ListNode s = head;

        while(length > 0){
            s = s.next;
            length--;
        }
        //keep moving both forward and they will meet at cycle start
        while ( f != s){
            f = f.next;
            s = s.next;
        }
        return s;
    }
}
