#ifndef _REPORT_CSV_H
#define _REPORT_CSV_H

#include "config.h"
#include "net/capture_engine.h"
#include "report/report.h"
#include "util/stats.h"

namespace mckeys {

class CsvReport : public Report
{
 public:
  CsvReport(const Config* cfg, const CaptureEngine* engine, Stats* stats);
  virtual void render();

 protected:
  void renderStats(std::deque<Stat> q);

 private:
  const CaptureEngine* engine;
  Stats* stats;
};

} // end namespace

#endif
