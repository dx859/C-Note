#include <iostream>
#include "single.h"

single *single::p = NULL;

single::single() {

}
single::~single() {

}

single *single::makesingle() {
    if (p == NULL)
        p = new single;
    return p;
}

void single::release() {
    delete p;
    p = NULL;
}