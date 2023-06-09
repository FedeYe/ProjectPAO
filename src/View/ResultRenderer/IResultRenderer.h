#ifndef VIEW_RESULT_RENDERER_I_RESULT_RENDERER_H
#define VIEW_RESULT_RENDERER_I_RESULT_RENDERER_H

#include <QGridLayout>

#include "../../Engine/ResultSet.h"
#include "../WidgetLookup.h"

namespace View
{
    namespace ResultRenderer
    {

        class IResultRenderer
        {
        public:
            virtual ~IResultRenderer() = default;
            virtual void render(QGridLayout *grid, Engine::ResultSet &result, QVector<WidgetLookup> *lookup) = 0;
        };

    }
}

#endif