#include "paramchecker.h"
#include <gtest/gtest.h>
 
TEST(VitalsTest, BPM) { 
  VitalData data = VitalData(80, 70, 35);
  bool result = data.isVitalsOk();
  ASSERT_EQ(false, result);
}
 
int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
