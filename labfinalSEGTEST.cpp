#include "gtest/gtest.h"
#include <iostream>
#include <sstream>
#include "pch.h"

// Redirect output for testing
class OutputRedirector {
public:
    OutputRedirector() {
        oldBuffer = std::cout.rdbuf();
        std::cout.rdbuf(buffer.rdbuf());
    }

    ~OutputRedirector() {
        std::cout.rdbuf(oldBuffer);
    }

    std::string getOutput() const {
        return buffer.str();
    }

private:
    std::ostringstream buffer;
    std::streambuf* oldBuffer;
};

// Function declarations
void WindowsWindow();
void WindowsScrollbar();
void LinuxWindow();
void LinuxScrollbar();
void WindowsOS();
void LinuxOS();

// Test cases
TEST(GUITest, WindowsWindowTest) {
    OutputRedirector redirector;
    WindowsWindow();
    EXPECT_EQ(redirector.getOutput(), "Windows window is opened\n");
}

TEST(GUITest, WindowsScrollbarTest) {
    OutputRedirector redirector;
    WindowsScrollbar();
    EXPECT_EQ(redirector.getOutput(), "Windows scrollbar is opened\n");
}

TEST(GUITest, LinuxWindowTest) {
    OutputRedirector redirector;
    LinuxWindow();
    EXPECT_EQ(redirector.getOutput(), "Linux window is opened\n");
}

TEST(GUITest, LinuxScrollbarTest) {
    OutputRedirector redirector;
    LinuxScrollbar();
    EXPECT_EQ(redirector.getOutput(), "Linux scrollbar is opened\n");
}

TEST(GUITest, WindowsOSTest) {
    OutputRedirector redirector;
    WindowsOS();
    EXPECT_EQ(redirector.getOutput(), "Windows OS is opened\n");
}

TEST(GUITest, LinuxOSTest) {
    OutputRedirector redirector;
    LinuxOS();
    EXPECT_EQ(redirector.getOutput(), "Linux OS is opened\n");
}