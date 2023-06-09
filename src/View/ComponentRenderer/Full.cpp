#include "Full.h"

#include <QLabel>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QPixmap>
#include <QPushButton>
#include <string>

#include "../../Component/MotherBoard.h"
#include "../../Component/CPU.h"
#include "../../Component/GPU.h"
#include "../../Component/PSU.h"
#include "../../Component/RAM.h"

namespace View {
namespace ComponentRenderer {

    void Full::visit(const Component::MotherBoard& mother_board) {
        widget = new QWidget();
        widget->setObjectName("list-component-motherboard");
        view_button = nullptr;
        edit_button = nullptr;
        delete_button = nullptr;
        add_button = nullptr;
        remove_button = nullptr;
        search_button = nullptr;

        QVBoxLayout* vbox = new QVBoxLayout(widget);
        vbox->setAlignment(Qt::AlignHCenter | Qt::AlignTop);

        QPixmap image_object(mother_board.getImagePath().c_str());
        if (!image_object) {
        	image_object = QPixmap(":/Assets/icons/defaultMB.svg");
        }
        QLabel* image = new QLabel();
        image->setPixmap(image_object.scaled(150, 150, Qt::AspectRatioMode::KeepAspectRatio));
        vbox->addWidget(image);

        QLabel* name = new QLabel(QString::fromStdString(mother_board.getName()));
        name->setObjectName("Name");
        name->setWordWrap(true);
        vbox->addWidget(name);

        //pannello informazioni prodotto
        QVBoxLayout* details = new QVBoxLayout();
        details->setAlignment(Qt::AlignHCenter | Qt::AlignTop);
        vbox->addLayout(details);

        QHBoxLayout* identifierBox = new QHBoxLayout();
        identifierBox->setAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
        details->addLayout(identifierBox);
        QLabel* identifierLabel = new QLabel("Identifier: ");
        identifierLabel->setObjectName("Identifier-Label");
        identifierBox->addWidget(identifierLabel);
        identifierBox->addStretch();
        QLabel* identifierValue = new QLabel(QString::number(mother_board.getIdentifier()));
        identifierValue->setObjectName("Identifier Value");
        identifierBox->addWidget(identifierValue);

        QHBoxLayout* brandBox = new QHBoxLayout();
        brandBox->setAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
        details->addLayout(brandBox);
        QLabel* brandLabel = new QLabel("Brand: ");
        brandLabel->setObjectName("Brand-Label");
        brandBox->addWidget(brandLabel);
        brandBox->addStretch();
        QLabel* brandValue = new QLabel(QString::fromStdString(mother_board.getBrand()));
        brandValue->setObjectName("Brand Value");
        brandBox->addWidget(brandValue);

        QHBoxLayout* socketBox = new QHBoxLayout();
        socketBox->setAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
        details->addLayout(socketBox);
        QLabel* socketLabel = new QLabel("Socket: ");
        socketLabel->setObjectName("Socket-Label");
        socketBox->addWidget(socketLabel);
        socketBox->addStretch();
        QLabel* socketValue = new QLabel(QString::fromStdString(mother_board.getSocket()));
        socketValue->setObjectName("Socket Value");
        socketBox->addWidget(socketValue);
        
        QHBoxLayout* chipsetBox = new QHBoxLayout();
        chipsetBox->setAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
        details->addLayout(chipsetBox);
        QLabel* chipsetLabel = new QLabel("Chipset: ");
        chipsetLabel->setObjectName("Chipset-Label");
        chipsetBox->addWidget(chipsetLabel);
        chipsetBox->addStretch();
        QLabel* chipsetValue = new QLabel(QString::fromStdString(mother_board.getChipset()));
        chipsetValue->setObjectName("Chipset Value");
        chipsetBox->addWidget(chipsetValue);

        QHBoxLayout* generationBox = new QHBoxLayout();
        generationBox->setAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
        details->addLayout(generationBox);
        QLabel* generationLabel = new QLabel("Generation: ");
        generationLabel->setObjectName("Generation-Label");
        generationBox->addWidget(generationLabel);
        generationBox->addStretch();
        QLabel* generationValue = new QLabel(QString::fromStdString(mother_board.getGeneration()));
        generationValue->setObjectName("Generation Value");
        generationBox->addWidget(generationValue);

        QHBoxLayout* numRAMBox = new QHBoxLayout();
        numRAMBox->setAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
        details->addLayout(numRAMBox);
        QLabel* numRAMLabel = new QLabel("Number of RAM slots: ");
        numRAMLabel->setObjectName("NumRAM-Label");
        numRAMBox->addWidget(numRAMLabel);
        numRAMBox->addStretch();
        QLabel* numRAMValue = new QLabel(QString::number(mother_board.getNumRAM()));
        numRAMValue->setObjectName("NumRAM Value");
        numRAMBox->addWidget(numRAMValue);

        QHBoxLayout* numSSDBox = new QHBoxLayout();
        numSSDBox->setAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
        details->addLayout(numSSDBox);
        QLabel* numSSDLabel = new QLabel("Number of SSD slots: ");
        numSSDLabel->setObjectName("NumSSD-Label");
        numSSDBox->addWidget(numSSDLabel);
        numSSDBox->addStretch();
        QLabel* numSSDValue = new QLabel(QString::number(mother_board.getNumSSD()));
        numSSDValue->setObjectName("NumSSD Value");
        numSSDBox->addWidget(numSSDValue);

        QHBoxLayout* priceBox = new QHBoxLayout();
        priceBox->setAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
        details->addLayout(priceBox);
        QLabel* priceLabel = new QLabel("Price: ");
        priceLabel->setObjectName("Price-Label");
        priceBox->addWidget(priceLabel);
        priceBox->addStretch();
        QLabel* priceValue = new QLabel(QString::number(mother_board.getPrice()) + "€");
        priceValue->setObjectName("Price Value");
        priceBox->addWidget(priceValue);
    }
    
