// Copyright 2023 Zanozin Danila

#include <gtest/gtest.h>

#include "include/complex_number.h"

TEST(Zanozin_Danila_ComplexNumberTest, Test_Get) {
  ComplexNumber x(1.2, 2.1);

  double re = x.getRe();
  double im = x.getIm();

  ASSERT_EQ(re, 1.2);
  ASSERT_EQ(im, 2.1);
}

TEST(Zanozin_Danila_ComplexNumberTest, Test_Set) {
  ComplexNumber x(2.0, 10.0);

  x.setRe(3.4);
  x.setIm(5.6);

  ASSERT_EQ(x.getRe(), 3.4);
  ASSERT_EQ(x.getIm(), 5.6);
}

TEST(Zanozin_Danila_ComplexNumberTest, Test_Difference) {
  ComplexNumber x(7.8, 10.0);
  ComplexNumber y(4.5, 6.7);

  ComplexNumber result = x - y;

  ASSERT_EQ(result.getRe(), 3.3);
  ASSERT_EQ(result.getIm(), 3.3);
}
