#include <windows.h>

int main() {
    HANDLE hFile = CreateFileW(
        L"test.txt",
        GENERIC_WRITE,
        0,
        NULL,
        CREATE_ALWAYS,
        FILE_ATTRIBUTE_NORMAL,
        NULL
    );

    if (hFile != INVALID_HANDLE_VALUE) {
        CloseHandle(hFile);
    }

    return 0;
}