    void Full::visit(const Component::CPU& cpu) {
        
        widget = new QWidget();
        widget->setObjectName("list-component-cpu");
        view_button = nullptr;
        edit_button = nullptr;
        delete_button = nullptr;
        add_button = nullptr;
        remove_button = nullptr;
        search_button = nullptr;

        QVBoxLayout* vbox = new QVBoxLayout(widget);
        vbox->setAlignment(Qt::AlignHCenter | Qt::AlignTop);

        QPixmap image_object(cpu.getImagePath().c_str());
        if (!image_object) {
        	image_object = QPixmap(":/Assets/icons/defaultCPU.svg");
        }
        QLabel* image = new QLabel();
        image->setPixmap(image_object.scaled(150, 150, Qt::AspectRatioMode::KeepAspectRatio));
        vbox->addWidget(image);

        QLabel* name = new QLabel(QString::fromStdString(cpu.getName()));
        name->setObjectName("Name");
        name->setWordWrap(true);
        vbox->addWidget(name);

        //pannello informazioni prodotto
        QVBoxLayout* details = new QVBoxLayout();
        details->setAlignment(Qt::AlignHCenter | Qt::AlignTop);
        vbox->addLayout(details);

        QHBoxLayout* identifierBox = new QHBoxLayout();
        identifierBox->setAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
        details->addLayout(identifierBox);
        QLabel* identifierLabel = new QLabel("Identifier: ");
        identifierLabel->setObjectName("Identifier-Label");
        identifierBox->addWidget(identifierLabel);
        identifierBox->addStretch();
        QLabel* identifierValue = new QLabel(QString::number(cpu.getIdentifier()));
        identifierValue->setObjectName("Identifier Value");
        identifierBox->addWidget(identifierValue);

        QHBoxLayout* chipsetBox = new QHBoxLayout();
        chipsetBox->setAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
        details->addLayout(chipsetBox);
        QLabel* chipsetLabel = new QLabel("Chipset: ");
        chipsetLabel->setObjectName("Chipset-Label");
        chipsetBox->addWidget(chipsetLabel);
        chipsetBox->addStretch();
        QLabel* chipsetValue = new QLabel(QString::fromStdString(cpu.getChipset()));
        chipsetValue->setObjectName("Chipset Value");
        chipsetBox->addWidget(chipsetValue);

        QHBoxLayout* numCoresBox = new QHBoxLayout();
        numCoresBox->setAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
        details->addLayout(numCoresBox);
        QLabel* numCoresLabel = new QLabel("Number of Cores: ");
        numCoresLabel->setObjectName("NumCores-Label");
        numCoresBox->addWidget(numCoresLabel);
        numCoresBox->addStretch();
        QLabel* numCoresValue = new QLabel(QString::number(cpu.getNumCores()));
        numCoresValue->setObjectName("NumCores Value");
        numCoresBox->addWidget(numCoresValue);

        QHBoxLayout* threadsBox = new QHBoxLayout();
        threadsBox->setAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
        details->addLayout(threadsBox);
        QLabel* threadsLabel = new QLabel("Threads: ");
        threadsLabel->setObjectName("Threads-Label");
        threadsBox->addWidget(threadsLabel);
        threadsBox->addStretch();
        QLabel* threadsValue = new QLabel(QString::number(cpu.getThreads()));
        threadsValue->setObjectName("Threads Value");
        threadsBox->addWidget(threadsValue);

        QHBoxLayout* coreClockBox = new QHBoxLayout();
        coreClockBox->setAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
        details->addLayout(coreClockBox);
        QLabel* coreClockLabel = new QLabel("Core Clock: ");
        coreClockLabel->setObjectName("CoreClock-Label");
        coreClockBox->addWidget(coreClockLabel);
        coreClockBox->addStretch();
        QLabel* coreClockValue = new QLabel(QString::number(cpu.getCoreclock()) + " GHz");
        coreClockValue->setObjectName("CoreClock Value");
        coreClockBox->addWidget(coreClockValue);

        QHBoxLayout* boostClockBox = new QHBoxLayout();
        boostClockBox->setAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
        details->addLayout(boostClockBox);
        QLabel* boostClockLabel = new QLabel("Boost Clock: ");
        boostClockLabel->setObjectName("BoostClock-Label");
        boostClockBox->addWidget(boostClockLabel);
        boostClockBox->addStretch();
        QLabel* boostClockValue = new QLabel(QString::number(cpu.getBoostclock()) + " GHz");
        boostClockValue->setObjectName("BoostClock Value");
        boostClockBox->addWidget(boostClockValue);

        QHBoxLayout* priceBox = new QHBoxLayout();
        priceBox->setAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
        details->addLayout(priceBox);
        QLabel* priceLabel = new QLabel("Price: ");
        priceLabel->setObjectName("Price-Label");
        priceBox->addWidget(priceLabel);
        priceBox->addStretch();
        QLabel* priceValue = new QLabel(QString::number(cpu.getPrice()) + "€");
        priceValue->setObjectName("Price Value");
        priceBox->addWidget(priceValue);
    }
    
