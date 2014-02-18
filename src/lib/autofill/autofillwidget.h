/* ============================================================
* QupZilla - WebKit based browser
* Copyright (C) 2013  David Rosca <nowrep@gmail.com>
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program.  If not, see <http://www.gnu.org/licenses/>.
* ============================================================ */
#ifdef QTWEBENGINE_DISABLED
#define AUTOFILLWIDGET_H

#include <QWidget>
#include <QList>

#include "qz_namespace.h"
#include "locationbarpopup.h"

namespace Ui
{
class AutoFillWidget;
}

class WebView;
struct PasswordEntry;

class QT_QUPZILLA_EXPORT AutoFillWidget : public LocationBarPopup
{
    Q_OBJECT

public:
    explicit AutoFillWidget(WebView* view, QWidget* parent = 0);
    ~AutoFillWidget();

    void setFormData(const QVector<PasswordEntry> &data);

private slots:
    void loginToPage();

private:
    Ui::AutoFillWidget* ui;

    WebView* m_view;
    QVector<PasswordEntry> m_data;
};

#endif // AUTOFILLWIDGET_H
