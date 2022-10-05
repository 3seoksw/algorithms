def preOrder(inStart, inEnd, postStart, postEnd):
    if (inStart > inEnd) or (postStart > postEnd):
        return
    root = postOrder[postEnd]
    print(root, end = " ")

    left = position[root] - inStart
    right = inEnd - position[root]

    preOrder(inStart, inStart + left - 1, postStart, postStart + left -1)
    preOrder(inEnd - right + 1, inEnd, postEnd - right, postEnd - 1)

n = int(input())
inOrder = list(map(int, input().split()))
postOrder = list(map(int, input().split()))

position = [0] * (n + 1)
for i in range(n):
    position[inOrder[i]] = i

preOrder(0, n - 1, 0, n - 1)
