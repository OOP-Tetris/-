
#include"Game.h"
#include <Windows.h>

int main(int argc, char* argv[])
{
	//만약 화면 깨짐 상황이 존재하면 아래 주석을 해체하면 됩니다 저는 아래 코드 때문에 화면이 깨저서 그냥 주석 처리했습니다
	//SetConsoleOutputCP(CP_UTF8);
	Game* game = new Game();

	game->run();

	return 0;
}
