#include <QApplciation>
#include "QLumpyWindow"

int main(int argc, char** argv)
{
  QApplication app(argc, argv);
  QLumpyWindow qlw;

  qlw.show();

  return app.exec();
}
