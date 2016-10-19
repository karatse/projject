#ifndef __LIST_NODE_H__
#define __LIST_NODE_H__

#include "defines.h"

struct list_node {
	size_t size; //current size of capacity used (N is the capacity)
	//size_t capacity = N;
	uint32_t neighbor[LIST_NODE_CAPACITY]; //the ids of the neighbor nodes //offset of NodeIndex line
	uint32_t edgeProperty[LIST_NODE_CAPACITY]; //property for each edge
	size_t nextListNode; //0 means no overflow
};

#endif
