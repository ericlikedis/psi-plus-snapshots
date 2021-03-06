/*
 * view.cpp - plugin
 * Copyright (C) 2009-2010  Evgeny Khryukin
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */

#include "view.h"

#include <QHeaderView>

void Viewer::init()
{
    setWindowFlags(Qt::Dialog | Qt::WindowTitleHint | Qt::WindowMinMaxButtonsHint | Qt::WindowCloseButtonHint
                   | Qt::CustomizeWindowHint);

    setSelectionBehavior(QAbstractItemView::SelectRows);
    resizeColumnsToContents();
    horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
    horizontalHeader()->setStretchLastSection(true);
    verticalHeader()->setDefaultAlignment(Qt::AlignHCenter);

    connect(this, &Viewer::clicked, this, &Viewer::itemClicked);
}

void Viewer::itemClicked(QModelIndex index)
{
    if (index.column() == 0)
        model()->setData(index, 3); // invert
}
