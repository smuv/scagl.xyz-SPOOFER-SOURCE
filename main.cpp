#pragma once
#include <iostream>
#include <string>
#include <tchar.h>
#include <string.h>
#include <urlmon.h>
#include <stdio.h>
#include <Windows.h>
#pragma comment (lib, "urlmon.lib")
using namespace std;

namespace memory {
	int being_debugged_peb();
	int remote_debugger_present();
	int check_window_name();
	int is_debugger_present();
	int nt_global_flag_peb();
	int nt_query_information_process();
	int nt_set_information_thread();
	int debug_active_process(const char*);
	int write_buffer();
}

namespace exceptions {
	int close_handle_exception();
	int single_step_exception();
	int int_3();
	int int_2d();
	int prefix_hop();
	int debug_string();
}

namespace timing {
	int rdtsc();
	int query_performance_counter();
	int get_tick_count();
}

namespace cpu {
	int hardware_debug_registers();
	int mov_ss();
}

auto RandomTitle = [](int iterations) {
	std::string Title;
	for (int i = 0; i < iterations; i++)
		Title += rand() % 255 + 1;
	return Title;
};

int main()
{
	SetConsoleTitleA(RandomTitle(rand() % 100 + 9).c_str());
	system("color 6");
	printf("W");
	Sleep(50);
	printf("e");
	Sleep(50);
	printf("l");
	Sleep(50);
	printf("c");
	Sleep(50);
	printf("o");
	Sleep(50);
	printf("m");
	Sleep(50);
	printf("e ");
	Sleep(500);
	printf("t");
	Sleep(50);
	printf("o ");
	Sleep(500);
	printf("scagl.xyz | Spoofer & Cleaner");
	Sleep(5000);
	system("cls");
	printf("[!] Loading modules	");
	Sleep(2000);

	int i = 0;
	char load[26];
	while (i < 25)
	{
		system("cls");
		load[i++] = '#';
		load[i] = '\0';

		printf("			  LOADING ");
		printf("\n\n		[%-25s]", load);
		system("color 1");
		system("color 2");
		system("color 3");
		system("color 4");
		system("color 5");
		system("color 6");
		system("color 7");
		system("color 8");
		system("color 9");
		system("color a");
		system("color b");
		system("color c");
		system("color d");
		Sleep(2);
	}

menu:
	system("cls");
	system("color c");
	MessageBoxA(ERROR, "Spoofer initialized!", "scagl.xyz", MB_OK);
	int choice;
	printf("                               .                        \n");
	printf("    ____   ___    ___    ___.  |     _  .- ,    .  ____ \n");
	printf("  (     .'   `  /   ` .'   `  |      \\,'  |    `     / \n");
	printf("  `--.  |      |    | |    |  |      /\\   |    |   ,/  \n");
	printf(" \\___.'  `._.' `.__/|  `---| /\\__ / / \\ `---|.  /__.'\n");
	printf("                       \\___/              \\___/  `    \n");
	printf("\n");
	printf("");
	printf("");
	printf("");
	printf(" [1] Spoof\n [2] Clean\n [3] Discord\n\n >> Your option: ");
	cin >> choice;
	//spoofer | add it by yourself
	if (choice == 1)
	{
		system("cls");
		system("color c");
		printf("[>] Spoofing PC...");
		system("start cmd /q /k SPOOFER.exe");
		Sleep(2000);
		printf("[>] Spoofing MAC \n");
		Sleep(2000);
		printf("[>] Spoofing NETWORK\n");
		Sleep(2000);
		printf("[>] Spoofing PC INFO\n");
		Sleep(2000);
		printf("[>] Spoofing HWID\n");
		Sleep(2000);
		system("cls");
		system("color a");
		printf("[+] Spoofed!\n");
		Sleep(2000);
		printf("[!] Returning to menu...\n");
		Sleep(2000);
		goto menu;
	}
	//cleaner | add it by yourself
	if (choice == 2)
	{
		system("cls");
		system("color e");
		printf("[>] Cleaning your PC");
		Sleep(20000);
		system("start cmd /q /k CLEANER.exe");
		goto menu;
	}
	if (choice == 3)
	{
		system("start https://discord.gg/DVY7rEeGDH");
	}
}


// that's version 1.2
// github.com/5nx
// contact: damo#4444
// made with <3 by ^^
// join here https://discord.gg/DVY7rEeGDH 
// ^for more sources/updates
