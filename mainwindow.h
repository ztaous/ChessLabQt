#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QIcon>
#include <QMap>
#include <QString>

#include "chess_logic/board.h"
#include "chess_logic/piece.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    chess::Board* board;
    QMap<QString, QIcon> pieceIcons;

    void loadIcons();
    void prepareBoard();
    void squareClicked(int row, int col);
    void refreshBoard();
    QString pieceTypeToString(chess::PieceType type);
    
};
#endif // MAINWINDOW_H
