#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

int empty(struct queue_t * q) {
        if (q == NULL) return 1;
	return (q->size == 0);
}

void enqueue(struct queue_t * q, struct pcb_t * proc) {
        /* TODO: put a new process to queue [q] */
	if(q->size >= MAX_QUEUE_SIZE){// neu queue da day
		return;
	}
	q->proc[q->size] = proc;
	q->size++;
}

struct pcb_t * dequeue(struct queue_t * q) {
        /* TODO: return a pcb whose prioprity is the highest
         * in the queue [q] and remember to remove it from q
         * */
	if(!empty(q)){
//gia su pcb dau tien co do uu tien cao nhat
		struct pcb_t* maxproc = q->proc[0];
		if(q->size == 1){//neu chi co mot phan tu
			q->proc[0] = NULL;
			q->size--;
			return maxproc;
		}
		for(int i = 0; i < q->size - 1; i++){
			q->proc[i] = q->proc[i+1];//di chuyen len 1 vi tri
		}
		q->proc[q->size-1] = NULL;
		q->size--;
		return maxproc;
	}
	return NULL;
}

