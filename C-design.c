#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "function.h"

int main()
{
	struct patient p1;
	p1 = create_patient("xiaoming", 20, 20090201);
	printf("%s\n", p1.name);

	struct doctor *d1;
	struct doctor *d2;
	struct doctor_list dc_list;
	dc_list.head = NULL;

	int work[8] = {7, 1, 1, 1, 1, 1, 1, 1};
	d1 = create_doctor("xiaohong", "副主任医师", "牙科", 10001, work, &dc_list);
	d2 = create_doctor("xiaowang", "主任医师", "眼科", 10002, work, &dc_list);
	printf("%s\n", dc_list.head->level);
	printf("%s\n", find_doctor(10002, dc_list)->level);

	struct body_Check *c1;
	struct body_Check *c2;
	struct body_Check *temp_c;
	c1 = create_check(NULL, "验血", 3000);
	c2 = create_check(c1, "体温", 500);
	printf("%s\n", c1->next->name);
}
