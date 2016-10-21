/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGroupBox *SurveyParticipantGroup;
    QVBoxLayout *verticalLayout;
    QCheckBox *Anonymous;
    QHBoxLayout *FirstNameLayout;
    QLabel *FirstName;
    QSpacerItem *AnonSpacer1;
    QLineEdit *FirstNameEdit;
    QHBoxLayout *MiddleNameLayout;
    QLabel *MiddleName;
    QSpacerItem *AnonSpacer2;
    QLineEdit *MiddleNameEdit;
    QHBoxLayout *LastNameLayout;
    QLabel *LastName;
    QSpacerItem *AnonSpacer3;
    QLineEdit *LastNameEdit;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *FunRatingLayout;
    QLabel *FunRating;
    QSpacerItem *RatingSpacer1;
    QSpinBox *FunRatingSpinBox;
    QHBoxLayout *ArtRatingLayout;
    QLabel *ArtRating;
    QSpacerItem *RatingSpacer2;
    QSpinBox *ArtRatingSpinBox;
    QHBoxLayout *SmoothRatingLayout;
    QLabel *PlayerMovementRating;
    QSpacerItem *RatingSpacer3;
    QSpinBox *PlayerMovementRatingSpinBox;
    QHBoxLayout *SoundRatingLayout;
    QLabel *SoundRating;
    QSpacerItem *RatingSpacer4;
    QSpinBox *SoundRatingSpinBox;
    QHBoxLayout *RoomRatingLayout;
    QLabel *RoomRating;
    QSpacerItem *RatingSpacer5;
    QSpinBox *RoomRatingSpinBox;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGroupBox *groupBox_4;
    QSlider *HowLikely1_3;
    QLabel *label_7;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_8;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_9;
    QGroupBox *groupBox_5;
    QSlider *HowLikely1_4;
    QLabel *label_10;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_11;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_12;
    QGroupBox *groupBox_6;
    QSlider *HowLikely1_5;
    QLabel *label_13;
    QWidget *layoutWidget_4;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_14;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_15;
    QGroupBox *groupBox_7;
    QSlider *HowLikely1_6;
    QLabel *label_16;
    QWidget *layoutWidget_5;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_17;
    QSpacerItem *horizontalSpacer_6;
    QLabel *label_18;
    QWidget *widget;
    QGroupBox *groupBox_2;
    QSlider *HowLikely1;
    QLabel *label_3;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QLabel *label_2;
    QGroupBox *groupBox_3;
    QSlider *HowLikely1_2;
    QLabel *label_4;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_6;
    QGroupBox *groupBox_8;
    QWidget *layoutWidget2;
    QVBoxLayout *TimePlayedLayout;
    QRadioButton *radioButton_5;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QTextEdit *CommentsConcerns;
    QWidget *layoutWidget3;
    QHBoxLayout *SubmitSurveyLayout;
    QLabel *SubmitSurvey;
    QDialogButtonBox *SubmitSurveyOkCancel;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1240, 720);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        SurveyParticipantGroup = new QGroupBox(centralWidget);
        SurveyParticipantGroup->setObjectName(QStringLiteral("SurveyParticipantGroup"));
        SurveyParticipantGroup->setGeometry(QRect(20, 10, 351, 141));
        verticalLayout = new QVBoxLayout(SurveyParticipantGroup);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        Anonymous = new QCheckBox(SurveyParticipantGroup);
        Anonymous->setObjectName(QStringLiteral("Anonymous"));

        verticalLayout->addWidget(Anonymous);

        FirstNameLayout = new QHBoxLayout();
        FirstNameLayout->setSpacing(6);
        FirstNameLayout->setObjectName(QStringLiteral("FirstNameLayout"));
        FirstName = new QLabel(SurveyParticipantGroup);
        FirstName->setObjectName(QStringLiteral("FirstName"));

        FirstNameLayout->addWidget(FirstName);

        AnonSpacer1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        FirstNameLayout->addItem(AnonSpacer1);

        FirstNameEdit = new QLineEdit(SurveyParticipantGroup);
        FirstNameEdit->setObjectName(QStringLiteral("FirstNameEdit"));

        FirstNameLayout->addWidget(FirstNameEdit);


        verticalLayout->addLayout(FirstNameLayout);

        MiddleNameLayout = new QHBoxLayout();
        MiddleNameLayout->setSpacing(6);
        MiddleNameLayout->setObjectName(QStringLiteral("MiddleNameLayout"));
        MiddleName = new QLabel(SurveyParticipantGroup);
        MiddleName->setObjectName(QStringLiteral("MiddleName"));

        MiddleNameLayout->addWidget(MiddleName);

        AnonSpacer2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        MiddleNameLayout->addItem(AnonSpacer2);

        MiddleNameEdit = new QLineEdit(SurveyParticipantGroup);
        MiddleNameEdit->setObjectName(QStringLiteral("MiddleNameEdit"));
        MiddleNameEdit->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MiddleNameEdit->sizePolicy().hasHeightForWidth());
        MiddleNameEdit->setSizePolicy(sizePolicy);

        MiddleNameLayout->addWidget(MiddleNameEdit);


        verticalLayout->addLayout(MiddleNameLayout);

        LastNameLayout = new QHBoxLayout();
        LastNameLayout->setSpacing(6);
        LastNameLayout->setObjectName(QStringLiteral("LastNameLayout"));
        LastName = new QLabel(SurveyParticipantGroup);
        LastName->setObjectName(QStringLiteral("LastName"));

        LastNameLayout->addWidget(LastName);

        AnonSpacer3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        LastNameLayout->addItem(AnonSpacer3);

        LastNameEdit = new QLineEdit(SurveyParticipantGroup);
        LastNameEdit->setObjectName(QStringLiteral("LastNameEdit"));

        LastNameLayout->addWidget(LastNameEdit);


        verticalLayout->addLayout(LastNameLayout);

        Anonymous->raise();
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(20, 190, 411, 171));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        FunRatingLayout = new QHBoxLayout();
        FunRatingLayout->setSpacing(6);
        FunRatingLayout->setObjectName(QStringLiteral("FunRatingLayout"));
        FunRating = new QLabel(groupBox);
        FunRating->setObjectName(QStringLiteral("FunRating"));

        FunRatingLayout->addWidget(FunRating);

        RatingSpacer1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        FunRatingLayout->addItem(RatingSpacer1);

        FunRatingSpinBox = new QSpinBox(groupBox);
        FunRatingSpinBox->setObjectName(QStringLiteral("FunRatingSpinBox"));
        FunRatingSpinBox->setAcceptDrops(false);
        FunRatingSpinBox->setMaximum(10);

        FunRatingLayout->addWidget(FunRatingSpinBox);


        verticalLayout_2->addLayout(FunRatingLayout);

        ArtRatingLayout = new QHBoxLayout();
        ArtRatingLayout->setSpacing(6);
        ArtRatingLayout->setObjectName(QStringLiteral("ArtRatingLayout"));
        ArtRating = new QLabel(groupBox);
        ArtRating->setObjectName(QStringLiteral("ArtRating"));

        ArtRatingLayout->addWidget(ArtRating);

        RatingSpacer2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        ArtRatingLayout->addItem(RatingSpacer2);

        ArtRatingSpinBox = new QSpinBox(groupBox);
        ArtRatingSpinBox->setObjectName(QStringLiteral("ArtRatingSpinBox"));
        ArtRatingSpinBox->setAcceptDrops(false);
        ArtRatingSpinBox->setMaximum(10);

        ArtRatingLayout->addWidget(ArtRatingSpinBox);


        verticalLayout_2->addLayout(ArtRatingLayout);

        SmoothRatingLayout = new QHBoxLayout();
        SmoothRatingLayout->setSpacing(6);
        SmoothRatingLayout->setObjectName(QStringLiteral("SmoothRatingLayout"));
        PlayerMovementRating = new QLabel(groupBox);
        PlayerMovementRating->setObjectName(QStringLiteral("PlayerMovementRating"));

        SmoothRatingLayout->addWidget(PlayerMovementRating);

        RatingSpacer3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        SmoothRatingLayout->addItem(RatingSpacer3);

        PlayerMovementRatingSpinBox = new QSpinBox(groupBox);
        PlayerMovementRatingSpinBox->setObjectName(QStringLiteral("PlayerMovementRatingSpinBox"));
        PlayerMovementRatingSpinBox->setAcceptDrops(false);
        PlayerMovementRatingSpinBox->setMaximum(10);

        SmoothRatingLayout->addWidget(PlayerMovementRatingSpinBox);


        verticalLayout_2->addLayout(SmoothRatingLayout);

        SoundRatingLayout = new QHBoxLayout();
        SoundRatingLayout->setSpacing(6);
        SoundRatingLayout->setObjectName(QStringLiteral("SoundRatingLayout"));
        SoundRating = new QLabel(groupBox);
        SoundRating->setObjectName(QStringLiteral("SoundRating"));

        SoundRatingLayout->addWidget(SoundRating);

        RatingSpacer4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        SoundRatingLayout->addItem(RatingSpacer4);

        SoundRatingSpinBox = new QSpinBox(groupBox);
        SoundRatingSpinBox->setObjectName(QStringLiteral("SoundRatingSpinBox"));
        SoundRatingSpinBox->setAcceptDrops(false);
        SoundRatingSpinBox->setMaximum(10);

        SoundRatingLayout->addWidget(SoundRatingSpinBox);


        verticalLayout_2->addLayout(SoundRatingLayout);

        RoomRatingLayout = new QHBoxLayout();
        RoomRatingLayout->setSpacing(6);
        RoomRatingLayout->setObjectName(QStringLiteral("RoomRatingLayout"));
        RoomRating = new QLabel(groupBox);
        RoomRating->setObjectName(QStringLiteral("RoomRating"));

        RoomRatingLayout->addWidget(RoomRating);

        RatingSpacer5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        RoomRatingLayout->addItem(RatingSpacer5);

        RoomRatingSpinBox = new QSpinBox(groupBox);
        RoomRatingSpinBox->setObjectName(QStringLiteral("RoomRatingSpinBox"));
        RoomRatingSpinBox->setAcceptDrops(false);
        RoomRatingSpinBox->setMaximum(10);

        RoomRatingLayout->addWidget(RoomRatingSpinBox);


        verticalLayout_2->addLayout(RoomRatingLayout);

        scrollArea = new QScrollArea(centralWidget);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setGeometry(QRect(20, 380, 881, 281));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(scrollArea->sizePolicy().hasHeightForWidth());
        scrollArea->setSizePolicy(sizePolicy1);
        scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        scrollArea->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 862, 279));
        groupBox_4 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(10, 130, 381, 101));
        HowLikely1_3 = new QSlider(groupBox_4);
        HowLikely1_3->setObjectName(QStringLiteral("HowLikely1_3"));
        HowLikely1_3->setGeometry(QRect(10, 50, 361, 22));
        HowLikely1_3->setValue(50);
        HowLikely1_3->setOrientation(Qt::Horizontal);
        label_7 = new QLabel(groupBox_4);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(80, 80, 191, 16));
        layoutWidget_2 = new QWidget(groupBox_4);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(10, 10, 361, 22));
        horizontalLayout_13 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        horizontalLayout_13->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(layoutWidget_2);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_13->addWidget(label_8);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_3);

        label_9 = new QLabel(layoutWidget_2);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout_13->addWidget(label_9);

        groupBox_5 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setGeometry(QRect(470, 130, 381, 101));
        HowLikely1_4 = new QSlider(groupBox_5);
        HowLikely1_4->setObjectName(QStringLiteral("HowLikely1_4"));
        HowLikely1_4->setGeometry(QRect(10, 50, 361, 22));
        HowLikely1_4->setValue(50);
        HowLikely1_4->setOrientation(Qt::Horizontal);
        label_10 = new QLabel(groupBox_5);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(100, 80, 191, 16));
        layoutWidget_3 = new QWidget(groupBox_5);
        layoutWidget_3->setObjectName(QStringLiteral("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(10, 10, 361, 22));
        horizontalLayout_14 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        horizontalLayout_14->setContentsMargins(0, 0, 0, 0);
        label_11 = new QLabel(layoutWidget_3);
        label_11->setObjectName(QStringLiteral("label_11"));

        horizontalLayout_14->addWidget(label_11);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_4);

        label_12 = new QLabel(layoutWidget_3);
        label_12->setObjectName(QStringLiteral("label_12"));

        horizontalLayout_14->addWidget(label_12);

        groupBox_6 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        groupBox_6->setGeometry(QRect(10, 250, 381, 101));
        HowLikely1_5 = new QSlider(groupBox_6);
        HowLikely1_5->setObjectName(QStringLiteral("HowLikely1_5"));
        HowLikely1_5->setGeometry(QRect(10, 50, 361, 22));
        HowLikely1_5->setValue(50);
        HowLikely1_5->setOrientation(Qt::Horizontal);
        label_13 = new QLabel(groupBox_6);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(40, 80, 301, 16));
        layoutWidget_4 = new QWidget(groupBox_6);
        layoutWidget_4->setObjectName(QStringLiteral("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(10, 10, 361, 22));
        horizontalLayout_15 = new QHBoxLayout(layoutWidget_4);
        horizontalLayout_15->setSpacing(6);
        horizontalLayout_15->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        horizontalLayout_15->setContentsMargins(0, 0, 0, 0);
        label_14 = new QLabel(layoutWidget_4);
        label_14->setObjectName(QStringLiteral("label_14"));

        horizontalLayout_15->addWidget(label_14);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_5);

        label_15 = new QLabel(layoutWidget_4);
        label_15->setObjectName(QStringLiteral("label_15"));

        horizontalLayout_15->addWidget(label_15);

        groupBox_7 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
        groupBox_7->setGeometry(QRect(470, 250, 381, 101));
        HowLikely1_6 = new QSlider(groupBox_7);
        HowLikely1_6->setObjectName(QStringLiteral("HowLikely1_6"));
        HowLikely1_6->setGeometry(QRect(10, 50, 361, 22));
        HowLikely1_6->setValue(50);
        HowLikely1_6->setOrientation(Qt::Horizontal);
        label_16 = new QLabel(groupBox_7);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(110, 80, 161, 16));
        layoutWidget_5 = new QWidget(groupBox_7);
        layoutWidget_5->setObjectName(QStringLiteral("layoutWidget_5"));
        layoutWidget_5->setGeometry(QRect(10, 10, 361, 22));
        horizontalLayout_16 = new QHBoxLayout(layoutWidget_5);
        horizontalLayout_16->setSpacing(6);
        horizontalLayout_16->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_16->setObjectName(QStringLiteral("horizontalLayout_16"));
        horizontalLayout_16->setContentsMargins(0, 0, 0, 0);
        label_17 = new QLabel(layoutWidget_5);
        label_17->setObjectName(QStringLiteral("label_17"));

        horizontalLayout_16->addWidget(label_17);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_16->addItem(horizontalSpacer_6);

        label_18 = new QLabel(layoutWidget_5);
        label_18->setObjectName(QStringLiteral("label_18"));

        horizontalLayout_16->addWidget(label_18);

        widget = new QWidget(scrollAreaWidgetContents);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 0, 881, 451));
        groupBox_2 = new QGroupBox(widget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(0, 0, 381, 101));
        HowLikely1 = new QSlider(groupBox_2);
        HowLikely1->setObjectName(QStringLiteral("HowLikely1"));
        HowLikely1->setGeometry(QRect(10, 50, 361, 22));
        HowLikely1->setValue(10);
        HowLikely1->setOrientation(Qt::Horizontal);
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(80, 80, 221, 16));
        layoutWidget = new QWidget(groupBox_2);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 361, 22));
        horizontalLayout_11 = new QHBoxLayout(layoutWidget);
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        horizontalLayout_11->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_11->addWidget(label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_11->addWidget(label_2);

        groupBox_3 = new QGroupBox(widget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(480, 0, 381, 101));
        HowLikely1_2 = new QSlider(groupBox_3);
        HowLikely1_2->setObjectName(QStringLiteral("HowLikely1_2"));
        HowLikely1_2->setGeometry(QRect(10, 50, 361, 22));
        HowLikely1_2->setValue(50);
        HowLikely1_2->setOrientation(Qt::Horizontal);
        label_4 = new QLabel(groupBox_3);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(50, 80, 291, 20));
        layoutWidget1 = new QWidget(groupBox_3);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 10, 361, 22));
        horizontalLayout_12 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        horizontalLayout_12->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget1);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_12->addWidget(label_5);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_2);

        label_6 = new QLabel(layoutWidget1);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_12->addWidget(label_6);

        groupBox_2->raise();
        groupBox_2->raise();
        groupBox_3->raise();
        scrollArea->setWidget(scrollAreaWidgetContents);
        groupBox_8 = new QGroupBox(centralWidget);
        groupBox_8->setObjectName(QStringLiteral("groupBox_8"));
        groupBox_8->setGeometry(QRect(540, 10, 241, 161));
        layoutWidget2 = new QWidget(groupBox_8);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(10, 30, 114, 111));
        TimePlayedLayout = new QVBoxLayout(layoutWidget2);
        TimePlayedLayout->setSpacing(6);
        TimePlayedLayout->setContentsMargins(11, 11, 11, 11);
        TimePlayedLayout->setObjectName(QStringLiteral("TimePlayedLayout"));
        TimePlayedLayout->setContentsMargins(0, 0, 0, 0);
        radioButton_5 = new QRadioButton(layoutWidget2);
        radioButton_5->setObjectName(QStringLiteral("radioButton_5"));

        TimePlayedLayout->addWidget(radioButton_5);

        radioButton = new QRadioButton(layoutWidget2);
        radioButton->setObjectName(QStringLiteral("radioButton"));

        TimePlayedLayout->addWidget(radioButton);

        radioButton_2 = new QRadioButton(layoutWidget2);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));

        TimePlayedLayout->addWidget(radioButton_2);

        radioButton_3 = new QRadioButton(layoutWidget2);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));

        TimePlayedLayout->addWidget(radioButton_3);

        radioButton_4 = new QRadioButton(layoutWidget2);
        radioButton_4->setObjectName(QStringLiteral("radioButton_4"));

        TimePlayedLayout->addWidget(radioButton_4);

        CommentsConcerns = new QTextEdit(centralWidget);
        CommentsConcerns->setObjectName(QStringLiteral("CommentsConcerns"));
        CommentsConcerns->setGeometry(QRect(470, 200, 431, 161));
        layoutWidget3 = new QWidget(centralWidget);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(990, 630, 237, 25));
        SubmitSurveyLayout = new QHBoxLayout(layoutWidget3);
        SubmitSurveyLayout->setSpacing(6);
        SubmitSurveyLayout->setContentsMargins(11, 11, 11, 11);
        SubmitSurveyLayout->setObjectName(QStringLiteral("SubmitSurveyLayout"));
        SubmitSurveyLayout->setContentsMargins(0, 0, 0, 0);
        SubmitSurvey = new QLabel(layoutWidget3);
        SubmitSurvey->setObjectName(QStringLiteral("SubmitSurvey"));

        SubmitSurveyLayout->addWidget(SubmitSurvey);

        SubmitSurveyOkCancel = new QDialogButtonBox(layoutWidget3);
        SubmitSurveyOkCancel->setObjectName(QStringLiteral("SubmitSurveyOkCancel"));
        SubmitSurveyOkCancel->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        SubmitSurveyLayout->addWidget(SubmitSurveyOkCancel);

        MainWindow->setCentralWidget(centralWidget);
        layoutWidget->raise();
        SurveyParticipantGroup->raise();
        groupBox->raise();
        scrollArea->raise();
        groupBox_8->raise();
        CommentsConcerns->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1240, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
