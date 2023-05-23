//Do Hard Things

Monday.addEventListener("onLoad", handleAlx);

function handleAlx() {
  if (!dayDonBreak && !eyesDonClear) {
    sleepAgain();
    return;
  }
  let studyHours = 10;
  unavailable();
  themNoDeySeeMe();
  loginIntranet();
  Brain.open = true;
  Morale.high = true;

  for (let i = 0; i < studyHours; i++) {
    previewTask();
    read();
    watchVideo();
    takeNotes();

    if (isConceptUnderstood) {
      break;
    }
  }
  attemptTask(); //Twitter @Cr8steveDesign
}
