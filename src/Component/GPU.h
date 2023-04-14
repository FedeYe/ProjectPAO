#ifndef COMPONENT_GPU_H
#define COMPONENT_GPU_H

#include "AbstractComponent.h"

namespace Component
{

    class GPU : public AbstractComponent
    {
    private:
        unsigned int numPorte;
        unsigned int numVRam;
        unsigned int numVentole;
        bool availability;

    public:
        GPU(
            const unsigned int identifier,
            const std::string name,
            const double price,
            const std::string brand,
            const std::string image_path,
            const unsigned int numPorte,
            const unsigned int numVRam,
            const unsigned int numVentole,
            const bool availability);

        unsigned int getNumPorte() const;
        GPU &setNumPorte(const unsigned int numPorte);

        unsigned int getNumVRam() const;
        GPU &setNumVRam(const unsigned int numVRam);

        unsigned int getNumVentole() const;
        GPU &setNumVentole(const unsigned int numVentole);

        bool isAvailable() const;
        GPU& setAvailability(const bool availability);

        virtual void accept(IConstVisitor &visitor) const;
        virtual void accept(IVisitor &visitor);
    };

}
#endif