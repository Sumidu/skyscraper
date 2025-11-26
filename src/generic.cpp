/***************************************************************************
 *            generic.cpp
 *
 *  Copyright 2024 Lars Muldjord
 *  muldjordlars@gmail.com
 ****************************************************************************/
/*
 *  This file is part of skyscraper.
 *
 *  skyscraper is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  skyscraper is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with skyscraper; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA.
 */

#include "generic.h"

#include "config.h"

#include <QDir>
#include <QStringBuilder>

Generic::Generic() {}

void Generic::assembleList(QString &finalOutput,
                           QList<GameEntry> &gameEntries) {
    // Generic frontend does not generate any game list
    Q_UNUSED(gameEntries)
    finalOutput = "";
}

QString Generic::getGameListFileName() {
    // No game list file for generic frontend
    return QString();
}

QString Generic::getInputFolder() {
    return QString(QDir::homePath() % "/RetroPie/roms/" % config->platform);
}

QString Generic::getGameListFolder() {
    return QString(QDir::homePath() % "/RetroPie/roms/" % config->platform);
}

QString Generic::getScreenshotsFolder() {
    return config->mediaFolder % "/Imgs";
}
