#include <stdio.h>
#include <string.h>
#include <stdbool.h>

char ChallengeToken[] = "fqzywvx6391";

bool isCharacterInToken(char c) {
    for (int i = 0; ChallengeToken[i] != '\0'; i++) {
        if (ChallengeToken[i] == c || ChallengeToken[i] == c + 32 || ChallengeToken[i] == c - 32) {
            return true;
        }
    }
    return false;
}

char *StringChallenge(char str[]) {
    int str_len = strlen(str);
    int half_len = str_len / 2;
    char result[str_len + 1]; // +1 for the null terminator

    int i, j, k;
    j = half_len;
    k = 0;

    for (i = 0; i < half_len; i++) {
        result[k++] = str[i];
        result[k++] = str[j++];
    }

    result[k] = '\0';

    // Remove characters from ChallengeToken (case-insensitive).
    int result_len = strlen(result);
    for (i = 0; i < result_len; i++) {
        if (isCharacterInToken(result[i])) {
            for (j = i; j < result_len; j++) {
                result[j] = result[j + 1];
            }
            i--;
            result_len--;
        }
    }

    if (result[0] == '\0') {
        return "EMPTY";
    } else {
        char *final_result = malloc(strlen(result) + 1);
        strcpy(final_result, result);
        return final_result;
    }
}

int main() {
    char str[] = "abc1*kyoo";
    char *result = StringChallenge(str);

    printf("Output: %s\n", result);

    free(result);

    return 0;
}
