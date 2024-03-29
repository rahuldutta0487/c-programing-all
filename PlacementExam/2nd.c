#include <stdio.h>
#include <string.h>

int MathChallenge(char str[]) {
    int count = 0;
    int str_len = strlen(str);

    for (int i = 1; i < str_len; i++) {
        if (str[i] == str[i - 1] - 1) {
            count++;
        }
    }

    return count;
}

int main() {
    char str[] = "5655984";

    int result = MathChallenge(str);
   

    printf("%d\n", result); 
    

    return 0;
}
