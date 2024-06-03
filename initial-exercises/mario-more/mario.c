#include <cs50.h>
#include <stdio.h>

int print_pyramid(int height);

int print_spaces(int spaces);

int print_hashes(int hashs);

int main() {
    int height = get_int("Height: ");

    while(height < 1 || height > 8) {
        height = get_int("Height: ");
    }

    print_pyramid(height);

    return 0;
}

int print_pyramid(int height) {
    for(int i = 0; i < height; i++) {
        print_spaces(height - i - 1);
        print_hashes(i + 1);
        printf("  ");
        print_hashes(i + 1);
        printf("\n");
    }

    return 0;
}

int print_spaces(int spaces) {
    while(spaces > 0){
        printf(" ");
        spaces--;
    }

    return 0;
}

int print_hashes(int hashes) {
    while(hashes > 0){
        printf("#");
        hashes--;
    }

    return 0;
}
