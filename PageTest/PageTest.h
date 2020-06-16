#pragma once

#include <QtWidgets/QMainWindow>
#include "ImageViewerX/ImageViewerX.h"
#include "VideoPlayerX.h"
#include "PaintX/PaintX.h"
#include "NotepadX/NotepadXWindow.h"
#include "CameraX/CameraX.h"
#include "ui_PageTest.h"

class PageTest : public QMainWindow
{
    Q_OBJECT

public:
    PageTest(QWidget *parent = Q_NULLPTR);

private:
    Ui::PageTestClass ui;
};
