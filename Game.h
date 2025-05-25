#pragma once
#include "Stages.h"
#include "Block.h"
#include "Printer.h"
#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <Windows.h>

class Game {
private:
    int level;
    int score;
    int lines;
    int i;
    int is_gameover = 0;
    char keytemp;
    char total_block[21][14];
    Stages* stages;
    Printer* printer;
    Block* curr_block;
    Block* next_block;
public:
    Game();
    void run();
    int init();
    //�Ųٷ� ���� �ʱ�ȭ�ϴ� �Լ�
    int init_Reversed();
    int input_data();
    int move_block();
    //�Ųٷ� ������ ��� �������� ��Ÿ���� �߰��� �Լ�
    int move_block_Reversed();
    int strike_check();
    //�Ųٷ� ���� ���� �浹 ���� �Լ� ���� strike_check�Լ��� ��������� �߰��� ���� ����� y��ǥ�� 0���� �۾Ƶ� �浹�� �����Ѵٴ� ������ �߰��Ǿ����ϴ�
    int strike_check_Reversed();
    int merge_block();
    int check_full_line();
    int rotate();
    //�Ųٷ� �������� ���θ� �Ǵ��ϴ� �Լ��� �ű� �߰���
    bool isReverseWorld(int level);
   
};