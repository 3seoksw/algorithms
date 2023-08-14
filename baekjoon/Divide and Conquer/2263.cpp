#include <iostream>
using namespace std;

/*
 * InOrder: Left>Root>Right
 * PreOrder: Root>Left>Right 
 * PostOrder: Left>Right>Root
*/

int inOrder[100001];
int postOrder[100001];
int idxArr[100001];

void preOrder(int inStart, int inEnd, int postStart, int postEnd)
{
	if (inStart > inEnd || postStart > postEnd)
		return;

	int root = postOrder[postEnd];
	int rootIdx = idxArr[root];
	int leftSize = rootIdx - inStart;
	int rightSize = inEnd - rootIdx;
	
	cout << inOrder[rootIdx] << ' ';

	preOrder(inStart, rootIdx - 1, postStart, postStart + leftSize - 1);
	preOrder(rootIdx + 1, inEnd, postStart + leftSize, postEnd - 1);
}

int main(void)
{
	int n;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> inOrder[i];
		idxArr[inOrder[i]] = i;
	}

	for (int i = 1; i <= n; i++)
		cin >> postOrder[i];

	preOrder(1, n, 1, n);
	cout << "\n";

	return 0;
}
