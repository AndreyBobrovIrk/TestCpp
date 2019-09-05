#pragma once

template<typename C>
class tskNamedObject : public C
{
public:
    tskNamedObject() = default;
    virtual ~tskNamedObject() = default;

    void print() override 
    {
        std::cout << s_name << ": ";
        C::print();
    }

private:
    static const char* s_name;
};

