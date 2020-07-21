#include "paramchecker.h"
#include <gtest/gtest.h>
// bad vitals -- bpm < 70 || bpm > 150 ,  spo2 < 80, respRate < 30 || respRate > 60

TEST(VitalDataTest, GOOD_VITALS) { 
  VitalData data = VitalData(80, 85, 35);
  bool result = data.isVitalsOk();
  ASSERT_EQ(true, result);
}

TEST(VitalDataTest, BAD_BPM) { 
  VitalData data = VitalData(60, 85, 35);
  bool result = data.isVitalsOk();
  ASSERT_EQ(false, result);
}

TEST(VitalDataTest, BAD_SPO2) { 
  VitalData data = VitalData(80, 70, 35);
  bool result = data.isVitalsOk();
  ASSERT_EQ(false, result);
}

TEST(VitalDataTest, BAD_RESPRATE) { 
  VitalData data = VitalData(80, 85, 20);
  bool result = data.isVitalsOk();
  ASSERT_EQ(false, result);
}

TEST(VitalDataTest, BAD_VITALS) { 
  VitalData data = VitalData(60, 70, 20);
  bool result = data.isVitalsOk();
  ASSERT_EQ(false, result);
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
