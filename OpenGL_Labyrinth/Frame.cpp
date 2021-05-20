//
//  Frame.cpp
//  OpenGL_Labyrinth
//
//  Created by take on 2021/05/20.
//

#include "Frame.hpp"

Position::Position()
: x{ 0.0 }, y{ 0.0 } {}

Position::Position(GLfloat xPosi, GLfloat yPosi)
: x{xPosi}, y{yPosi} {}



Size::Size()
:width { 0.0 }, height{ 0.0 } {}

Size::Size(GLfloat width, GLfloat height)
: width{width}, height{height} {}

Frame::Frame(Size s, Position p)
: size(s.width, s.height), position(p.x, p.y) {}

Frame::Frame(Size s, GLfloat x, GLfloat y)
: size(s.width, s.height), position(x, y) {}

Frame::Frame(GLfloat width, GLfloat height, Position p)
: size(width, height), position(p.x, p.y) {}

Frame::Frame(GLfloat width, GLfloat height, GLfloat x, GLfloat y)
: size(width, height), position(x,y) {}
