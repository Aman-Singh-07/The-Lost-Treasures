#include <stdio.h>
#include <string.h>

void startGame();
void exploreForest();
void exploreCave();
void findSword();
void findTreasureMap();
void fightMonster();
void treasureRoom();

int main() {
    startGame(); 
    return 0;
}

void startGame() {
    int choice;
    printf("Welcome, brave adventurer!\n");
    printf("You find yourself at the entrance of a dark forest. What will you do?\n");
    printf("1. Enter the forest\n");
    printf("2. Run away\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        exploreForest(); 
    } else {
        printf("You ran away safely, but you missed out on an adventure.\n");
        printf("Game Over!\n");
    }
}

void exploreForest() {
    int choice;
    printf("\nYou enter the forest and walk cautiously through the trees.\n");
    printf("You see a cave ahead.\n");
    printf("1. Enter the cave\n");
    printf("2. Walk past the cave\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        exploreCave();  
    } else {
        printf("You walk deeper into the forest and get lost.\n");
        printf("After wandering for hours, you finally find your way back, but your adventure ends here.\n");
        printf("Game Over!\n");
    }
}

void exploreCave() {
    int choice;
    printf("\nYou cautiously enter the cave and see two paths:\n");
    printf("1. Take the left path\n");
    printf("2. Take the right path\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        findSword(); 
    } else {
        findTreasureMap(); 
    }
}

void findTreasureMap() {
    int choice;
    printf("\nYou discover a treasure map leading to a hidden treasure room, but to enter, you need to answer a puzzle.\n");
    printf("1. Attempt the puzzle\n");
    printf("2. Run away\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Here is your puzzle:\n");
        printf("I have branches, but I'm not a tree,\nI have a mouth, but I don't speak.\nI have a bed, but I never sleep.\nWhat am I?\n");
        printf("1. A book\n");
        printf("2. A cloud\n");
        printf("3. A river\n");
        printf("4. A sponge\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        if (choice == 3) {
            treasureRoom();
        } else {
            printf("Oh no! You guessed wrong!\n");
            printf("Game Over!\n");
        }
    }
    else {
        printf("You walk deeper into the forest and get lost.\n");
        printf("After wandering for hours, you finally find your way back, but your adventure ends here.\n");
        printf("Game Over!\n");
    }
}

void findSword() {
    int choice;
    printf("\nYou find an old sword, but to take it, you need to leave behind one of your precious items.\n");
    printf("1. Take the sword with you\n");
    printf("2. Leave the sword\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        fightMonster();
    } else {
        printf("Oh no! A wild monster finds you and chases you down. Unfortunately, you are caught.\n");
        printf("Game Over!\n");
    }
}

void fightMonster() {
    int choice;
    printf("\nA wild monster appears! It's blocking your path!\n");
    printf("1. Fight the monster\n");
    printf("2. Run away\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("You bravely fight the monster and emerge victorious!\n");
        printf("Congratulations! You survived the fight and continue your adventure!\n");
        treasureRoom();  
    } else {
        printf("You ran away, but the monster chases you down. Unfortunately, you are caught.\n");
        printf("Game Over!\n");
    }
}

void treasureRoom() {
    printf("\nYou find a hidden room filled with treasure!\n");
    printf("Congratulations! You've completed the adventure and found the treasure.\n");
    printf("You win!\n");
}
