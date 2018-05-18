#include <iostream>
#include <climits>

// Проектирование дерева LLVM на язык С++
int llvm_to_c(int n) {
    // entry
    if (n == 1) {
        // EQ1
        return 1;
    } else {
        // DIF1
        if (n > 1) {
            // BR3
            if (n == 3) {
                // EQ3
                return 3;
            } else {
                // DIF3
                if (n > 3) {
                    // BR4
                    if (n == 4) {
                        // EQ4
                        return 4;
                    } else {
                        // DIF4
                        // BRNULL
                        return -1;
                    }
                } else {
                    // BR2
                    if (n == 2) {
                        // EQ2
                        return 2;
                    } else {
                        // DIF2
                        // BRNULL
                        return -1;
                    }
                }
            }
        } else {
            // BR0
            if (n == 0) {
                // EQ0
                return 0;
            } else {
                // DIF0
                // BRNULL
                return -1;
            }
        }
    }
}

// Предполагаемая функция
int check_function(int n) {
    if (n >= 0 && n <= 4)
        return n;
    return -1;
}

int main() {
    bool equal = true;
    for (int i = INT_MIN; i <= INT_MAX; ++i) {
        if (llvm_to_c(i) != check_function(i)) {
            equal = false;
        }
    }
    
    std::cout << equal << std::endl; // Выводит 1 => Функция распознана корректно
    return 0;
}
