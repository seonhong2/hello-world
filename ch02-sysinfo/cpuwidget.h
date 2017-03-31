#ifndef CPUWIDGET_H
#define CPUWIDGET_H

#include <QtCharts/QPieSeries>
#include "sysinfo.h"
#include "sysinfowidget.h"


class CpuWidget : public SysInfoWidget
{
    Q_OBJECT

public:
    explicit CpuWidget(QWidget* parent = 0);

    // SysInfoWidget interface
public slots:
    void updateSeries() override;

private:
    QtCharts::QPieSeries* mSeries;
};

#endif // CPUWIDGET_H
