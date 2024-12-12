#include <stdio.h>
#include <ctype.h>
#include <string.h>

void check_password_strength(const char *password) {
    int length = strlen(password);
    int has_lower = 0, has_upper = 0, has_digit = 0;

    // 基準1: パスワードが8文字以上かどうか
    if (length < 8) {
        printf("改善点: パスワードは8文字以上でなければなりません。\n");
    } else {
        printf("パスワードの長さ: OK\n");
    }

    // 基準2: 大文字・小文字の両方を含む
    for (int i = 0; i < length; i++) {
        if (islower(password[i])) {
            has_lower = 1;
        } else if (isupper(password[i])) {
            has_upper = 1;
        } else if (isdigit(password[i])) {
            has_digit = 1;
        }
    }

    // 小文字が含まれているかどうか
    if (!has_lower) {
        printf("改善点: 小文字を含める必要があります。\n");
    } else {
        printf("小文字: OK\n");
    }

    // 大文字が含まれているかどうか
    if (!has_upper) {
        printf("改善点: 大文字を含める必要があります。\n");
    } else {
        printf("大文字: OK\n");
    }

    // 数字が含まれているかどうか
    if (!has_digit) {
        printf("改善点: 数字を含める必要があります。\n");
    } else {
        printf("数字: OK\n");
    }

    // 強いパスワードかどうか
    if (length >= 8 && has_lower && has_upper && has_digit) {
        printf("このパスワードは強いです！\n");
    } else {
        printf("このパスワードは強くありません。改善してください。\n");
    }
}

int main() {
    char password[100];

    printf("パスワードを入力してください: ");
    fgets(password, sizeof(password), stdin);

    // fgetsで改行文字が入るので、取り除く処理
    password[strcspn(password, "\n")] = '\0';

    check_password_strength(password);

    return 0;
}
