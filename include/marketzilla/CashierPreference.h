#ifndef _CashierPreference_h_
#define _CashierPreference_h_

#include "dataStructures/CircularList.h"

using dataStructures::CircularList;

namespace marketzilla{

class Cashier;

class CashierPreference {
public:
    virtual Cashier& chooseCashier(CircularList<Cashier>&) = 0;
};

}

#endif