#include <iostream>
#include <time.h>
#include <windows.h>

#include "Frmuls.h"


using namespace std;

int main()
{
    int width = 120;
    int height = 40;
    float aspect = (float)width / height;       //Соотношение сторрон
    float pixel_aspect = 11.0f / 24.0f;         //Cоотношение пикселей

    char gradient[] = " .:!/r(l1Z4H9W8$@";
    int garadient_size = size(gradient) - 2;

    char* screen = new char[width * height + 1];
    screen[width * height] = '\0';      //Конец строки

    int zero_time = 0;
    int time = clock();     //переменная для частоты кадров(фигур)

    /*
    В цикле (там где t) каждые 100 (frequency/'частота') едениц
    фигура выполняет один оборот
    */

    int frequency = 100;        //Частота циклов

    for (int t = 0; t < frequency; t++)
    {    

        for (int i = 0; i < width; i++)
        {
            for (int j = 0; j < height; j++)
            {
                //Координаты X and Y//
                float x = (float)i / width * 2.0f - 1.0f;
                float y = (float)j / height * 2.0f - 1.0f;
                x *= aspect * pixel_aspect;
                //////////////////////
                x += sin(t * 0.05);         //Создаём движение

                char pixel = ' ';

                if (circle(x, y)) { pixel = '@'; }       //Куг
                screen[i + j * width] = pixel;
            }

        }
        printf(screen);
        Sleep(60);
        system("cls");
        
    }
    
    std::cout << endl << time;
    getchar();


    return 0;
}