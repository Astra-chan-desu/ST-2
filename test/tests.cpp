// Copyright 2025 UNN-CS Team
#define _USE_MATH_DEFINES
#include <cstdint>
#include <cmath>
#include "tasks.h"
#include <gtest/gtest.h>

#include "circle.h"
TEST(st2_strakhov, getRadius1) {
    Circle c(1);
    EXPECT_EQ(c.getRadius(), 1);
}
TEST(st2_strakhov, getRadius2) {
    Circle c(2);
    EXPECT_EQ(c.getRadius(), 2);
}
TEST(st2_strakhov, getRadius3) {
    Circle c(3);
    EXPECT_EQ(c.getRadius(), 3);
}
TEST(st2_strakhov, getFerence1) {
    Circle c(1);
    EXPECT_EQ(c.getFerence(), 2 * M_PI);
}
TEST(st2_strakhov, getFerence2) {
    Circle c(2);
    EXPECT_EQ(c.getFerence(), 4 * M_PI);
}
TEST(st2_strakhov, getFerence3) {
    Circle c(3);
    EXPECT_EQ(c.getFerence(), 6 * M_PI);
}
TEST(st2_strakhov, getArea1) {
    Circle c(1);
    EXPECT_EQ(c.getArea(), 1 * M_PI);
}
TEST(st2_strakhov, getArea2) {
    Circle c(2);
    EXPECT_EQ(c.getArea(), 4 * M_PI);
}
TEST(st2_strakhov, getArea3) {
    Circle c(3);
    EXPECT_EQ(c.getArea(), 9 * M_PI);
}
TEST(st2_strakhov, setRadius1) {
    Circle c(1);
    c.setRadius(2);
    EXPECT_EQ(c.getRadius(), 2);
}
TEST(st2_strakhov, setRadius3) {
    Circle c(1);
    c.setRadius(3);
    EXPECT_EQ(c.getRadius(), 3);
}
TEST(st2_strakhov, setRadius4) {
    Circle c(1);
    c.setRadius(4);
    EXPECT_EQ(c.getRadius(), 4);
}
TEST(st2_strakhov, setFerence2) {
    Circle c(1);
    c.setFerence(2);
    EXPECT_EQ(c.getFerence(), 2);
}
TEST(st2_strakhov, setFerence3) {
    Circle c(1);
    c.setFerence(3);
    EXPECT_EQ(c.getFerence(), 3);
}
TEST(st2_strakhov, setFerence4) {
    Circle c(1);
    c.setFerence(4);
    EXPECT_EQ(c.getFerence(), 4);
}
TEST(st2_strakhov, setArea2) {
    Circle c(1);
    c.setArea(2);
    EXPECT_EQ(c.getArea(), 2);
}
TEST(st2_strakhov, setArea3) {
    Circle c(1);
    c.setArea(3);
    EXPECT_EQ(c.getArea(), 3);
}
TEST(st2_strakhov, setArea4) {
    Circle c(1);
    c.setArea(4);
    EXPECT_EQ(c.getArea(), 4);
}
TEST(st2_strakhov, EarthandRopeTest) {
    EXPECT_DOUBLE_EQ(EarthandRope(), 0.00015915);
}
TEST(st2_strakhov, SwimmingpoolTest) {
    EXPECT_DOUBLE_EQ(Swimmingpool(),28274.333882308136);
}
