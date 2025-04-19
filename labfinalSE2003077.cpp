#include <iostream>

void WindowsWindow() {
    std::cout << "Windows window is opened\n";
}

void WindowsScrollbar() {
    std::cout << "Windows scrollbar is opened\n";
}

void LinuxWindow() {
    std::cout << "Linux window is opened\n";
}
void LinuxScrollbar() {
    std::cout << "Linux scrollbar is opened\n";
}

void WindowsOS() {
    std::cout << "Windows OS is opened\n";
}

void LinuxOS() {
    std::cout << "Linux OS is opened\n";
}


int main() {

    std::cout << "Enter number 1 to use Windows\n";
    std::cout << "Enter number 2 to use Linux\n";


    int i;
    std::cin >> i;

    

    if (i == 1) {
        WindowsOS();
        std::cout << "Enter number 1 to use Windows window\n";
        std::cout << "Enter number 2 to use Window scrollbar\n";

        int j;
        std::cin >> j;

        if (j == 1) {
            WindowsWindow();
        }
        else if (j == 2)
        {
            WindowsScrollbar();
        }
        else {
            std::cout << "invalid input";
        }

    }
    else if (i == 2)
    {
        LinuxOS();
        std::cout << "Enter number 1 to use Linux window\n";
        std::cout << "Enter number 2 to use Linux scrollbar\n";
        int j;
        std::cin >> j;
        if (j == 1) {
            LinuxWindow();
        }
        else if (j == 2)
        {
            LinuxScrollbar();
        }
        else {
            std::cout << "invalid input";
        }

    }
    else {
        std::cout << "Invalid input";
    }

    return 0;

}