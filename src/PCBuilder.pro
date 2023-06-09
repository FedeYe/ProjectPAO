QT += core widgets
CONFIG += debug

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Component/Converter/Json/Json.cpp\
    Component/Converter/Json/JsonVisitor.cpp\
    Component/Converter/Json/Reader.cpp\
    \
    Component/DataMapper/JsonFile.cpp\
    \
    Component/Repository/JsonRepository.cpp\
    \
    Component/AbstractComponent.cpp\
    Component/MotherBoard.cpp\
    Component/CPU.cpp\
    Component/GPU.cpp\
    Component/PSU.cpp\
    Component/RAM.cpp\
    \
    Engine/ComponentShown.cpp\
    Engine/FilterVisitor.cpp\
    Engine/Memory.cpp\
    Engine/Query.cpp\
    Engine/ResultSet.cpp\
    Engine/ShoppingCart.cpp\
    Engine/TypeDefiner.cpp\
    \
    Service/Logger/AbstractLogger.cpp\
    Service/Logger/Singleton.cpp\
    \
    View/CartRenderer/Grid.cpp\
    \
    View/ComponentEditor/AbstractComponentEditor.cpp\
    View/ComponentEditor/ComponentInjector.cpp\
    View/ComponentEditor/CPUEditor.cpp\
    View/ComponentEditor/GPUEditor.cpp\
    View/ComponentEditor/MotherBoardEditor.cpp\
    View/ComponentEditor/PSUEditor.cpp\
    View/ComponentEditor/RAMEditor.cpp\
    \
    View/ComponentRenderer/ListComponent.cpp\
    View/ComponentRenderer/CartComponent.cpp\
    View/ComponentRenderer/Full.cpp\
    \
    View/ResultRenderer/ListAsc.cpp\
    View/ResultRenderer/ListDesc.cpp\
    \
    View/MainWindow.cpp\
    View/ResultsWidget.cpp\
    View/ShoppingCartWidget.cpp\
    View/EditWidget.cpp\
    View/TypeIdentifier.cpp\
    View/TypeSelector.cpp\
    View/WidgetLookup.cpp\
    \
    main.cpp

HEADERS += \
    Component/Converter/Json/IReader.h\
    Component/Converter/Json/Json.h\
    Component/Converter/Json/JsonVisitor.h\
    Component/Converter/Json/Reader.h\
    \
    Component/DataMapper/JsonFile.h\
    \
    Component/Repository/IRepository.h\
    Component/Repository/JsonRepository.h\
    \
    Component/AbstractComponent.h\
    Component/MotherBoard.h\
    Component/CPU.h\
    Component/GPU.h\
    Component/PSU.h\
    Component/RAM.h\
    Component/IConstVisitor.h\
    Component/IVisitor.h\
    \
    Engine/ComponentShown.h\
    Engine/FilterVisitor.h\
    Engine/IEngine.h\
    Engine/Memory.h\
    Engine/Query.h\
    Engine/ResultSet.h\
    Engine/ShoppingCart.h\
    Engine/TypeDefiner.h\
    \
    Service/Logger/Level.h\
    Service/Logger/AbstractLogger.h\
    Service/Logger/Singleton.h\
    \
    Service/Container.h\
    \
    View/CartRenderer/ICartRenderer.h\
    View/CartRenderer/Grid.h\
    \
    View/ComponentEditor/AbstractComponentEditor.h\
    View/ComponentEditor/ComponentInjector.h\
    View/ComponentEditor/CPUEditor.h\
    View/ComponentEditor/GPUEditor.h\
    View/ComponentEditor/MotherBoardEditor.h\
    View/ComponentEditor/PSUEditor.h\
    View/ComponentEditor/RAMEditor.h\
    \
    View/ComponentRenderer/IComponentRenderer.h\
    View/ComponentRenderer/ListComponent.h\
    View/ComponentRenderer/CartComponent.h\
    View/ComponentRenderer/Full.h\
    \
    View/ResultRenderer/IResultRenderer.h\
    View/ResultRenderer/ListAsc.h\
    View/ResultRenderer/ListDesc.h\
    \
    View/MainWindow.h\
    View/ResultsWidget.h\
    View/ShoppingCartWidget.h\
    View/EditWidget.h\
    View/TypeIdentifier.h\
    View/TypeSelector.h\
    View/WidgetLookup.h

FORMS += \
    View/mainwindow.ui

RESOURCES += \
    resources.qrc

TARGET = PCBuilder
