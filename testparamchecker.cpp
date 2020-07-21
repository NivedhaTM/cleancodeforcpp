#include "paramchecker.h"
#include <gtest/gtest.h>
 
TEST(VitalsTest, BPM) { 
  VitalData data;
  data.setBpm(80);
  data.setSpo2(80);
  data.setRespRate(80);
  
  ASSERT_EQ(true, data.isVitalsOk());
}
 
TEST(VitalsTest, SPO2) {
    ASSERT_EQ(false, vitalsAreOk(100, 40, 50));
}
 
int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
