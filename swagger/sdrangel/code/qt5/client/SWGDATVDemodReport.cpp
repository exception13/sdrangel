/**
 * SDRangel
 * This is the web REST/JSON API of SDRangel SDR software. SDRangel is an Open Source Qt5/OpenGL 3.0+ (4.3+ in Windows) GUI and server Software Defined Radio and signal analyzer in software. It supports Airspy, BladeRF, HackRF, LimeSDR, PlutoSDR, RTL-SDR, SDRplay RSP1 and FunCube    ---   Limitations and specifcities:    * In SDRangel GUI the first Rx device set cannot be deleted. Conversely the server starts with no device sets and its number of device sets can be reduced to zero by as many calls as necessary to /sdrangel/deviceset with DELETE method.   * Preset import and export from/to file is a server only feature.   * Device set focus is a GUI only feature.   * The following channels are not implemented (status 501 is returned): ATV and DATV demodulators, Channel Analyzer NG, LoRa demodulator   * The device settings and report structures contains only the sub-structure corresponding to the device type. The DeviceSettings and DeviceReport structures documented here shows all of them but only one will be or should be present at a time   * The channel settings and report structures contains only the sub-structure corresponding to the channel type. The ChannelSettings and ChannelReport structures documented here shows all of them but only one will be or should be present at a time    --- 
 *
 * OpenAPI spec version: 7.0.0
 * Contact: f4exb06@gmail.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */


#include "SWGDATVDemodReport.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace SWGSDRangel {

SWGDATVDemodReport::SWGDATVDemodReport(QString* json) {
    init();
    this->fromJson(*json);
}

SWGDATVDemodReport::SWGDATVDemodReport() {
    channel_power_db = 0.0f;
    m_channel_power_db_isSet = false;
    audio_active = 0;
    m_audio_active_isSet = false;
    audio_decode_ok = 0;
    m_audio_decode_ok_isSet = false;
    video_active = 0;
    m_video_active_isSet = false;
    video_decode_ok = 0;
    m_video_decode_ok_isSet = false;
    udp_running = 0;
    m_udp_running_isSet = false;
    symbol_rate = 0;
    m_symbol_rate_isSet = false;
    modcod_modulation = 0;
    m_modcod_modulation_isSet = false;
    modcod_code_rate = 0;
    m_modcod_code_rate_isSet = false;
    set_by_modcod = 0;
    m_set_by_modcod_isSet = false;
    mer = 0.0f;
    m_mer_isSet = false;
    cnr = 0.0f;
    m_cnr_isSet = false;
}

SWGDATVDemodReport::~SWGDATVDemodReport() {
    this->cleanup();
}

void
SWGDATVDemodReport::init() {
    channel_power_db = 0.0f;
    m_channel_power_db_isSet = false;
    audio_active = 0;
    m_audio_active_isSet = false;
    audio_decode_ok = 0;
    m_audio_decode_ok_isSet = false;
    video_active = 0;
    m_video_active_isSet = false;
    video_decode_ok = 0;
    m_video_decode_ok_isSet = false;
    udp_running = 0;
    m_udp_running_isSet = false;
    symbol_rate = 0;
    m_symbol_rate_isSet = false;
    modcod_modulation = 0;
    m_modcod_modulation_isSet = false;
    modcod_code_rate = 0;
    m_modcod_code_rate_isSet = false;
    set_by_modcod = 0;
    m_set_by_modcod_isSet = false;
    mer = 0.0f;
    m_mer_isSet = false;
    cnr = 0.0f;
    m_cnr_isSet = false;
}

void
SWGDATVDemodReport::cleanup() {












}

SWGDATVDemodReport*
SWGDATVDemodReport::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGDATVDemodReport::fromJsonObject(QJsonObject &pJson) {
    ::SWGSDRangel::setValue(&channel_power_db, pJson["channelPowerDB"], "float", "");
    
    ::SWGSDRangel::setValue(&audio_active, pJson["audioActive"], "qint32", "");
    
    ::SWGSDRangel::setValue(&audio_decode_ok, pJson["audioDecodeOK"], "qint32", "");
    
    ::SWGSDRangel::setValue(&video_active, pJson["videoActive"], "qint32", "");
    
    ::SWGSDRangel::setValue(&video_decode_ok, pJson["videoDecodeOK"], "qint32", "");
    
    ::SWGSDRangel::setValue(&udp_running, pJson["udpRunning"], "qint32", "");
    
    ::SWGSDRangel::setValue(&symbol_rate, pJson["symbolRate"], "qint32", "");
    
    ::SWGSDRangel::setValue(&modcod_modulation, pJson["modcodModulation"], "qint32", "");
    
    ::SWGSDRangel::setValue(&modcod_code_rate, pJson["modcodCodeRate"], "qint32", "");
    
    ::SWGSDRangel::setValue(&set_by_modcod, pJson["setByModcod"], "qint32", "");
    
    ::SWGSDRangel::setValue(&mer, pJson["mer"], "float", "");
    
    ::SWGSDRangel::setValue(&cnr, pJson["cnr"], "float", "");
    
}

QString
SWGDATVDemodReport::asJson ()
{
    QJsonObject* obj = this->asJsonObject();

    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    delete obj;
    return QString(bytes);
}

