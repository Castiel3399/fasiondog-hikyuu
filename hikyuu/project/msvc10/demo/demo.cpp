// demo.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include <hikyuu/hikyuu.h>

using namespace hku;

int main(int argc, char* argv[])
{
    //�����ļ���λ�������޸�
    hikyuu_init("c:\\stock\\hikyuu_win.ini");

    StockManager& sm = StockManager::instance();

    Stock stk = sm.getStock("sh000001");
    std::cout << stk << std::endl;

	return 0;
}