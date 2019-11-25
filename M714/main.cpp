#include "mainwindow.h"
#include <QApplication>

void myMessageOutput(QtMsgType type, const QMessageLogContext &context, const QString &msg)
{
    //QString txt;
    QByteArray localMsg = msg.toLocal8Bit();
    switch (type) {
    case QtDebugMsg:
        fprintf(stderr, "Debug: %s (%s:%u, %s)\n", localMsg.constData(), context.file, context.line, context.function);
        //txt = QString("Debug: %1").arg(msg);
        break;
    case QtWarningMsg:
        fprintf(stderr, "Warning: %s (%s:%u, %s)\n", localMsg.constData(), context.file, context.line, context.function);
        //txt = QString("Warning: %1").arg(msg);
        break;
    case QtCriticalMsg:
        fprintf(stderr, "Critical: %s (%s:%u, %s)\n", localMsg.constData(), context.file, context.line, context.function);
        //txt = QString("Critical: %1").arg(msg);
        break;
    case QtFatalMsg:
        fprintf(stderr, "Fatal: %s (%s:%u, %s)\n", localMsg.constData(), context.file, context.line, context.function);
        //txt = QString("Fatal: %1").arg(msg);
        abort();
    default:
        //txt = QString(msg);
        break;
    }

    /*QFile outFile("Model714.log");
    if(outFile.open(QIODevice::WriteOnly | QIODevice::Append)){
        outFile.write(txt.toStdString().c_str());
        outFile.write(QByteArray().append('\n'));
        outFile.close();
    }*/
}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //qInstallMessageHandler(myMessageOutput);

    MainWindow w;
    w.show();

    return a.exec();
}
