#ifndef VIEW_WIDGET_LOOKUP_H
#define VIEW_WIDGET_LOOKUP_H

#include <QWidget>
#include <QPushButton>

#include "../Component/AbstractComponent.h"

namespace View
{

    class WidgetLookup
    {
    private:
        const Component::AbstractComponent *component;
        QWidget* widget;
        QPushButton* info_button;
        QPushButton* edit_button;
        QPushButton* delete_button;

    public:
        WidgetLookup(
            const Component::AbstractComponent *component,
            QWidget* widget,
            QPushButton* info_button,
            QPushButton* edit_button,
            QPushButton* delete_button);
        const Component::AbstractComponent *getComponent() const;
        QWidget* getWidget() const;
        QPushButton* getInfoButton() const;
        QPushButton* getEditButton() const;
        QPushButton* getDeleteButton() const;
    };

}

#endif
