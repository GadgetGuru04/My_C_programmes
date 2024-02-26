#include <stdio.h>
#include <string.h>

struct cricket {
    char player[50];
    char team[50];
    float avgbat;
};

int main() {
    struct cricket player[10];

    for (int i = 0; i < 10; ++i) {
        printf("Enter details for player %d:\n", i + 1);

        printf("Player Name: ");
        scanf("%s", player[i].player);

        printf("Team Name: ");
        scanf("%s", player[i].team);

        printf("Batting Average: ");
        scanf("%f", &player[i].avgbat);
    }

    printf("\nTeam-wise list of players with their batting averages:\n");

    for (int i = 0; i < 10; ++i) {
        printf("\n%s:\n", player[i].team);

        for (int j = 0; j < 10; ++j) {
            if (strcmp(player[i].team, player[j].team) == 0) {
                printf("- %s (%.2f)\n", player[j].player, player[j].avgbat);
            }
        }
    }

    return 0;
}
