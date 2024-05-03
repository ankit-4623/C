#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
    return (*(int *)b - *(int *)a);
}

int main() {
    int T; 
    scanf("%d", &T);

    while (T--) {
        int N, M; 
        scanf("%d %d", &N, &M);

        int *batsmen = (int *)malloc(N * sizeof(int));
        int *bowlers = (int *)malloc(M * sizeof(int));

        for (int i = 0; i < N; i++) {
            scanf("%d", &batsmen[i]);
        }

        for (int i = 0; i < M; i++) {
            scanf("%d", &bowlers[i]);
        }

        if (N < 4 || M < 4) {
            printf("-1\n");
            free(batsmen);
            free(bowlers);
            continue;
        }

        qsort(batsmen, N, sizeof(int), cmp);
        qsort(bowlers, M, sizeof(int), cmp);

        int maxSkill = -1;

        for (int batsmenCount = 4; batsmenCount <= 7; batsmenCount++) {
            int bowlersCount = 11 - batsmenCount;

            if (bowlersCount < 4) {
                continue; 
            }

            if (bowlersCount > M) {
                continue; 
            }

            if (batsmenCount > N) {
                continue; 
            }

            int skillSum = 0;

            for (int i = 0; i < batsmenCount; i++) {
                skillSum += batsmen[i];
            }

            for (int i = 0; i < bowlersCount; i++) {
                skillSum += bowlers[i];
            }

            if (skillSum > maxSkill) {
                maxSkill = skillSum; 
            }
        }

        printf("%d\n", maxSkill); 

        free(batsmen);
        free(bowlers);
    }

    return 0;
}
