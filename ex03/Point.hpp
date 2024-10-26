/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koseki.yusuke <koseki.yusuke@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 19:55:57 by koseki.yusu       #+#    #+#             */
/*   Updated: 2024/10/26 21:12:01 by koseki.yusu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cmath>


#include "Fixed.hpp"

class Point {
private:
    Fixed x;
    Fixed y;

public:
    Point();
    Point(const float x, const float y);
    Point(const Point &other);
    ~Point();
    Point &operator=(const Point &other);
    Fixed getX() const;
    Fixed getY() const;
};

std::ostream	&operator<<(std::ostream &o, Point const point);
