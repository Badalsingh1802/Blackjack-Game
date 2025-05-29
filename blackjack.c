#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to draw a card (returns a number between 1 and 11)
int drawCard() {
    int card = rand() % 13 + 1;  // 1 to 13
    if (card > 10) return 10;    // J, Q, K = 10
    else if (card == 1) return 11; // Ace = 11 for simplicity
    else return card;
}

// Function to display card total
void displayTotal(const char* player, int total) {
    printf("%s total: %d\n", player, total);
}

int main() {
    srand(time(0)); // Seed random number

    int userTotal = 0, computerTotal = 0;
    char choice;

    // Initial cards
    userTotal = drawCard() + drawCard();
    computerTotal = drawCard() + drawCard();

    printf("Welcome to Blackjack (21)!\n\n");

    // Show user's cards (total only)
    displayTotal("Your", userTotal);
    printf("Dealer shows: %d\n", computerTotal - (computerTotal % 10)); // Hide one card

    // User's turn
    while (1) {
        printf("\nDo you want to (h)it or (s)tand? ");
        scanf(" %c", &choice);

        if (choice == 'h' || choice == 'H') {
            int card = drawCard();
            printf("You drew a %d\n", card);
            userTotal += card;
            displayTotal("Your", userTotal);

            if (userTotal > 21) {
                printf("You busted! Dealer wins.\n");
                return 0;
            }
        } else if (choice == 's' || choice == 'S') {
            break;
        } else {
            printf("Invalid choice. Type h or s.\n");
        }
    }

    // Dealer's turn
    printf("\nDealer's turn...\n");
    displayTotal("Dealer", computerTotal);

    while (computerTotal < 17) {
        int card = drawCard();
        printf("Dealer draws a %d\n", card);
        computerTotal += card;
        displayTotal("Dealer", computerTotal);
    }

    // Determine the winner
    if (computerTotal > 21) {
        printf("\nDealer busted! You win!\n");
    } else if (userTotal > computerTotal) {
        printf("\nYou win!\n");
    } else if (userTotal < computerTotal) {
        printf("\nDealer wins!\n");
    } else {
        printf("\nIt's a tie!\n");
    }

    return 0;
}
