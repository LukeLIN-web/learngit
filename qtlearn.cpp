
void MainWindow::createInput(){
    // 先创建右边的widget，用布局进行管理
    //QWidget *widgetMain = new QWidget();
//    QLineEdit *lineEdit = new QLineEdit(widgetMain);  //输入框
//  //  QHBoxLayout *horLayout = new QHBoxLayout();  //水平放置,用水平布局将这2个控件框起，并且置于界面顶部
 //   gridLayout_Body->addWidget(widgetMain,1,1);   // 加入一个输入框和按钮
//  //  horLayout->addWidget(lineEdit,4);
////    horLayout->addWidget(btn, 1);        // 设置布局比例为4:1

//    // 然后添加一个全局布局控件
//    QVBoxLayout *verLayout = new QVBoxLayout(widgetMain);
//    verLayout->addWidget(lineEdit,1);   //加入文字编辑
//    verLayout->addWidget(btn,1);      //在下面加入按钮
//    gridLayout_Body->addLayout(verLayout,1,1);

//   // verLayout->addLayout(horLayout);// 加入刚才的输入组，底部添加弹簧
//   // verLayout->addStretch();

////    int nCnt = lineEdit->text().toInt(); // 输入的个数
////    for (int i = 0; i < nCnt; i++) {
////    QLabel *label = new QLabel(widgetMain);    // 插入之前的布局
////    label->setText(QString("动态创建label%1").arg(i + 1)); // i+1 替换第一个变量%1, 如果还有变量就%2 %3 .
////    verLayout->insertWidget(1 + i, label);
////    }
}
