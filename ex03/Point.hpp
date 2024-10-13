/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koseki.yusuke <koseki.yusuke@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 19:55:57 by koseki.yusu       #+#    #+#             */
/*   Updated: 2024/10/13 23:41:51 by koseki.yusu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include <iostream>
#include <cmath>


#include "Fixed.hpp"

class Point {
private:
    Fixed x;
    Fixed y;

public:
    // コンストラクタ
    Point();
    Point(const float x, const float y);
    Point(const Point &other);
    ~Point();
    //オーバーロード演算子
    Point &operator=(const Point &other);
    // 座標を取得する
    Fixed getX() const;
    Fixed getY() const;
};

// Overload for ostream
std::ostream	&operator<<(std::ostream &o, Point const point);

#endif