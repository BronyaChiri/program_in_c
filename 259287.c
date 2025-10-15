
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
    /* ANSI �������ƶ���굽 (1,1) */
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

    /* Ҫ��ʾ�����֣����԰����滻����/Ӣ�ģ� */
    const char *message = "ף�������³ɣ�";

    /* ������˸�������ٶ� */
    const int cycles = 30;      /* ����˸��������ʾ->���� Ϊһ��ѭ���� */
    const unsigned int on_ms = 400;  /* ������ʾʱ�������룩 */
    const unsigned int off_ms = 300; /* ��������ʱ�������룩 */

    /* ������������������� */
    clear_screen();

    for (int c = 0; c < cycles; ++c) {
        /* ��ʾ���� + ���� */
        clear_screen();
        for (int i = 0; i < heart_lines; ++i) {
            /* �������ð���̫�ݣ����԰�ÿ���ַ��ظ������Ժ���Ŵ�
               printf("%s%s\n", heart[i], heart[i]);
               ��ע������仯 */
            printf("%s\n", heart[i]);
        }
        printf("\n%s\n", message);
        fflush(stdout);

        sleep_ms(on_ms);

        /* ���أ�������������˸Ч�� */
        clear_screen();
        /* Ҳ����ֻ��ӡ���ֶ�����ͼ������������ע�͵�������Ϊֻ��ӡ���֣�
           printf("\n\n%s\n", message);
         */
        fflush(stdout);

        sleep_ms(off_ms);
    }

    /* �����ʾһ���ȶ�״̬����ʾ���� + ���֣� */
    clear_screen();
    for (int i = 0; i < heart_lines; ++i) {
        printf("%s\n", heart[i]);
    }
    printf("\n%s\n", message);
    fflush(stdout);

    return 0;
}

