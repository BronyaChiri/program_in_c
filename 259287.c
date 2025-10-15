
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifdef _WIN32
  #include <windows.h>
  #define sleep_ms(ms) Sleep(ms)
#else
  #include <unistd.h>
  static void sleep_ms(unsigned int ms) { usleep(ms * 1000); }
#endif


static void clear_screen(void) {
    /* ANSI 清屏并移动光标到 (1,1) */
    printf("\033[2J\033[H");
    fflush(stdout);
}


#ifndef HEART_CHAR
  #define HEART_CHAR "*"
#endif

int main(void) {

    const char *heart[] = {
        "  " HEART_CHAR "  " HEART_CHAR "   " HEART_CHAR "  " HEART_CHAR "  ",
        " " HEART_CHAR "     " HEART_CHAR " " HEART_CHAR "     " HEART_CHAR " ",
        HEART_CHAR "       " HEART_CHAR "       " HEART_CHAR,
        HEART_CHAR "        " HEART_CHAR "     " HEART_CHAR,
        " " HEART_CHAR "         " HEART_CHAR " ",
        "  " HEART_CHAR "       " HEART_CHAR "  ",
        "   " HEART_CHAR "     " HEART_CHAR "   ",
        "    " HEART_CHAR "   " HEART_CHAR "    ",
        "     " HEART_CHAR " " HEART_CHAR "     "
    };
    const int heart_lines = sizeof(heart) / sizeof(heart[0]);

    /* 要显示的文字（可以按需替换中文/英文） */
    const char *message = "祝你心想事成！";

    /* 控制闪烁次数与速度 */
    const int cycles = 30;      /* 总闪烁次数（显示->隐藏 为一次循环） */
    const unsigned int on_ms = 400;  /* 爱心显示时长（毫秒） */
    const unsigned int off_ms = 300; /* 爱心隐藏时长（毫秒） */

    /* 尝试清屏（避免残留） */
    clear_screen();

    for (int c = 0; c < cycles; ++c) {
        /* 显示爱心 + 文字 */
        clear_screen();
        for (int i = 0; i < heart_lines; ++i) {
            /* 如果你觉得爱心太瘦，可以把每个字符重复两次以横向放大：
               printf("%s%s\n", heart[i], heart[i]);
               但注意对齐会变化 */
            printf("%s\n", heart[i]);
        }
        printf("\n%s\n", message);
        fflush(stdout);

        sleep_ms(on_ms);

        /* 隐藏（清屏）——闪烁效果 */
        clear_screen();
        /* 也可以只打印文字而隐藏图案：例如下面注释掉清屏改为只打印文字：
           printf("\n\n%s\n", message);
         */
        fflush(stdout);

        sleep_ms(off_ms);
    }

    /* 最后显示一次稳定状态（显示爱心 + 文字） */
    clear_screen();
    for (int i = 0; i < heart_lines; ++i) {
        printf("%s\n", heart[i]);
    }
    printf("\n%s\n", message);
    fflush(stdout);

    return 0;
}

