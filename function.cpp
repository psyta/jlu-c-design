#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "function.h"


int deleteOneRecord(struct record_list * list, int register_id) { //删除挂号为xxx的记录
	struct record * temp;
	struct record * previous = NULL;
	temp = list->head;
	if (temp == NULL)return 0;
	while (temp!= NULL) {
		if (temp->pa.register_id == register_id) { //发现要删除的记录
			if (temp == list->head) {
				list->head = list->head->next;
			}
			else {
				previous->next = temp->next;
			}
			//加入内存释放
			return 1;
		}
		previous = temp;
		temp = temp->next;
	}
	return 0;
}

int modifyOneRecord(struct record_list * list, struct patient pa, struct doctor * doc, struct treatment tm, int register_id) {
	deleteOneRecord(list, register_id);
	addOneRecord(list, pa, doc, tm);
	return 1;
}

int searchByDepartment(struct record_list * list, const char department[20]) {
	struct record * temp;
	temp = list->head;
	while (temp != NULL) {
		if (strcmp(temp->doc->department, department) == 0) { 
			print_record(temp);
		}
		temp = temp->next;
	}
	return 1;
}

int searchByDoctor(struct record_list * list, int worker_id) {
	struct record * temp;
	temp = list->head;
	while (temp != NULL) {
		if (temp->doc->worker_id == worker_id) {
			print_record(temp);
		}
		temp = temp->next;
	}
	return 1;
}

int searchByPatient(struct record_list * list, const char name[20], int age) {
	struct record * temp;
	temp = list->head;
	while (temp != NULL) {
		if (strcmp(temp->pa.name, name) == 0 && temp->pa.age == age) {
			print_record(temp);
		}
		temp = temp->next;
	}
	return 1;
}

int printRecordDuringTime(struct record_list * list, int start_m, int start_d, int end_m, int end_d) {
	struct record * temp;
	temp = list->head;
	int time = temp->pa.register_id / 1000;
	int start_time = start_m * 100 + start_d;
	int end_time = end_m * 100 + end_d;
	while (temp != NULL) {
		if (start_time <= time and end_time >= time) {
			print_record(temp);
		}
		temp = temp->next;
	}
	return 1;
}