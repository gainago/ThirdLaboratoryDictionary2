#include "UIClass.h"

MyNamespace::ReturnValue<Person> UIClass::GetPerson(int const & index)
{
    if(seq_ == nullptr || index >= seq_->GetLength() || index < 0){
        return MyNamespace::ReturnValue<Person>(false, Person());
    }

    return MyNamespace::ReturnValue<Person>(true, *seq_->Get(index));
}
