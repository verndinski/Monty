void push(stack **head, char *number) {
    int num = atoi(number);
    if (num == 0 && strcmp(number, "0") != 0) {
        printf("L%d: usage: push integer\n", line_number);
        exit(EXIT_FAILURE);
    }

    stack *new_node = (stack *)malloc(sizeof(stack));
    new_node->n = num;
    new_node->next = *head;

    *head = new_node;
    args.stack_length++;
}
