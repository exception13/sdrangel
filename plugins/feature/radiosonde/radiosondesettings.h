///////////////////////////////////////////////////////////////////////////////////
// Copyright (C) 2012 maintech GmbH, Otto-Hahn-Str. 15, 97204 Hoechberg, Germany //
// written by Christian Daniel                                                   //
// Copyright (C) 2015-2020, 2022 Edouard Griffiths, F4EXB <f4exb06@gmail.com>    //
// Copyright (C) 2021-2024 Jon Beniston, M7RCE <jon@beniston.com>                //
//                                                                               //
// This program is free software; you can redistribute it and/or modify          //
// it under the terms of the GNU General Public License as published by          //
// the Free Software Foundation as version 3 of the License, or                  //
// (at your option) any later version.                                           //
//                                                                               //
// This program is distributed in the hope that it will be useful,               //
// but WITHOUT ANY WARRANTY; without even the implied warranty of                //
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the                  //
// GNU General Public License V3 for more details.                               //
//                                                                               //
// You should have received a copy of the GNU General Public License             //
// along with this program. If not, see <http://www.gnu.org/licenses/>.          //
///////////////////////////////////////////////////////////////////////////////////

#ifndef INCLUDE_FEATURE_RADIOSONDESETTINGS_H_
#define INCLUDE_FEATURE_RADIOSONDESETTINGS_H_

#include <QByteArray>
#include <QString>

class Serializable;

// Number of columns in the table
#define RADIOSONDES_COLUMNS  18

struct RadiosondeSettings
{
    QString m_title;
    quint32 m_rgbColor;
    bool m_useReverseAPI;
    QString m_reverseAPIAddress;
    uint16_t m_reverseAPIPort;
    uint16_t m_reverseAPIFeatureSetIndex;
    uint16_t m_reverseAPIFeatureIndex;
    Serializable *m_rollupState;
    int m_workspaceIndex;
    QByteArray m_geometryBytes;

    enum ChartData {
        NONE,
        ALTITUDE,
        TEMPERATURE,
        HUMIDITY,
        PRESSURE,
        SPEED,
        VERTICAL_RATE,
        HEADING,
        BATTERY_VOLTAGE
    };
    ChartData m_y1;
    ChartData m_y2;

    bool m_feedEnabled;
    QString m_callsign;
    QString m_antenna;
    bool m_displayPosition;
    bool m_mobile;
    QString m_email;
    bool m_showPredictedPaths;

    int m_radiosondesColumnIndexes[RADIOSONDES_COLUMNS];
    int m_radiosondesColumnSizes[RADIOSONDES_COLUMNS];

    RadiosondeSettings();
    void resetToDefaults();
    QByteArray serialize() const;
    bool deserialize(const QByteArray& data);
    void setRollupState(Serializable *rollupState) { m_rollupState = rollupState; }
    void applySettings(const QStringList& settingsKeys, const RadiosondeSettings& settings);
    QString getDebugString(const QStringList& settingsKeys, bool force=false) const;

    static const QStringList m_pipeTypes;
    static const QStringList m_pipeURIs;
};

#endif // INCLUDE_FEATURE_RADIOSONDESETTINGS_H_
