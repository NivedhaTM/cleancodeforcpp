


bool vitalsAreOk(float bpm, float spo2, float respRate) {
  
  bool badBpm = bpm < 70 || bpm > 150;
  bool badspo2 = spo2 < 80;
  bool badRespRate = respRate < 30 || respRate > 60;
  
  if( badBpm || badspo2 || badRespRate) {
    return false;
  }
  return true;
}

