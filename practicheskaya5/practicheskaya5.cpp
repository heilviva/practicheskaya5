#include <iostream>
#include <random>
#include <algorithm>
#include <string>

// Функция для вывода слова задом наперед. 
// Путем вызова функции std::reverse переворачивается строка word, а затем выводится на экран.
void reverseWord(std::string word) {
    std::reverse(word.begin(), word.end());
    std::cout << "ReverseWord: " << word << std::endl;
}

// Функция для удаления гласных из слова.
// Пробегаемся по каждому символу в строке word, если символ не является гласной буквой, добавляем его к результату, затем выводим результат на экран.
void removeVowels(std::string word) {
    std::string result = "";
    for (char c : word) {
        if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' &&
            c != 'A' && c != 'E' && c != 'I' && c != 'O' && c != 'U') {
            result += c;
        }
    }
    std::cout << " removeVowels: " << result << std::endl;
}

// Функция для удаления согласных из слова.
// Пробегаемся по каждому символу в строке word, если символ является гласной буквой, добавляем его к результату, затем выводим результат на экран.
void removeConsonants(std::string word) {
    std::string result = "";
    for (char c : word) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            result += c;
        }
    }
    std::cout << "RemoveConsonants: " << result << std::endl;
}

// Функция для перемешивания букв в слове. Используется для генерации случайного распределения букв в слове.
void shuffleWord(std::string word) {
    std::random_device rd;
    std::mt19937 g(rd());
    std::shuffle(word.begin(), word.end(), g);
    std::cout << "Shuffled word: " << word << std::endl;
}
// В функции main запрашивается ввод слова и выбор операции над ним. Затем в зависимости от выбора вызывается соответствующая функция.
int main() {
    std::string word;
    int choice;
        std::cout << "Введите слово: ";
    std::cin >> word;

    std::cout << "Menu\n1. Reverse word\n2. Remove vowels\n"
        "3. Remove consonants\n4. Shuffle word\n";
    std::cout << "Enter your choice: ";
    std::cin >> choice;

    switch (choice) {
    case 1:
        reverseWord(word);
        break;
    case 2:
        removeVowels(word);
        break;
    case 3:
        removeConsonants(word);
        break;
    case 4:
        shuffleWord(word);
        break;
    default:
        std::cout << "Попробуйте снова" << std::endl;
    }

    return 0;
}