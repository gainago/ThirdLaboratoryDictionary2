#include "Abs.h"
#include "MyString.h"
#include "Person.h"

int GetHashCodeInt(int const & value)
{
    return MyNamespace::Abs(value);
}

int GetHashCodeMyString(MyString const & string)
{
    int hash = 0;

    for(int i = 0; i < string.GetLength(); i++)
    {
        hash+=(int)string.Get(i);
        hash = hash % (int)(1e9 + 7);
    }

    return hash;
}

int GetHashCodePerson(Person const & person)
{
    int hash = 0;

    for(int i = 0; i < person.GetFirstName().GetLength(); i++)
    {
        hash+=(int)person.GetFirstName().Get(i);
        hash = hash % (int)(1e9 + 7);
    }

        for(int i = 0; i < person.GetMiddleName().GetLength(); i++)
    {
        hash+=(int)person.GetMiddleName().Get(i);
        hash = hash % (int)(1e9 + 7);
    }

        for(int i = 0; i < person.GetLastName().GetLength(); i++)
    {
        hash+=(int)person.GetLastName().Get(i);
        hash = hash % (int)(1e9 + 7);
    }

    hash += person.GetBornYear();
    hash = hash % (int)(1e9 + 7);

    return hash;
    
}