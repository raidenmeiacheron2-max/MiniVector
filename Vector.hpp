#pragma once
#include <cstddef>
#include <stdexcept>
template <typename T>
class MiniVector
{
private:
    //*指针，指向整个容器
    T *data;
    //*下标，表示待插入的位置，也表示当前元素的个数
    size_t m_size;
    //*容量，表示整个容器的大小
    size_t m_capacity;

public:
    //*构造函数--1
    MiniVector()
    {
        data = nullptr;
        m_size = 0;
        m_capacity = 0;
        
    }

    //*析构函数
    ~MiniVector()
    {
        delete[] data;
    }
    //*查看当前容器中元素的个数
    std::size_t size() const
    {
        return m_size;
    }
    //*查看当前容器的最大容量
    std::size_t capacity() const
    {
        return m_capacity;
    }

    //*重载中括号运算符，使得该容器可以想数组那样使用中括号+数字下标的方式来表示对应的元素
    //*实现方法：data指向容器首地址，直接返回就可以下标对应的元素即可
    T &operator[](std::size_t index)
    {
        return data[index];
    }
    //*静态对象的[]重载函数
    const T &operator[](std::size_t index) const
    {
        return data[index];
    }
    //*插入函数，功能为在末尾插入一个元素
    void push_back(const T &value)
    {
        if (m_size == m_capacity)
        {
            size_t tmp_capacity = (m_capacity == 0) ? 1 : m_capacity * 2;
            reserve(tmp_capacity);
            /*T *new_data = new T[m_capacity];
            for (size_t i = 0; i < m_size; i++)
            {
                new_data[i] = data[i];
            }
            delete[] data;
            data = new_data;*/
        }
        data[m_size] = value;
        m_size++;
    }

    //*拷贝构造函数
    MiniVector(const MiniVector &other)
    {
        //! 空容器处理
        if (other.m_size == 0)
        {
            data = nullptr;
            m_size = 0;
            m_capacity = 0;
           
            return;
        }
        data = new T[other.m_capacity];
        m_size = other.m_size;
        m_capacity = other.m_capacity;
        for (size_t i = 0; i < m_size; i++)
        {
            data[i] = other.data[i];
        }
    }
    //*拷贝赋值运算符
    MiniVector &operator=(const MiniVector &other)
    {
        //! 自赋值保护
        if (this == &other)
            return *this;
        //! 空容器处理
        if (other.m_size == 0)
        {
            delete[] data;
            data = nullptr;
            m_size = 0;
            m_capacity = 0;
           
            return *this;
        }

        T *newdata = new T[other.m_capacity];
        m_size = other.m_size;
        m_capacity = other.m_capacity;

        for (size_t i = 0; i < m_size; i++)
        {
            newdata[i] = other.data[i];
        }
        delete[] data;
        data = newdata;
        return *this;
    }

    //*边界检查 const && 非const
    T &at(size_t index)
    {
        if (index >= m_size)
        {
            throw std::out_of_range("Mini_Vector:at index out of range!");
        }
        return data[index];
    }
    //*const实现...
    const T &at(size_t index) const
    {
        if (index >= m_size)
        {
            throw std::out_of_range("Mini_Vector:at index out of range!");
        }
        return data[index];
    }

    //*reserve函数：
    void reserve(size_t new_cap)
    {
        if (new_cap < m_capacity || new_cap == m_capacity)
            return;
        T *newdata = new T[new_cap];
        for (size_t i = 0; i < m_size; i++)
        {
            newdata[i] = data[i];
        }
        delete[] data;
        data = newdata;
        m_capacity = new_cap;
    }

    //*几个常用函数
    bool empty() const
    {
        if (m_size == 0)
            return true;
        return false;
    }

    void pop_back()
    {
        if (empty())
            return;
        m_size--;
    }

    void clear()
    {
        if (empty())
            return;
        while (m_size > 0)
        {
            pop_back();
        }
    }

    T *begin()
    {
        return &data[0];
    }

    T *end()
    {
        return &data[m_size];
    }

    const T *begin() const
    {
        return &data[0];
    }

    const T *end() const
    {
        return &data[m_size];
    }
};