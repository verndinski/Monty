void pall(stack **head) {
    if (*head == NULL) {
        return;
    }

    stack *current = *head;
    while (current != NULL) {
        printf("%d\n", current->n);
        current = current->next;
    }
}
