#pragma once

class Cereals {
    public:
        Cereals() {}
        virtual ~Cereals() {}
};

class Wheat: public Cereals {

};

class Field {
    public:
        Field() {}
        Cereals* produce_Cereals() {
            Cereals* cereals = new Cereals();
            int toto=0;
            return cereals;
        }
};