
bool isBpmOk(float bpm);
bool isSpo2Ok(float spo2);
bool isRespRateOk(float respRate);

bool vitalsAreOk(float bpm, float spo2, float respRate) {
  return !( isBpmOk(bpm) || isSpo2Ok(spo2) || isRespRateOk(respRate));
}

bool isBpmOk(float bpm) {
 return ( bpm < 70 || bpm > 150);
}

bool isSpo2Ok(float spo2) {
  return  spo2 < 80;
}

bool isRespRateOk(float respRate) {
  return (respRate < 30 || respRate > 60);
}
