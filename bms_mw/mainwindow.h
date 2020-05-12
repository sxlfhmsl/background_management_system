#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

private:
    /// private methods

    /**
     * @brief init_log4qt
     * @details init plugin log4qt
     * @author LuSheng
     * @date 2020-05-12
     */
    void init_log4qt();

    /**
     * @brief switch_login
     * @details switch login page
     * @author LuSheng
     * @date 2020-05-12
     */
    void switch_login();
};
#endif // MAINWINDOW_H
