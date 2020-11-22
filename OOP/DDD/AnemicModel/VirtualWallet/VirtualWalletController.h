#include "VirtualWalletService.h"

// Controller 和 VO 负责暴露接口

class VirtualWalletController {
   public:
    VirtualWalletController() {}
    ~VirtualWalletController() {}

    double getBalance(long walletId) {}           //查询余额
    void debit(long walletId, double amount) {}   //出账
    void credit(long walletId, double amount) {}  //入账
    void transfer(long fromWalletId, long toWalletId, double amount) {}  //转账

   private:
    VirtualWalletService m_virtualwalletService;
};