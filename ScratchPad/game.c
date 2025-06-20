#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <windows.h>

#define MAP_HEIGHT 20
#define MAP_WIDTH 30

#define WALL 35
#define GOAL 14
#define PLAYER 2
#define EMPT ' '

typedef struct {
    int x, y;
} Point;

const char* wallHitMessages[] = {
    "Oops! You walked into a wall. Try again!",
    "You can't go that way. It's a wall!",
    "Don't be a wall-hugger! Choose a different path."
};

const char* winningMessages[] = {
    "Congratulations! You found the exit. You're a maze master!",
    "You did it! You've conquered the maze like a champ!",
    "You've cracked the code! Now go conquer the real world."
};

void clearConsole() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

void printMap(char map[MAP_HEIGHT][MAP_WIDTH], int steps) {
    clearConsole();

    printf("############################################################\n");
    printf("#                THE A-MAZING MAZE RUNNER                  #\n");
    printf("#       Developers Extraordinaire: JIMIL & HARSHRAJ        #\n");
    printf("#                      From %c to %c .                       #\n", 2, 14);
    printf("############################################################\n");

    for (int i = 0; i < MAP_HEIGHT; i++) {
        for (int j = 0; j < MAP_WIDTH; j++) {
            printf("%c ", map[i][j]);
        }
        printf("\n");
    }

    printf("Steps taken: %d\n", steps);
}

bool isValid(int x, int y) {
    return x >= 0 && x < MAP_WIDTH && y >= 0 && y < MAP_HEIGHT;
}

void displayMessage(const char* title, const char* message) {
    MessageBox(NULL, message, title, MB_OK | MB_ICONINFORMATION);
}

// Function to write game information to a text file
void writeGameInfoToFile(char gameName, char developers, char map[MAP_HEIGHT][MAP_WIDTH], int steps) {
    FILE* file = fopen("game_info.txt", "w");
    if (file == NULL) {
        printf("Error opening the file for writing.\n");
        return;
    }

    fprintf(file, "Game Name: %s\n", gameName);
    fprintf(file, "%s\n", developers);

    fprintf(file, "Maze:\n");
    for (int i = 0; i < MAP_HEIGHT; i++) {
        for (int j = 0; j < MAP_WIDTH; j++) {
            fprintf(file, "%c", map[i][j]);
        }
        fprintf(file, "\n");
    }

    fprintf(file, "Steps Taken: %d\n", steps);

    fclose(file);
}

