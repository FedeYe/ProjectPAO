#ifndef VIEW_RESULT_RENDERER_LISTASC_H
#define VIEW_RESULT_RENDERER_LISTASC_H

#include "IResultRenderer.h"

#include "../ResultWidget.h"
#include "../ComponentRenderer/ListComponent.h"  

namespace View
{
    namespace ResultRenderer
    {

        class ListAsc : public IResultRenderer
        {
        private:
            ComponentRenderer::ListComponent list_component; 

        public:
            virtual void render(QGridLayout *grid, Engine::ResultSet &result, QVector<WidgetLookup> *lookup);
        }; 

    }
}

#endif
