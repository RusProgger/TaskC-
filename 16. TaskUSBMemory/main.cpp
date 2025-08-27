#include <iostream>
using namespace std;

int main() {
    int gb;
    cin >> gb;

    // Переводим объем флешки в килобайты
    long long total_kb = static_cast<long long>(gb) * 1024 * 1024;

    // Размеры файлов в килобайтах
    int movie_kb = 760 * 1024;
    int clip_kb = 95 * 1024;
    int music_kb = 7 * 1024;
    int text_kb = 350;

    // Счётчики
    int movies = 0, clips = 0, music = 0, texts = 0;

    // Записываем фильмы
    while (total_kb >= movie_kb) {
        total_kb -= movie_kb;
        movies++;
    }

    // Записываем клипы
    while (total_kb >= clip_kb) {
        total_kb -= clip_kb;
        clips++;
    }

    // Записываем музыку
    while (total_kb >= music_kb) {
        total_kb -= music_kb;
        music++;
    }

    // Записываем текстовые документы
    while (total_kb >= text_kb) {
        total_kb -= text_kb;
        texts++;
    }

    // Выводим результат
    cout << movies << " " << clips << " " << music << " " << texts << endl;

    return 0;
}
