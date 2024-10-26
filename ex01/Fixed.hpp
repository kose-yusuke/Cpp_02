/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koseki.yusuke <koseki.yusuke@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 17:10:50 by koseki.yusu       #+#    #+#             */
/*   Updated: 2024/10/26 20:55:21 by koseki.yusu      ###   ########.fr       */
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
    int getRawBits(void) const;
    void setRawBits(int const raw);
    float toFloat( void ) const;
    int toInt( void ) const;
};

std::ostream &operator<<(std::ostream &o, const Fixed &fixed);