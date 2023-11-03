// CreateProcess.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<Windows.h>
int main()
{
    HANDLE hProcess;
    HANDLE hThread;
    STARTUPINFO si;
    PROCESS_INFORMATION pi;
    DWORD dwprocessId = 0;
    DWORD dwThreadId = 0;
    ZeroMemory(&si, sizeof(si));
    ZeroMemory(&si, sizeof(pi));
    BOOL bCreateProcess = NULL;
    bCreateProcess = CreateProcess(L"C:\\Program Files\\Windows Media Player\\wmplayer.exe", NULL, NULL, NULL, false, 0, NULL, NULL, &si, &pi);
    if (bCreateProcess==false)
    {
        std::cout << "Created Process failed & error No " << GetLastError() << std::endl;
    }
    else
    {
        std::cout << "Create process sucess" << std::endl;
        std::cout << "Process ID" <<pi.dwProcessId <<std::endl;
        std::cout << "Thread ID" <<pi.dwThreadId <<std::endl;
        std::cout << "Get Process ID" <<GetProcessId(pi.hProcess) << std::endl;
        std::cout << "Get Thread ID" << GetThreadId(pi.hThread) <<std::endl;
        WaitForSingleObject(pi.hProcess, INFINITE);
        CloseHandle(pi.hThread);
        CloseHandle(pi.hProcess);
    }
    system("PAUSE");
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
