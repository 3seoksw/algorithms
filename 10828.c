#include <stdio.h>
#include <string.h>

typedef struct {
    int data[10001];
    int curIdx;
} Stack;

void init(Stack* stack)
{
    stack->curIdx = -1;
}

int empty(Stack* stack)
{
    if (stack->curIdx == -1) {
        printf("1\n");
        return 1;
    }
    else {
        printf("0\n");
        return 0;
    }
}

int push(Stack* stack, int n)
{
    stack->data[stack->curIdx] = n;
    stack->curIdx++;
    return stack->data[stack->curIdx - 1];
}

int pop(Stack* stack)
{
    if (empty(stack)) {
        printf("-1\n");
        return -1;
    }
    stack->curIdx--;
    int popped = stack->data[stack->curIdx];
    printf("%d\n", popped);
    return popped;
}

int size(Stack* stack)
{
    printf("%d\n", stack->curIdx);
    return stack->curIdx;
}

int top(Stack* stack)
{
    if (empty(stack)) {
        printf("-1\n");
        return -1;
    }
    else {
        printf("%d\n", stack->data[stack->curIdx - 1]);
        return 1;
    }
}

int main(void)
{
    Stack stack;
    init(&stack);
    int N;
    scanf("%d", &N);
    char* opt;
    for (int i = 0; i < N; i++) {
        scanf("%s", opt);
        if (strcmp(opt, "push")) {
            int num;
            scanf("%d", &num);
            push(&stack, num);
        }
        else if (strcmp(opt, "pop")) {
            pop(&stack);
        }
        else if (strcmp(opt, "size")) {
            size(&stack);
        }
        else if (strcmp(opt, "empty")) {
            empty(&stack);
        }
        else if (strcmp(opt, "top")) {
            top(&stack);
        }
    }
    return 0;
}