#ifndef QT_NO_SHORTCUT
        FirstName->setBuddy(FirstNameEdit);
        MiddleName->setBuddy(MiddleNameEdit);
        LastName->setBuddy(LastNameEdit);
        FunRating->setBuddy(FunRatingSpinBox);
        ArtRating->setBuddy(ArtRatingSpinBox);
        PlayerMovementRating->setBuddy(PlayerMovementRatingSpinBox);
        SoundRating->setBuddy(SoundRatingSpinBox);
        RoomRating->setBuddy(RoomRatingSpinBox);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(Anonymous, FirstNameEdit);
        QWidget::setTabOrder(FirstNameEdit, MiddleNameEdit);
        QWidget::setTabOrder(MiddleNameEdit, LastNameEdit);
        QWidget::setTabOrder(LastNameEdit, FunRatingSpinBox);
        QWidget::setTabOrder(FunRatingSpinBox, ArtRatingSpinBox);
        QWidget::setTabOrder(ArtRatingSpinBox, PlayerMovementRatingSpinBox);
        QWidget::setTabOrder(PlayerMovementRatingSpinBox, SoundRatingSpinBox);
        QWidget::setTabOrder(SoundRatingSpinBox, RoomRatingSpinBox);
        QWidget::setTabOrder(RoomRatingSpinBox, scrollArea);
        QWidget::setTabOrder(scrollArea, HowLikely1);
        QWidget::setTabOrder(HowLikely1, HowLikely1_2);
        QWidget::setTabOrder(HowLikely1_2, HowLikely1_3);
        QWidget::setTabOrder(HowLikely1_3, HowLikely1_4);
        QWidget::setTabOrder(HowLikely1_4, HowLikely1_5);
        QWidget::setTabOrder(HowLikely1_5, HowLikely1_6);
        QWidget::setTabOrder(HowLikely1_6, radioButton_5);
        QWidget::setTabOrder(radioButton_5, radioButton);
        QWidget::setTabOrder(radioButton, radioButton_2);
        QWidget::setTabOrder(radioButton_2, radioButton_3);
        QWidget::setTabOrder(radioButton_3, radioButton_4);
        QWidget::setTabOrder(radioButton_4, CommentsConcerns);

        retranslateUi(MainWindow);
        QObject::connect(Anonymous, SIGNAL(toggled(bool)), FirstNameEdit, SLOT(setDisabled(bool)));
        QObject::connect(Anonymous, SIGNAL(toggled(bool)), MiddleNameEdit, SLOT(setDisabled(bool)));
        QObject::connect(Anonymous, SIGNAL(toggled(bool)), LastNameEdit, SLOT(setDisabled(bool)));
        QObject::connect(Anonymous, SIGNAL(toggled(bool)), FirstNameEdit, SLOT(clear()));
        QObject::connect(Anonymous, SIGNAL(toggled(bool)), MiddleNameEdit, SLOT(clear()));
        QObject::connect(Anonymous, SIGNAL(toggled(bool)), LastNameEdit, SLOT(clear()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Survey", 0));
        SurveyParticipantGroup->setTitle(QApplication::translate("MainWindow", "Survey Participant", 0));
#ifndef QT_NO_TOOLTIP
        Anonymous->setToolTip(QApplication::translate("MainWindow", "This disables name input", 0));
#endif // QT_NO_TOOLTIP
        Anonymous->setText(QApplication::translate("MainWindow", "Remain Anonymous", 0));
        FirstName->setText(QApplication::translate("MainWindow", "1. First Name:", 0));
#ifndef QT_NO_TOOLTIP
        FirstNameEdit->setToolTip(QApplication::translate("MainWindow", "First Name", 0));
#endif // QT_NO_TOOLTIP
        FirstNameEdit->setText(QString());
        FirstNameEdit->setPlaceholderText(QApplication::translate("MainWindow", "Sander", 0));
        MiddleName->setText(QApplication::translate("MainWindow", "2. Middle Name:", 0));
#ifndef QT_NO_TOOLTIP
        MiddleNameEdit->setToolTip(QApplication::translate("MainWindow", "Middle Initial", 0));
#endif // QT_NO_TOOLTIP
        MiddleNameEdit->setPlaceholderText(QApplication::translate("MainWindow", "P.", 0));
        LastName->setText(QApplication::translate("MainWindow", "3. Last Name:", 0));
#ifndef QT_NO_TOOLTIP
        LastNameEdit->setToolTip(QApplication::translate("MainWindow", "Last Name", 0));
#endif // QT_NO_TOOLTIP
        LastNameEdit->setPlaceholderText(QApplication::translate("MainWindow", "Cohen", 0));
        groupBox->setTitle(QApplication::translate("MainWindow", "Rate the following out of 10 with 10 being the best.", 0));
        FunRating->setText(QApplication::translate("MainWindow", "1. How much fun did you have playing Operation Graduation:", 0));
#ifndef QT_NO_TOOLTIP
        FunRatingSpinBox->setToolTip(QApplication::translate("MainWindow", "1 Worst ... Best 10", 0));
#endif // QT_NO_TOOLTIP
        ArtRating->setText(QApplication::translate("MainWindow", "2. How much did you enjoy the art style:", 0));
#ifndef QT_NO_TOOLTIP
        ArtRatingSpinBox->setToolTip(QApplication::translate("MainWindow", "1 Worst ... Best 10", 0));
#endif // QT_NO_TOOLTIP
        PlayerMovementRating->setText(QApplication::translate("MainWindow", "3. How smooth did the player movement feel:", 0));
#ifndef QT_NO_TOOLTIP
        PlayerMovementRatingSpinBox->setToolTip(QApplication::translate("MainWindow", "1 Worst ... Best 10", 0));
#endif // QT_NO_TOOLTIP
        SoundRating->setText(QApplication::translate("MainWindow", "4. How much did you enjoy the sound and music:", 0));
#ifndef QT_NO_TOOLTIP
        SoundRatingSpinBox->setToolTip(QApplication::translate("MainWindow", "1 Worst ... Best 10", 0));
#endif // QT_NO_TOOLTIP
        RoomRating->setText(QApplication::translate("MainWindow", "5. How much did you enjoy the variance of the rooms:", 0));
#ifndef QT_NO_TOOLTIP
        RoomRatingSpinBox->setToolTip(QApplication::translate("MainWindow", "1 Worst ... Best 10", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        scrollArea->setToolTip(QApplication::translate("MainWindow", "Scroll down for more sliders.", 0));
#endif // QT_NO_TOOLTIP
        groupBox_4->setTitle(QString());
#ifndef QT_NO_TOOLTIP
        HowLikely1_3->setToolTip(QApplication::translate("MainWindow", "Drag to your answer", 0));
#endif // QT_NO_TOOLTIP
        label_7->setText(QApplication::translate("MainWindow", "8. How difficult did you find the game?", 0));
        label_8->setText(QApplication::translate("MainWindow", "Not at all", 0));
        label_9->setText(QApplication::translate("MainWindow", "Very", 0));
        groupBox_5->setTitle(QString());
#ifndef QT_NO_TOOLTIP
        HowLikely1_4->setToolTip(QApplication::translate("MainWindow", "Drag to your answer", 0));
#endif // QT_NO_TOOLTIP
        label_10->setText(QApplication::translate("MainWindow", "9. How excited are you for a sequel?", 0));
        label_11->setText(QApplication::translate("MainWindow", "Not at all", 0));
        label_12->setText(QApplication::translate("MainWindow", "Very", 0));
        groupBox_6->setTitle(QString());
#ifndef QT_NO_TOOLTIP
        HowLikely1_5->setToolTip(QApplication::translate("MainWindow", "Drag to your answer", 0));
#endif // QT_NO_TOOLTIP
        label_13->setText(QApplication::translate("MainWindow", "10. How surprised were you that there was controller support?", 0));
        label_14->setText(QApplication::translate("MainWindow", "Not at all", 0));
        label_15->setText(QApplication::translate("MainWindow", "Very", 0));
        groupBox_7->setTitle(QString());
#ifndef QT_NO_TOOLTIP
        HowLikely1_6->setToolTip(QApplication::translate("MainWindow", "Drag to your answer", 0));
#endif // QT_NO_TOOLTIP
        label_16->setText(QApplication::translate("MainWindow", "11. How much do you like sliders?", 0));
        label_17->setText(QApplication::translate("MainWindow", "Not at all", 0));
        label_18->setText(QApplication::translate("MainWindow", "Very", 0));
        groupBox_2->setTitle(QString());
#ifndef QT_NO_TOOLTIP
        HowLikely1->setToolTip(QApplication::translate("MainWindow", "Drag to your answer", 0));
#endif // QT_NO_TOOLTIP
        label_3->setText(QApplication::translate("MainWindow", "6. How likely are you to play this game again?", 0));
        label->setText(QApplication::translate("MainWindow", "Not at all", 0));
        label_2->setText(QApplication::translate("MainWindow", "Very", 0));
        groupBox_3->setTitle(QString());
#ifndef QT_NO_TOOLTIP
        HowLikely1_2->setToolTip(QApplication::translate("MainWindow", "Drag to your answer", 0));
#endif // QT_NO_TOOLTIP
        label_4->setText(QApplication::translate("MainWindow", "7. How likely are you to tell your friends about this game?", 0));
        label_5->setText(QApplication::translate("MainWindow", "Not at all", 0));
        label_6->setText(QApplication::translate("MainWindow", "Very", 0));
        groupBox_8->setTitle(QApplication::translate("MainWindow", "How long did you play Operation Graduation?", 0));
        radioButton_5->setText(QApplication::translate("MainWindow", "Less than 1 Hour", 0));
        radioButton->setText(QApplication::translate("MainWindow", "1 Hour", 0));
        radioButton_2->setText(QApplication::translate("MainWindow", "2 Hours", 0));
        radioButton_3->setText(QApplication::translate("MainWindow", "3 Hours", 0));
        radioButton_4->setText(QApplication::translate("MainWindow", "More than 3 Hours", 0));
        CommentsConcerns->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", 0));
        CommentsConcerns->setPlaceholderText(QApplication::translate("MainWindow", "Questions, comments, or concerns....", 0));
        SubmitSurvey->setText(QApplication::translate("MainWindow", "Submit Survey:", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
