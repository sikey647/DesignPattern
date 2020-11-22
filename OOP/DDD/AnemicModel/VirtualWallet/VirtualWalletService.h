#include "VirtualWalletRepository.h"

// Service 和 BO 负责核心业务逻辑

class VirtualWalletBo {
   public:
    VirtualWalletBo() {}
    ~VirtualWalletBo() {}

   private:
    long m_id;
    long m_createTime;
    double m_balance;
};

class VirtualWalletService {
   public:
    VirtualWalletService() {}
    ~VirtualWalletService() {}

    VirtualWalletBo getVirtualWallet(long walletId) {}

   private:
    VirtualWalletRepository m_virtualwalletRepository;
};