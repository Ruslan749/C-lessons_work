#include <iostream>
#include <stdio.h>
using namespace std;
void main() {
    int volume,film,musicClip,music,text;
    int resFilm, resMusicClip, resMusic, resText;
    film = 760;
    musicClip = 95;
    music = 7;
    text = 350;
    scanf_s("%u", &volume);
    volume *= 1024;

    resFilm = volume / film;
    resMusicClip = (volume % film) / musicClip;
    resMusic = (volume % film % musicClip) / music;
    resText = ((volume % film % musicClip % music) * 1024) / text;

    printf("%u %u %u %u", resFilm,resMusicClip,resMusic,resText);

}