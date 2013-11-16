
#ifndef __SCOPED_PTR
#define __SCOPED_PTR

template<typename T>
class scoped_ptr
{
public:
    scoped_ptr(T * value)
    {
        m_value = value;
    }

    ~scoped_ptr()
    {
        if (NULL != m_value)
        {
            delete [] m_value;
        }
    }

    T * get() { return m_value; }

    T & operator * () { return *m_value; }

    T * operator->() { return m_value; }

private:
    T * m_value;
};

#endif
