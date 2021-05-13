#ifndef HW2_WHOLESALER_H
#define HW2_WHOLESALER_H


#include <iostream>
#include <vector>
#include "FlowersBouquet.h"
#include "Grower.h"

class WholeSaler : public Person {
private:
    WholeSaler* wholeSaler;
    Grower* grower;
    std::string name;
public:
    FlowersBouquet* acceptOrder(std::vector<std::string>);

    const std::string &getName() const;

    WholeSaler(std::string name, Grower*);
};

#endif //HW2_WHOLESALER_H
