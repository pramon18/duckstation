#pragma once

#include <QtWidgets/QWidget>

#include "ui_consolesettingswidget.h"

class QtHostInterface;
class SettingsDialog;

class ConsoleSettingsWidget : public QWidget
{
  Q_OBJECT

public:
  explicit ConsoleSettingsWidget(QtHostInterface* host_interface, QWidget* parent, SettingsDialog* dialog);
  ~ConsoleSettingsWidget();

private Q_SLOTS:
  void onEnableCPUClockSpeedControlChecked(int state);
  void onCPUClockSpeedValueChanged(int value);
  void updateCPUClockSpeedLabel();
  void onCDROMReadSpeedupValueChanged(int value);
  void onEmulationSpeedIndexChanged(int index);
  void onFastForwardSpeedIndexChanged(int index);
  void onTurboSpeedIndexChanged(int index);

private:
  void calculateCPUClockValue();

  Ui::ConsoleSettingsWidget m_ui;

  QtHostInterface* m_host_interface;
};
