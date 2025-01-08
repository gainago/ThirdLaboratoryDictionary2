#ifndef GET_HASH_CODE_H
#define GET_HASH_CODE_H

#include "MyString.h"
#include "Person.h"

int GetHashCodeInt(int const & value);

int GetHashCodeMyString(MyString const &);

int GetHashCodePerson(Person const &);

#endif //GET_HASH_CODE_H