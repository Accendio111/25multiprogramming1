#include <stdio.h>

// PassOrFail �Լ� ����
int PassOrFail(int score) {
    if (score >= 50) {
        return 1;
    }
    else {
        return 0;
    }
}

int main() {
    int score;

    // ����ڷκ��� ���� ���� �Է� �ޱ�
    printf("���� ������ �Է��ϼ���: ");
    scanf_s("%d", & score);

    // PassOrFail �Լ� ȣ�� �� ��� ���
    int result = PassOrFail(score);

    if (result == 1) {
        printf("����� �����ϴ�!\n");
    }
    else {
        printf("����� �ֽ��ϴ�\n");
    }

    return 0;
}
