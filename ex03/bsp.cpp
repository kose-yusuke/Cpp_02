/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koseki.yusuke <koseki.yusuke@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 19:56:01 by koseki.yusu       #+#    #+#             */
/*   Updated: 2024/10/13 23:37:10 by koseki.yusu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

float area(Point const a, Point const b, Point const c) {
    return std::abs((a.getX() * (b.getY() - c.getY()) + 
                     b.getX() * (c.getY() - a.getY()) + 
                     c.getX() * (a.getY() - b.getY())) / 2.0);
}

bool bsp(Point const a, Point const b, Point const c, Point const point) {
    float A = area(a, b, c);
    float A1 = area(point, b, c);
    float A2 = area(a, point, c);
    float A3 = area(a, b, point);
    return (A == A1 + A2 + A3) && (A1 > 0 && A2 > 0 && A3 > 0);
}