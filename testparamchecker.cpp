#include "paramchecker.h"
#include "paramchecker.cpp"
#include <gtest/gtest.h>
 
TEST(VitalsTest, BPM) { 
  VitalData data;
  data.setBpm(80);
  data.setSpo2(70);
  data.setRespRate(35);
  bool result = data.isVitalsOk();
  ASSERT_EQ(false, result);
}
 
int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
