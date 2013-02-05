/*
 * Copyright 2013 Red Hat Inc., Durham, North Carolina.
 * All Rights Reserved.
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
 *
 * Authors:
 *      Martin Preisler <mpreisle@redhat.com>
 */

#include "ResultViewer.h"
#include "Evaluator.h"

ResultViewer::ResultViewer(QWidget* parent):
    QDialog(parent)
{
    mUI.setupUi(this);
}

ResultViewer::~ResultViewer()
{}

void ResultViewer::clear()
{
    mUI.webView->setContent(QByteArray());
}

void ResultViewer::loadContent(Evaluator* evaluator)
{
    QByteArray report;
    evaluator->getReport(report);

    mUI.webView->setContent(report);
}