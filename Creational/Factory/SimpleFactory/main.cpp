#include "ProductFactory.h"

int main() {
    ProductFactory factory;
    factory.Init();

    auto productA = factory.createProduct("A");
    if (productA != nullptr) {
        productA->doWork();
    }

    auto productB = factory.createProduct("B");
    if (productB != nullptr) {
        productB->doWork();
    }

    return 0;
}