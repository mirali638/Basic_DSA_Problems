class ListNode {
    int val;
    ListNode next;
    ListNode(int x) { val = x; }
}

class removeDuplicates {
    public ListNode deleteDuplicates(ListNode head) {
        if (head == null) {
            return null;
        }
        ListNode current = head;
        while (current != null && current.next != null) {
            if (current.val == current.next.val) {
                current.next = current.next.next;
            } else {
                current = current.next;
            }
        }
        return head;
    }

    public void printList(ListNode head) {
        ListNode current = head;
        while (current != null) {
            System.out.print(current.val + " ");
            current = current.next;
        }
        System.out.println();
    }

    public static void main(String[] args) {
        removeDuplicates solution = new removeDuplicates();

        ListNode head = new ListNode(1);
        head.next = new ListNode(1);
        head.next.next = new ListNode(2);
        head.next.next.next = new ListNode(3);
        head.next.next.next.next = new ListNode(3);
        System.out.print("Original List: ");
        solution.printList(head);

        ListNode result = solution.deleteDuplicates(head);

        System.out.print("List after removing duplicates: ");
        solution.printList(result);
    }
}
