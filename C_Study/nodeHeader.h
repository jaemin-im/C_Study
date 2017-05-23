#pragma once
struct Node* InsertNode(struct Node* current, int data);
void DestroyNode(struct Node* destroy);
struct Node* CreateNode(int data);
void PrintNodeFrom(struct Node* from);
struct Node {
	int data;
	struct Node* nextNode;
};