#ifndef UICLASS_H
#define UICLASS_H

#include <QObject>
#include <QWidget>
#include <QTextEdit>
#include <QRect>
#include "Person.h"
#include "MyString.h"
#include "Sequence.h"
#include "DynamicArray.h"
#include "LRUCacheCopy.h"
#include "ReturnValue.h"

class UIClass : public QObject
{
    Q_OBJECT
private:
    QRect* screen_;
    QWidget* mainWidget_;
    QTextEdit* textEdit_;
    inline static Sequence<Person*>* seq_;//если мы растащим реализации чего ниудь вызывающее GetPerson, смотреть как работае inline  
    DynamicArray<MyString>* names_;
    DynamicArray<MyString>* surnames_;
    LRUCache<int, Person>* cache_; //inline static
public:
// как работает объявление и определение статических переменных-членов класса 
    static MyNamespace::ReturnValue<Person> GetPerson(int const & index);
    UIClass();
public slots:

    void slotGenerateRand();
    void slotGenerateRandFinal(QString);

    void slotGet();
    void slotGetFinal(QString);

    void slotDisplayCache();
};

#endif // UICLASS_H
