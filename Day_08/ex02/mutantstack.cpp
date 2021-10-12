#include "mutantstack.hpp"

MutantStack<T>::iterator::iterator( pointer ptr ) : _m_ptr( ptr ) {}

reference       MutantStack<T>::iterator::operator*( void ) const {
    return *_m_ptr;
}

pointer     MutantStack<T>::iterator::operator->( void ) {
    return _m_ptr;
}

iterator&   MutantStack<T>::iterator::operator++( void ) {
    _m_ptr--; return *this;
}  

iterator    MutantStack<T>::iterator::operator++( int ) {
    iterator tmp = *this; --(*this);
    return tmp;
}

iterator&   MutantStack<T>::iterator::operator--( void ) {
    _m_ptr++; return *this;
}  

iterator    MutantStack<T>::iterator::operator--( int ) {
    iterator tmp = *this; ++(*this);
    return tmp;
}

bool        MutantStack<T>::iterator::operator== ( const iterator& b ) {
    return this->_m_ptr == b._m_ptr;
}

bool        MutantStack<T>::iterator::operator!= ( const iterator& b ) {
    return this->_m_ptr != b._m_ptr;
}