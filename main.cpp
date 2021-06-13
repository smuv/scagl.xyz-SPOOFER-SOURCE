#include <Windows.h>
#include <iostream>
#include <stdio.h>
#include <random>
#include <tchar.h>

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
	printf("for example - My new spoofer.");
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
		Sleep(20);
	}


	system("cls");
	MessageBoxA(NULL, "Welcome to spoofer!", "scagl.xyz", MB_OK);
	printf("                   _               \n");
	printf("  ___ __ __ _ __ _| | __ ___  _ ___\n");
	printf(" (_-</ _/ _` / _` | |_\ \ / || |_ /\n");
	printf(" /__/\__\__,_\__, |_(_)_\_\\_, /__|\n");
	printf("             |___/         |__/    \n");
	printf("");
	printf("");
	printf("");
	printf("[1] Spoof\n [2] Clean\n [3] Discord\n >> Your option: ");
}

// that's v.1 = more options soon 
// github.com/5nx 
// contact: damo#4444
// made with <3 by ^
