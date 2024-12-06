#include <stdio.h>
#include <ctype.h>
#include <string.h>

// パスワードの強さをチェックする関数
void check_password_strength(const char* password) {
    int length = strlen(password);
    int has_lower = 0;  // 小文字のフラグ
    int has_upper = 0;  // 大文字のフラグ

    // 文字列の各文字をチェック
    for (int i = 0; i < length; i++) {
        if (islower(password[i])) {
            has_lower = 1;  // 小文字が含まれている
        } else if (isupper(password[i])) {
            has_upper = 1;  // 大文字が含まれている
        }
    }

    // ① 8文字以上かどうか
    if (length < 8) {
        printf("改善点: パスワードは8文字以上にしてください。\n");
    }

    // ② 小文字と大文字が両方含まれているか
    if (!has_lower) {
        printf("改善点: 小文字を含めてください。\n");
    }

    if (!has_upper) {
        printf("改善点: 大文字を含めてください。\n");
    }

    // 強いパスワードの判定
    if (length >= 8 && has_lower && has_upper) {
        printf("強いパスワードです！\n");
    } else {
        printf("パスワードは強くありません。改善点を確認してください。\n");
    }
}

int main() {
    char password[100];  // パスワードを格納する配列

    // ユーザーにパスワードを入力してもらう
    printf("パスワードを入力してください: ");
    scanf("%99s", password);  // パスワードの入力

    // パスワードの強さをチェック
    check_password_strength(password);

    return 0;
}
