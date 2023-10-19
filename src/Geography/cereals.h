#pragma once

class Cereals {
    public:
        Cereals() {}
};

class Wheat: public Cereals {

};

class Field {
    public:
        Field() {}
        Cereals produce_Cereals() {
            Cereals cereals;
            return cereals;
        }
};