    void Full::visit(const Component::GPU& gpu) {

        widget = new QWidget();
        widget->setObjectName("list-component-gpu");
        view_button = nullptr;
        edit_button = nullptr;
        delete_button = nullptr;
        add_button = nullptr;
        remove_button = nullptr;
        search_button = nullptr;

        QVBoxLayout* vbox = new QVBoxLayout(widget);
        vbox->setAlignment(Qt::AlignHCenter | Qt::AlignTop);

        QPixmap image_object(gpu.getImagePath().c_str());
        if (!image_object) {
        	image_object = QPixmap(":/Assets/icons/defaultGPU.svg");
        }
        QLabel* image = new QLabel();
        image->setPixmap(image_object.scaled(150, 150, Qt::AspectRatioMode::KeepAspectRatio));
        vbox->addWidget(image);

        QLabel* name = new QLabel(QString::fromStdString(gpu.getName()));
        name->setObjectName("Name");
        name->setWordWrap(true);
        vbox->addWidget(name);

        //pannello informazioni prodotto
        QVBoxLayout* details = new QVBoxLayout();
        details->setAlignment(Qt::AlignHCenter | Qt::AlignTop);
        vbox->addLayout(details);

        QHBoxLayout* identifierBox = new QHBoxLayout();
        identifierBox->setAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
        details->addLayout(identifierBox);
        QLabel* identifierLabel = new QLabel("Identifier: ");
        identifierLabel->setObjectName("Identifier-Label");
        identifierBox->addWidget(identifierLabel);
        identifierBox->addStretch();
        QLabel* identifierValue = new QLabel(QString::number(gpu.getIdentifier()));
        identifierValue->setObjectName("Identifier Value");
        identifierBox->addWidget(identifierValue);

        QHBoxLayout* numPorteBox = new QHBoxLayout();
        numPorteBox->setAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
        details->addLayout(numPorteBox);
        QLabel* numPorteLabel = new QLabel("Number of HDMI/Display Ports: ");
        numPorteLabel->setObjectName("NumPorte-Label");
        numPorteBox->addWidget(numPorteLabel);
        numPorteBox->addStretch();
        QLabel* numPorteValue = new QLabel(QString::number(gpu.getNumPorte()));
        numPorteValue->setObjectName("NumPorte Value");
        numPorteBox->addWidget(numPorteValue);

        QHBoxLayout* numVRAMBox = new QHBoxLayout();
        numVRAMBox->setAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
        details->addLayout(numVRAMBox);
        QLabel* numVRAMLabel = new QLabel("Number of VRAM: ");
        numVRAMLabel->setObjectName("NumVRAM-Label");
        numVRAMBox->addWidget(numVRAMLabel);
        numVRAMBox->addStretch();
        QLabel* numVRAMValue = new QLabel(QString::number(gpu.getNumVRam()) + " GB");
        numVRAMValue->setObjectName("NumVRAM Value");
        numVRAMBox->addWidget(numVRAMValue);

        QHBoxLayout* numVentoleBox = new QHBoxLayout();
        numVentoleBox->setAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
        details->addLayout(numVentoleBox);
        QLabel* numVentoleLabel = new QLabel("Number of Vents: ");
        numVentoleLabel->setObjectName("NumVentole-Label");
        numVentoleBox->addWidget(numVentoleLabel);
        numVentoleBox->addStretch();
        QLabel* numVentoleValue = new QLabel(QString::number(gpu.getNumVentole()));
        numVentoleValue->setObjectName("NumVentole Value");
        numVentoleBox->addWidget(numVentoleValue);

        std::string availabilityString = "<default>";
        if(gpu.isAvailable() == true)
            availabilityString = "In Stock";
        else 
            availabilityString = "Out of Stock";
        QHBoxLayout* availabilityBox = new QHBoxLayout();
        availabilityBox->setAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
        details->addLayout(availabilityBox);
        QLabel* availabilityLabel = new QLabel("Availability: ");
        availabilityLabel->setObjectName("Availability-Label");
        availabilityBox->addWidget(availabilityLabel);
        availabilityBox->addStretch();
        QLabel* availabilityValue = new QLabel(QString::fromStdString(availabilityString));
        availabilityValue->setObjectName("Availability Value");
        availabilityBox->addWidget(availabilityValue);

        QHBoxLayout* priceBox = new QHBoxLayout();
        priceBox->setAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
        details->addLayout(priceBox);
        QLabel* priceLabel = new QLabel("Price: ");
        priceLabel->setObjectName("Price-Label");
        priceBox->addWidget(priceLabel);
        priceBox->addStretch();
        QLabel* priceValue = new QLabel(QString::number(gpu.getPrice()) + "€");
        priceValue->setObjectName("Price Value");
        priceBox->addWidget(priceValue);
    }
    
