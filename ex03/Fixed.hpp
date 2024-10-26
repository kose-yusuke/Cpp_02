/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koseki.yusuke <koseki.yusuke@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 17:10:50 by koseki.yusu       #+#    #+#             */
/*   Updated: 2024/10/26 21:11:43 by koseki.yusu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cmath>

class Fixed {
private:
    int value;
    static const int fractional_bits = 8;
public:
    Fixed();
    Fixed(const Fixed &other);
    Fixed(const int raw);
    Fixed(const float raw);
    ~Fixed();
    Fixed &operator=(const Fixed &other);
    bool operator>(Fixed fixed)const;
    bool operator<(Fixed fixed)const;
    bool operator>=(Fixed fixed)const;
    bool operator<=(Fixed fixed)const;
    bool operator==(Fixed fixed)const;
    bool operator!=(Fixed fixed)const;
    // Arithmetic Operators
    float operator+(Fixed fixed)const;
    float operator-(Fixed fixed)const;
    float operator*(Fixed fixed)const;
    float operator/(Fixed fixed)const;
    Fixed operator++();
    Fixed operator--();
    Fixed operator++(int);
    Fixed operator--(int);
    int getRawBits(void) const;
    void setRawBits(int const raw);
    float toFloat( void ) const;
    int toInt( void ) const;
    static Fixed &min(Fixed &first, Fixed &second);
    static const Fixed &min(Fixed const &first, Fixed const &second);
    static Fixed &max(Fixed &first, Fixed &second);
    static const Fixed &max(Fixed const &first, const Fixed &second);
};

std::ostream &operator<<(std::ostream &o, const Fixed &fixed);