int main() {
    char gameName[] = "The A-MAZING Maze Runner";
    char developers[] = "Developers Extraordinaire: JIMIL & HARSHRAJ";

    char map[MAP_HEIGHT][MAP_WIDTH] = {
          {WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL},
        {WALL, EMPT, EMPT, EMPT, EMPT, EMPT, EMPT, EMPT, WALL, EMPT, EMPT, EMPT, EMPT, EMPT, EMPT, EMPT, EMPT, EMPT, EMPT, WALL, EMPT, EMPT, EMPT, EMPT, EMPT, EMPT, EMPT, EMPT, EMPT, WALL},
        {WALL, EMPT, EMPT, EMPT, EMPT, EMPT, WALL, EMPT, WALL, EMPT, EMPT, EMPT, EMPT, EMPT, WALL, WALL, WALL, WALL, EMPT, WALL, EMPT, WALL, WALL, EMPT, EMPT, WALL, WALL, WALL, EMPT, WALL},
        {WALL, EMPT, WALL, WALL, WALL, WALL, WALL, EMPT, WALL, WALL, WALL, WALL, EMPT, WALL, WALL, EMPT, EMPT, EMPT, WALL, WALL, EMPT, WALL, EMPT, WALL, EMPT, EMPT, EMPT, WALL, WALL, WALL},
        {WALL, EMPT, WALL, WALL, EMPT, EMPT, WALL, EMPT, EMPT, EMPT, EMPT, EMPT, EMPT, EMPT, WALL, EMPT, WALL, EMPT, EMPT, WALL, EMPT, WALL, EMPT, WALL, WALL, WALL, EMPT, EMPT, EMPT, WALL},
        {WALL, EMPT, WALL, EMPT, EMPT, EMPT, WALL, EMPT, WALL, WALL, WALL, EMPT, EMPT, EMPT, WALL, EMPT, WALL, WALL, EMPT, WALL, EMPT, WALL, EMPT, EMPT, EMPT, EMPT, EMPT, EMPT, EMPT, WALL},
        {WALL, EMPT, WALL, WALL, WALL, EMPT, WALL, EMPT, WALL, EMPT, WALL, WALL, WALL, EMPT, EMPT, EMPT, EMPT, WALL, EMPT, WALL, EMPT, WALL, EMPT, WALL, WALL, EMPT, EMPT, WALL, EMPT, WALL},
        {WALL, EMPT, EMPT, EMPT, EMPT, EMPT, WALL, EMPT, WALL, EMPT, EMPT, EMPT, WALL, EMPT, WALL, WALL, WALL, WALL, WALL, WALL, EMPT, WALL, EMPT, EMPT, WALL, EMPT, EMPT, WALL, EMPT, WALL},
        {WALL, EMPT, EMPT, EMPT, EMPT, EMPT, WALL, EMPT, EMPT, EMPT, EMPT, EMPT, WALL, EMPT, EMPT, EMPT, EMPT, EMPT, EMPT, EMPT, EMPT, WALL, EMPT, EMPT, WALL, EMPT, EMPT, WALL, EMPT, GOAL},
        {WALL, EMPT, WALL, WALL, WALL, EMPT, WALL, WALL, WALL, WALL, WALL, WALL, WALL, EMPT, WALL, WALL, WALL, EMPT, WALL, WALL, WALL, WALL, EMPT, EMPT, WALL, WALL, EMPT, WALL, EMPT, WALL},
        {WALL, EMPT, EMPT, EMPT, EMPT, EMPT, EMPT, EMPT, EMPT, EMPT, EMPT, EMPT, EMPT, EMPT, EMPT, EMPT, WALL, EMPT, EMPT, EMPT, EMPT, EMPT, EMPT, EMPT, EMPT, EMPT, EMPT, WALL, WALL, WALL},
        {WALL, EMPT, EMPT, EMPT, WALL, WALL, WALL, WALL, WALL, EMPT, EMPT, EMPT, WALL, EMPT, EMPT, EMPT, EMPT, EMPT, WALL, EMPT, EMPT, EMPT, WALL, EMPT, WALL, WALL, WALL, WALL, EMPT, WALL},
        {WALL, EMPT, WALL, EMPT, EMPT, EMPT, EMPT, WALL, EMPT, EMPT, EMPT, WALL, EMPT, WALL, EMPT, EMPT, EMPT, EMPT, WALL, EMPT, EMPT, EMPT, WALL, EMPT, WALL, EMPT, EMPT, WALL, EMPT, WALL},
        {WALL, EMPT, WALL, EMPT, EMPT, EMPT, EMPT, WALL, EMPT, EMPT, EMPT, EMPT, WALL, EMPT, EMPT, WALL, EMPT, EMPT, WALL, WALL, WALL, WALL, WALL, EMPT, EMPT, EMPT, EMPT, WALL, EMPT, WALL},
        {WALL, EMPT, WALL, EMPT, EMPT, WALL, EMPT, WALL, EMPT, EMPT, EMPT, WALL, EMPT, WALL, WALL, EMPT, EMPT, EMPT, WALL, EMPT, EMPT, EMPT, WALL, EMPT, EMPT, WALL, EMPT, EMPT, EMPT, WALL},
        {WALL, EMPT, WALL, EMPT, EMPT, WALL, EMPT, WALL, EMPT, EMPT, WALL, EMPT, EMPT, WALL, WALL, EMPT, EMPT, EMPT, WALL, EMPT, EMPT, EMPT, WALL, EMPT, EMPT, WALL, EMPT, WALL, EMPT, WALL},
        {WALL, EMPT, EMPT, EMPT, EMPT, WALL, WALL, WALL, EMPT, EMPT, EMPT, WALL, WALL, EMPT, EMPT, WALL, EMPT, EMPT, WALL, EMPT, EMPT, EMPT, WALL, EMPT, WALL, WALL, EMPT, WALL, EMPT, WALL},
        {WALL, EMPT, WALL, WALL, EMPT, EMPT, EMPT, EMPT, EMPT, WALL, EMPT, EMPT, EMPT, EMPT, EMPT, EMPT, EMPT, EMPT, EMPT, EMPT, WALL, EMPT, EMPT, EMPT, EMPT, WALL, EMPT, WALL, EMPT, WALL},
        {WALL, EMPT, EMPT, EMPT, EMPT, WALL, WALL, WALL, EMPT, WALL, EMPT, EMPT, EMPT, EMPT, EMPT, EMPT, EMPT, WALL, EMPT, WALL, WALL, EMPT, EMPT, WALL, EMPT, EMPT, EMPT, WALL, WALL, WALL},
        {WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL}
    };

    Point player = {1, 1};
    Point goal = {8, 8};

    int steps = 0;

    // To generate a randon number
    srand(time(NULL));
    // Display a message at the start
    displayMessage("Start", "The maze says 'You shall not pass!' Challenge accepted?");


    while (1) {
        clearConsole();

        map[player.y][player.x] = PLAYER; // Player represented by ASCII 2

        printMap(map, steps);

        char move;
        printf("Enter movement (W/A/S/D): ");
        scanf(" %c", &move);

        int newPlayerX = player.x;
        int newPlayerY = player.y;

        if (move == 'W' || move == 'w') {
            newPlayerY--;
        } else if (move == 'A' || move == 'a') {
            newPlayerX--;
        } else if (move == 'S' || move == 's') {
            newPlayerY++;
        } else if (move == 'D' || move == 'd') {
            newPlayerX++;
        }


        if (map[newPlayerY][newPlayerX] == WALL) {
            int randomIndex = rand() % 3;
            displayMessage("Wall Hit", wallHitMessages[randomIndex]);
        } else if (map[newPlayerY][newPlayerX] == PLAYER) {
            displayMessage("Invalid Move", "You cannot move there.");
        } else if (map[newPlayerY][newPlayerX] == GOAL) {
            int randomIndex = rand() % 3;
            char winMessage[100];
            snprintf(winMessage, sizeof(winMessage), "STEPS TAKEN: %d\n%s", steps , winningMessages[randomIndex]);
            displayMessage("Congratulations!", winMessage);
            break;
        } else {
            map[player.y][player.x] = EMPT; // EMPT cell

            Point start = {player.x, player.y};
            Point end = {goal.x, goal.y};
            
            player.x = newPlayerX;
            player.y = newPlayerY;

            steps++;
        }
    }


    // After the game is completed, write game information to a text file
    writeGameInfoToFile(gameName, developers, map, steps);

    return 0;
}