    void Full::visit(const Component::PSU& psu) {

        widget = new QWidget();
        widget->setObjectName("list-component-psu");
        view_button = nullptr;
        edit_button = nullptr;
        delete_button = nullptr;
        add_button = nullptr;
        remove_button = nullptr;
        search_button = nullptr;

        QVBoxLayout* vbox = new QVBoxLayout(widget);
        vbox->setAlignment(Qt::AlignHCenter | Qt::AlignTop);

        QPixmap image_object(psu.getImagePath().c_str());
        if (!image_object) {
        	image_object = QPixmap(":/Assets/icons/defaultPSU.svg");
        }
        QLabel* image = new QLabel();
        image->setPixmap(image_object.scaled(150, 150, Qt::AspectRatioMode::KeepAspectRatio));
        vbox->addWidget(image);

        QLabel* name = new QLabel(QString::fromStdString(psu.getName()));
        name->setObjectName("Name");
        name->setWordWrap(true);
        vbox->addWidget(name);

        //pannello informazioni prodotto
        QVBoxLayout* details = new QVBoxLayout();
        details->setAlignment(Qt::AlignHCenter | Qt::AlignTop);
        vbox->addLayout(details);

        QHBoxLayout* identifierBox = new QHBoxLayout();
        identifierBox->setAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
        details->addLayout(identifierBox);
        QLabel* identifierLabel = new QLabel("Identifier: ");
        identifierLabel->setObjectName("Identifier-Label");
        identifierBox->addWidget(identifierLabel);
        identifierBox->addStretch();
        QLabel* identifierValue = new QLabel(QString::number(psu.getIdentifier()));
        identifierValue->setObjectName("Identifier Value");
        identifierBox->addWidget(identifierValue);

        QHBoxLayout* suppliedWattBox = new QHBoxLayout();
        suppliedWattBox->setAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
        details->addLayout(suppliedWattBox);
        QLabel* suppliedWattLabel = new QLabel("Supplied Wattage: ");
        suppliedWattLabel->setObjectName("Supplied-Watt-Label");
        suppliedWattBox->addWidget(suppliedWattLabel);
        suppliedWattBox->addStretch();
        QLabel* suppliedWattValue = new QLabel(QString::number(psu.getSuppWatt()));
        suppliedWattValue->setObjectName("Supplied Watt Value");
        suppliedWattBox->addWidget(suppliedWattValue);

        QHBoxLayout* efficiencyBox = new QHBoxLayout();
        efficiencyBox->setAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
        details->addLayout(efficiencyBox);
        QLabel* efficiencyLabel = new QLabel("Efficiency: ");
        efficiencyLabel->setObjectName("Efficiency-Label");
        efficiencyBox->addWidget(efficiencyLabel);
        efficiencyBox->addStretch();
        QLabel* efficiencyValue = new QLabel(QString::number(psu.getSuppWatt()));
        efficiencyValue->setObjectName("Efficiency Value");
        efficiencyBox->addWidget(efficiencyValue);

        std::string modularString = "<default>";
        if(psu.isModular() == true)
            modularString = "Modular";
        else 
            modularString = "Not Modular";
        QHBoxLayout* modularBox = new QHBoxLayout();
        modularBox->setAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
        details->addLayout(modularBox);
        QLabel* modularLabel = new QLabel("Type: ");
        modularLabel->setObjectName("Modular-Label");
        modularBox->addWidget(modularLabel);
        modularBox->addStretch();
        QLabel* modularValue = new QLabel(QString::fromStdString(modularString));
        modularValue->setObjectName("Modular Value");
        modularBox->addWidget(modularValue);

        QHBoxLayout* priceBox = new QHBoxLayout();
        priceBox->setAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
        details->addLayout(priceBox);
        QLabel* priceLabel = new QLabel("Price: ");
        priceLabel->setObjectName("Price-Label");
        priceBox->addWidget(priceLabel);
        priceBox->addStretch();
        QLabel* priceValue = new QLabel(QString::number(psu.getPrice()) + "€");
        priceValue->setObjectName("Price Value");
        priceBox->addWidget(priceValue);

    }
    
