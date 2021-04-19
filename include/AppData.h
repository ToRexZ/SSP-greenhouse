#ifndef APPDATA_H
#define APPDATA_H

class AppData
{
private:
  bool systemState, otherStates;
  int userinput;
  double goalSettings;

public:
  AppData(/* args */);
  ~AppData();
};

AppData::AppData(/* args */)
{
}

AppData::~AppData()
{
}

#endif