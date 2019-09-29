//
// Created by Beef Erikson Studios on 9/29/2019.
//

#ifndef DEV210X_ENCAPSULATION_H
#define DEV210X_ENCAPSULATION_H

class Encapsulation {
// constructors
public:
    // default
    Encapsulation()
    : m_width{ 1 }, m_height{ 1 }
    {}

    // supplied values
    Encapsulation(int initial_width, int initial_height)
    : m_width{initial_width}, m_height{initial_height}
    {}

// methods
public:
    int get_area()
    {
        // note we don't necessarily need 'this' keyword; here to clarify
        return this->m_width * this->m_height;
    }

    void resize(int new_width, int new_height)
    {
        m_width = new_width;
        m_height = new_height;
    }

    int get_width() { return m_width; }
    int get_height() { return m_height; }

// values
private:
    int m_width;
    int m_height;
};

#endif //DEV210X_ENCAPSULATION_H
