#include <stdio.h>
#include <stdlib.h>

int memoryallocate_1(void) {
	int student;
	int i, input;
	int *score;
	int sum = 0;

	printf("�л��� ����? : ");
	scanf("%d", &student);

	score = (int*)malloc(student * sizeof(int));

	for (i = 0; i < student; i++) {
		printf("�л� %d�� ���� : ", i);
		scanf("%d", &input);
		score[i] = input;
	}
	for (i = 0; i < student; i++) {
		sum += score[i];
	}
	printf("��ü �л� ��� ���� : %d\n", sum / student);
	free(score);
	return 0;
}