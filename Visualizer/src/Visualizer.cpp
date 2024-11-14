#include <QFileDialog>
#include <QGridLayout>
#include "Visualizer.h"
#include "STLReader.h"
#include "DataWriter.h"


Visualizer::Visualizer(QWidget* parent)
    : QMainWindow(parent)
{
    setupUi();

    connect(loadFile, &QPushButton::clicked, this, &Visualizer::onLoadFileClick);
    connect(translate, &QPushButton::clicked, this, &Visualizer::onTranslateClick);
}

Visualizer::~Visualizer()
{

}

void Visualizer::setupUi()
{
    loadFile = new QPushButton("Load File", this);
    translate = new QPushButton("Translate", this);
    loadEdit = new QTextEdit(this);
    translateEdit = new QTextEdit(this);

    QGridLayout* layout = new QGridLayout(this);

    layout->addWidget(loadFile, 0, 0);
    layout->addWidget(translate, 1, 0);
    layout->addWidget(loadEdit, 0, 1);
    layout->addWidget(translateEdit, 1, 1);

    QWidget* centralWidget = new QWidget(this);
    setCentralWidget(centralWidget);
    centralWidget->setLayout(layout);
}

void  Visualizer::onLoadFileClick()
{
    QString fileName = QFileDialog::getOpenFileName(this,
        tr("Open STL File"), "", tr("STL Files (*.stl)"));

    if (!fileName.isEmpty())
    {
        loadEdit->clear();
        
        STLReader reader;
        reader.read(fileName.toStdString(), triangulation);

        loadEdit->setText("File loaded successfully from - " + fileName);
    }
}

void Visualizer::onTranslateClick()
{
    QString fileName = QFileDialog::getSaveFileName(this,
        tr("Save Data File"), "/data", tr("Data Files (*.dat)"));

    if (!fileName.isEmpty())
    {
        translateEdit->clear();
        
        DataWriter writer;
        writer.Write(fileName.toStdString(), triangulation);

        translateEdit->setText("File saved successfully to - " + fileName);

    }
}
