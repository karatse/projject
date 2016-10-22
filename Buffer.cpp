#include "Buffer.h"

Buffer::Buffer() {
	size = 0;
	capacity = BUFFER_CAPACITY;
	table = (list_node*) malloc(capacity*sizeof(list_node));
	printf("Buffer::Buffer\n");
}

Buffer::~Buffer() {
	free(table);
	printf("Buffer::~Buffer\n");
}

list_node& operator[](size_t index) {
	return table[index];
}

size_t Buffer::allocNewNode(size_t ptr) {
	printf("Buffer::allocNewNode\n");
	return 0;
}

list_node* Buffer::getListNode(size_t) {
	printf("Buffer::getListNode\n");
	return NULL;
}
