#ifndef ENGINE_I_ENGINE_H
#define ENGINE_I_ENGINE_H

#include "Query.h"
#include "ResultSet.h"

namespace Engine {

    class IEngine {
        public:
            virtual ~IEngine() = default;
            virtual IEngine& add(const Component::AbstractComponent* component) = 0;
            virtual IEngine& remove(const Component::AbstractComponent* component) = 0;
            virtual IEngine& clear() = 0;
            virtual ResultSet search(const Query& query) const = 0;
    }; 
}

#endif
