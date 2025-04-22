#include <stdio.h>

// 초필살기 함수
int SS(int mp, int range) {
    if (mp >= 50 && range > 10) {
        printf("주인공 : 너는 점수를 획득했나?\n");
    }
    return 0;
}

int main() {
    // 주인공의 현재 상태
    int mp = 150;
    int range = 20;

    // 초필살기 함수 실행
    SS(mp, range);

    return 0;
}