QJsonObject*
SWGDATVDemodReport::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    if(m_channel_power_db_isSet){
        obj->insert("channelPowerDB", QJsonValue(channel_power_db));
    }
    if(m_audio_active_isSet){
        obj->insert("audioActive", QJsonValue(audio_active));
    }
    if(m_audio_decode_ok_isSet){
        obj->insert("audioDecodeOK", QJsonValue(audio_decode_ok));
    }
    if(m_video_active_isSet){
        obj->insert("videoActive", QJsonValue(video_active));
    }
    if(m_video_decode_ok_isSet){
        obj->insert("videoDecodeOK", QJsonValue(video_decode_ok));
    }
    if(m_udp_running_isSet){
        obj->insert("udpRunning", QJsonValue(udp_running));
    }
    if(m_symbol_rate_isSet){
        obj->insert("symbolRate", QJsonValue(symbol_rate));
    }
    if(m_modcod_modulation_isSet){
        obj->insert("modcodModulation", QJsonValue(modcod_modulation));
    }
    if(m_modcod_code_rate_isSet){
        obj->insert("modcodCodeRate", QJsonValue(modcod_code_rate));
    }
    if(m_set_by_modcod_isSet){
        obj->insert("setByModcod", QJsonValue(set_by_modcod));
    }
    if(m_mer_isSet){
        obj->insert("mer", QJsonValue(mer));
    }
    if(m_cnr_isSet){
        obj->insert("cnr", QJsonValue(cnr));
    }

    return obj;
}

float
SWGDATVDemodReport::getChannelPowerDb() {
    return channel_power_db;
}
void
SWGDATVDemodReport::setChannelPowerDb(float channel_power_db) {
    this->channel_power_db = channel_power_db;
    this->m_channel_power_db_isSet = true;
}

qint32
SWGDATVDemodReport::getAudioActive() {
    return audio_active;
}
void
SWGDATVDemodReport::setAudioActive(qint32 audio_active) {
    this->audio_active = audio_active;
    this->m_audio_active_isSet = true;
}

qint32
SWGDATVDemodReport::getAudioDecodeOk() {
    return audio_decode_ok;
}
void
SWGDATVDemodReport::setAudioDecodeOk(qint32 audio_decode_ok) {
    this->audio_decode_ok = audio_decode_ok;
    this->m_audio_decode_ok_isSet = true;
}

qint32
SWGDATVDemodReport::getVideoActive() {
    return video_active;
}
void
SWGDATVDemodReport::setVideoActive(qint32 video_active) {
    this->video_active = video_active;
    this->m_video_active_isSet = true;
}

qint32
SWGDATVDemodReport::getVideoDecodeOk() {
    return video_decode_ok;
}
void
SWGDATVDemodReport::setVideoDecodeOk(qint32 video_decode_ok) {
    this->video_decode_ok = video_decode_ok;
    this->m_video_decode_ok_isSet = true;
}

qint32
SWGDATVDemodReport::getUdpRunning() {
    return udp_running;
}
void
SWGDATVDemodReport::setUdpRunning(qint32 udp_running) {
    this->udp_running = udp_running;
    this->m_udp_running_isSet = true;
}

qint32
SWGDATVDemodReport::getSymbolRate() {
    return symbol_rate;
}
void
SWGDATVDemodReport::setSymbolRate(qint32 symbol_rate) {
    this->symbol_rate = symbol_rate;
    this->m_symbol_rate_isSet = true;
}

qint32
SWGDATVDemodReport::getModcodModulation() {
    return modcod_modulation;
}
void
SWGDATVDemodReport::setModcodModulation(qint32 modcod_modulation) {
    this->modcod_modulation = modcod_modulation;
    this->m_modcod_modulation_isSet = true;
}

qint32
SWGDATVDemodReport::getModcodCodeRate() {
    return modcod_code_rate;
}
void
SWGDATVDemodReport::setModcodCodeRate(qint32 modcod_code_rate) {
    this->modcod_code_rate = modcod_code_rate;
    this->m_modcod_code_rate_isSet = true;
}

qint32
SWGDATVDemodReport::getSetByModcod() {
    return set_by_modcod;
}
void
SWGDATVDemodReport::setSetByModcod(qint32 set_by_modcod) {
    this->set_by_modcod = set_by_modcod;
    this->m_set_by_modcod_isSet = true;
}

float
SWGDATVDemodReport::getMer() {
    return mer;
}
void
SWGDATVDemodReport::setMer(float mer) {
    this->mer = mer;
    this->m_mer_isSet = true;
}

float
SWGDATVDemodReport::getCnr() {
    return cnr;
}
void
SWGDATVDemodReport::setCnr(float cnr) {
    this->cnr = cnr;
    this->m_cnr_isSet = true;
}


bool
SWGDATVDemodReport::isSet(){
    bool isObjectUpdated = false;
    do{
        if(m_channel_power_db_isSet){
            isObjectUpdated = true; break;
        }
        if(m_audio_active_isSet){
            isObjectUpdated = true; break;
        }
        if(m_audio_decode_ok_isSet){
            isObjectUpdated = true; break;
        }
        if(m_video_active_isSet){
            isObjectUpdated = true; break;
        }
        if(m_video_decode_ok_isSet){
            isObjectUpdated = true; break;
        }
        if(m_udp_running_isSet){
            isObjectUpdated = true; break;
        }
        if(m_symbol_rate_isSet){
            isObjectUpdated = true; break;
        }
        if(m_modcod_modulation_isSet){
            isObjectUpdated = true; break;
        }
        if(m_modcod_code_rate_isSet){
            isObjectUpdated = true; break;
        }
        if(m_set_by_modcod_isSet){
            isObjectUpdated = true; break;
        }
        if(m_mer_isSet){
            isObjectUpdated = true; break;
        }
        if(m_cnr_isSet){
            isObjectUpdated = true; break;
        }
    }while(false);
    return isObjectUpdated;
}
}

