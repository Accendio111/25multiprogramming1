#include <stdio.h>

// ���ʻ�� �Լ�
int SS(int mp, int range) {
    if (mp >= 50 && range > 10) {
        printf("���ΰ� : �ʴ� ������ ȹ���߳�?\n");
    }
    return 0;
}

int main() {
    // ���ΰ��� ���� ����
    int mp = 150;
    int range = 20;

    // ���ʻ�� �Լ� ����
    SS(mp, range);

    return 0;
}