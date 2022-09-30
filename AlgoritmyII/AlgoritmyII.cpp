﻿/*  VSB - Technical University of Ostrava - Faculty of Electrical Engineering and Computer Science
    This project was made as a part of study materials for a subject Algorithms II
    Author: Ing. Michael Machů
*/

#include <iostream>
#include "Exercise1.h"
#include "Components.h"

void MeasureWrapperExample1(void*);
void MeasureWrapperExample2(void*);
void MeasureWrapperExample3(void*);
void MeasureWrapperExample4(void*);
void MeasureWrapperExample5(void*);


int main()
{
    // Dynamic allocation use only if it is necessary!
    //Exercise1 *exercise1 = new Exercise1(5);
    //exercise1->Example1();
    //delete[] exercise1;

    Exercise1 exercise1(50000, false);
    //exercise1.Example1()  // Volani metody
    
    //Components::PrintElements(exercise1.GetElements(), exercise1.GetElementsLength());    // Vypise vystup pole
    
    Components::MeasureMethod(&MeasureWrapperExample1, &exercise1);     // Provede mereni nad metodou
    exercise1.ResetElements();                                          // Resetuje zpet pole do puvodniho stavu
    Components::MeasureMethod(&MeasureWrapperExample2, &exercise1);
    exercise1.ResetElements();
    Components::MeasureMethod(&MeasureWrapperExample3, &exercise1);
    exercise1.ResetElements();
    Components::MeasureMethod(&MeasureWrapperExample4, &exercise1);
    exercise1.ResetElements();
    Components::MeasureMethod(&MeasureWrapperExample5, &exercise1);
    // ----------- Domaci uloha -----------
    /*
        Vytvorte novou tridu, ktera bude resit problem "Exercises 6.1 - Task 7".
        Algoritmus nemusite merit, staci pouze splnit zadani a zavolat metodu, ktera resi problem a ukazuje spravny vystup.

        Nezapomente, ze algoritmus musi mit lepsi slozitost, nez kvadratickou, tzn. ze lepsi jak O(n^2)!!
        Napoveda: vyuzijte trideni pred provedenim algoritmu stejne, jak je tomu u PresortElementUniqueness a PresortMode.
    */  
    return 0;
}

void MeasureWrapperExample1(void* context)
{
    static_cast<Exercise1*>(context)->Example1();
}

void MeasureWrapperExample2(void* context)
{
    static_cast<Exercise1*>(context)->Example2();
}

void MeasureWrapperExample3(void* context)
{
    static_cast<Exercise1*>(context)->Example3();
}

void MeasureWrapperExample4(void* context)
{
    static_cast<Exercise1*>(context)->Example4();
}

void MeasureWrapperExample5(void* context)
{
    static_cast<Exercise1*>(context)->Example5();
}
