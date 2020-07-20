
// bool vitalsAreOk(float bpm, float spo2, float respRate) {
  
//   bool badBpm = bpm < 70 || bpm > 150;
//   bool badspo2 = spo2 < 80;
//   bool badRespRate = respRate < 30 || respRate > 60;
  
//   if( badBpm || badspo2 || badRespRate) {
//     return false;
//   }
//   return true;
// }

bool vitalsAreOk(float bpm, float spo2, float respRate) {

  if( !isBpmOk(bpm) || !isSpo2Ok(spo2) || !isRespRateOk(respRate)) {
    return false;
  }
  return true;
}

bool isBpmOk(float bpm) {
  if( bpm < 70 || bpm > 150) {
    return false;
  }
  return true;
}

bool isSpo2Ok(float spo2) {
  if( spo2 < 80) {
    return false;
  }
  return true;
}

bool isRespRateOk(float respRate) {
  if( respRate < 30 || respRate > 60) {
    return false;
  }
  return true;
}