    void Full::visit(const Component::RAM& ram) {

        widget = new QWidget();
        widget->setObjectName("list-component-ram");
        view_button = nullptr;
        edit_button = nullptr;
        delete_button = nullptr;
        add_button = nullptr;
        remove_button = nullptr;
        search_button = nullptr;

        QVBoxLayout* vbox = new QVBoxLayout(widget);
        vbox->setAlignment(Qt::AlignHCenter | Qt::AlignTop);

        QPixmap image_object(ram.getImagePath().c_str());
        if (!image_object) {
        	image_object = QPixmap(":/Assets/icons/defaultRAM.svg");
        }
        QLabel* image = new QLabel();
        image->setPixmap(image_object.scaled(150, 150, Qt::AspectRatioMode::KeepAspectRatio));
        vbox->addWidget(image);

        QLabel* name = new QLabel(QString::fromStdString(ram.getName()));
        name->setObjectName("Name");
        name->setWordWrap(true);
        vbox->addWidget(name);

        //pannello informazioni prodotto
        QVBoxLayout* details = new QVBoxLayout();
        details->setAlignment(Qt::AlignHCenter | Qt::AlignTop);
        vbox->addLayout(details);

        QHBoxLayout* identifierBox = new QHBoxLayout();
        identifierBox->setAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
        details->addLayout(identifierBox);
        QLabel* identifierLabel = new QLabel("Identifier: ");
        identifierLabel->setObjectName("Identifier-Label");
        identifierBox->addWidget(identifierLabel);
        identifierBox->addStretch();
        QLabel* identifierValue = new QLabel(QString::number(ram.getIdentifier()));
        identifierValue->setObjectName("Identifier Value");
        identifierBox->addWidget(identifierValue);

        QHBoxLayout* capacityBox = new QHBoxLayout();
        capacityBox->setAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
        details->addLayout(capacityBox);
        QLabel* capacityLabel = new QLabel("Capacity: ");
        capacityLabel->setObjectName("Capacity-Label");
        capacityBox->addWidget(capacityLabel);
        capacityBox->addStretch();
        QLabel* capacityValue = new QLabel(QString::fromStdString(ram.getCapacity()));
        capacityValue->setObjectName("Capacity Value");
        capacityBox->addWidget(capacityValue);

        QHBoxLayout* stockSpeedBox = new QHBoxLayout();
        stockSpeedBox->setAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
        details->addLayout(stockSpeedBox);
        QLabel* stockSpeedLabel = new QLabel("Stock Speed: ");
        stockSpeedLabel->setObjectName("StockSpeed-Label");
        stockSpeedBox->addWidget(stockSpeedLabel);
        stockSpeedBox->addStretch();
        QLabel* stockSpeedValue = new QLabel(QString::number(ram.getStockSpeed()) + " MHz");
        stockSpeedValue->setObjectName("StockSpeed Value");
        stockSpeedBox->addWidget(stockSpeedValue);

        QHBoxLayout* maxSpeedBox = new QHBoxLayout();
        maxSpeedBox->setAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
        details->addLayout(maxSpeedBox);
        QLabel* maxSpeedLabel = new QLabel("Max Speed: ");
        maxSpeedLabel->setObjectName("MaxSpeed-Label");
        maxSpeedBox->addWidget(maxSpeedLabel);
        maxSpeedBox->addStretch();
        QLabel* maxSpeedValue = new QLabel(QString::number(ram.getMaxSpeed()) + " MHz");
        maxSpeedValue->setObjectName("MaxSpeed Value");
        maxSpeedBox->addWidget(maxSpeedValue);

        QHBoxLayout* generationBox = new QHBoxLayout();
        generationBox->setAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
        details->addLayout(generationBox);
        QLabel* generationLabel = new QLabel("Generation: ");
        generationLabel->setObjectName("Generation-Label");
        generationBox->addWidget(generationLabel);
        generationBox->addStretch();
        QLabel* generationValue = new QLabel(QString::fromStdString(ram.getGeneration()));
        generationValue->setObjectName("Generation Value");
        generationBox->addWidget(generationValue);

        QHBoxLayout* priceBox = new QHBoxLayout();
        priceBox->setAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
        details->addLayout(priceBox);
        QLabel* priceLabel = new QLabel("Price: ");
        priceLabel->setObjectName("Price-Label");
        priceBox->addWidget(priceLabel);
        priceBox->addStretch();
        QLabel* priceValue = new QLabel(QString::number(ram.getPrice()) + "€");
        priceValue->setObjectName("Price Value");
        priceBox->addWidget(priceValue);
    }    

    QWidget* Full::getWidget() const{
        return widget;
    }
    
    QPushButton* Full::getViewButton() const {
        return view_button;
    }       
    
    QPushButton* Full::getEditButton() const {
        return edit_button;
    }      
    
    QPushButton* Full::getDeleteButton() const {
        return delete_button;
    }       
    
    QPushButton* Full::getAddButton() const {
        return add_button;
    }         
    
    QPushButton* Full::getRemoveButton() const {      // remove toglie dal carello
        return remove_button;
    }
    
    QPushButton* Full::getSearchButton() const {
        return search_button;
    }

}
}
