#include "vitals.h"
#include <gtest/gtest.h>
// bad vitals -- bpm < 70 || bpm > 150 ,  spo2 < 80, respRate < 30 || respRate > 60

TEST(VitalTest, GOOD_VITALS) { 
   BPM bpm;
   SPO2 spo2;
   RespRate respRate;
 
   bpm.setValue(80);
   spo2.setValue(85);
   respRate.setValue(30);
   
    bool  isVitalsOK =  bpm.isVitalOk() && spo2.isVitalOk() && respRate.isVitalOk() ;
    ASSERT_EQ(true, isVitalsOK);
}

TEST(VitalTest, BAD_BPM) { 
   BPM bpm;
   SPO2 spo2;
   RespRate respRate;
 
   bpm.setValue(60);
   spo2.setValue(85);
   respRate.setValue(35);
   
    bool  isVitalsOK =  bpm.isVitalOk() && spo2.isVitalOk() && respRate.isVitalOk() ;
    ASSERT_EQ(true, isVitalsOK);
}

TEST(VitalTest, BAD_SPO2) { 
   BPM bpm;
   SPO2 spo2;
   RespRate respRate;
 
   bpm.setValue(80);
   spo2.setValue(70);
   respRate.setValue(35);
   
    bool  isVitalsOK =  bpm.isVitalOk() && spo2.isVitalOk() && respRate.isVitalOk() ;
    ASSERT_EQ(true, isVitalsOK);
}

TEST(VitalTest, BAD_RESPRATE) { 

   BPM bpm;
   SPO2 spo2;
   RespRate respRate;
 
   bpm.setValue(80);
   spo2.setValue(85);
   respRate.setValue(20);
   
    bool  isVitalsOK =  bpm.isVitalOk() && spo2.isVitalOk() && respRate.isVitalOk() ;
    ASSERT_EQ(true, isVitalsOK);
}

TEST(VitalTest, BAD_VITALS) { 

   BPM bpm;
   SPO2 spo2;
   RespRate respRate;
 
   bpm.setValue(60);
   spo2.setValue(70);
   respRate.setValue(20);
   
    bool  isVitalsOK =  bpm.isVitalOk() && spo2.isVitalOk() && respRate.isVitalOk() ;
    ASSERT_EQ(true, isVitalsOK);
}

 int main(int argc, char **argv) {
     testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
