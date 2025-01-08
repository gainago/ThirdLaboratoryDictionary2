#ifndef GENERATE_LIST_SEQUENCE_PERSON
#define GENERATE_LIST_SEQUENCE_PERSON

#include "Sequence.h"
#include "DynamicArray.h"
#include "Person.h"


Sequence<Person*>* GenerateListSequencePerson(int const count, DynamicArray<MyString>* Names, DynamicArray<MyString>* Surnames);

void DeleteGenerateArraySequencePerson(Sequence<Person*>* seq);

#endif //GENERATE_LIST_SEQUENCE_PERSON