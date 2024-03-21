

#include "huaweicloud/live/v1/model/SecondarySourcesInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




SecondarySourcesInfo::SecondarySourcesInfo()
{
    url_ = "";
    urlIsSet_ = false;
    bitrate_ = 0;
    bitrateIsSet_ = false;
    width_ = 0;
    widthIsSet_ = false;
    height_ = 0;
    heightIsSet_ = false;
    bitrateFor3u8_ = false;
    bitrateFor3u8IsSet_ = false;
    passphrase_ = "";
    passphraseIsSet_ = false;
    backupUrlsIsSet_ = false;
    streamId_ = "";
    streamIdIsSet_ = false;
    latency_ = 0;
    latencyIsSet_ = false;
}

SecondarySourcesInfo::~SecondarySourcesInfo() = default;

void SecondarySourcesInfo::validate()
{
}

web::json::value SecondarySourcesInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(urlIsSet_) {
        val[utility::conversions::to_string_t("url")] = ModelBase::toJson(url_);
    }
    if(bitrateIsSet_) {
        val[utility::conversions::to_string_t("bitrate")] = ModelBase::toJson(bitrate_);
    }
    if(widthIsSet_) {
        val[utility::conversions::to_string_t("width")] = ModelBase::toJson(width_);
    }
    if(heightIsSet_) {
        val[utility::conversions::to_string_t("height")] = ModelBase::toJson(height_);
    }
    if(bitrateFor3u8IsSet_) {
        val[utility::conversions::to_string_t("bitrate_for3u8")] = ModelBase::toJson(bitrateFor3u8_);
    }
    if(passphraseIsSet_) {
        val[utility::conversions::to_string_t("passphrase")] = ModelBase::toJson(passphrase_);
    }
    if(backupUrlsIsSet_) {
        val[utility::conversions::to_string_t("backup_urls")] = ModelBase::toJson(backupUrls_);
    }
    if(streamIdIsSet_) {
        val[utility::conversions::to_string_t("stream_id")] = ModelBase::toJson(streamId_);
    }
    if(latencyIsSet_) {
        val[utility::conversions::to_string_t("latency")] = ModelBase::toJson(latency_);
    }

    return val;
}
bool SecondarySourcesInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("bitrate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bitrate"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBitrate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("width"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("width"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWidth(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("height"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("height"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHeight(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("bitrate_for3u8"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bitrate_for3u8"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBitrateFor3u8(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("passphrase"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("passphrase"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPassphrase(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("backup_urls"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("backup_urls"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBackupUrls(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("stream_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("stream_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStreamId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("latency"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("latency"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLatency(refVal);
        }
    }
    return ok;
}


std::string SecondarySourcesInfo::getUrl() const
{
    return url_;
}

void SecondarySourcesInfo::setUrl(const std::string& value)
{
    url_ = value;
    urlIsSet_ = true;
}

bool SecondarySourcesInfo::urlIsSet() const
{
    return urlIsSet_;
}

void SecondarySourcesInfo::unseturl()
{
    urlIsSet_ = false;
}

int32_t SecondarySourcesInfo::getBitrate() const
{
    return bitrate_;
}

void SecondarySourcesInfo::setBitrate(int32_t value)
{
    bitrate_ = value;
    bitrateIsSet_ = true;
}

bool SecondarySourcesInfo::bitrateIsSet() const
{
    return bitrateIsSet_;
}

void SecondarySourcesInfo::unsetbitrate()
{
    bitrateIsSet_ = false;
}

int32_t SecondarySourcesInfo::getWidth() const
{
    return width_;
}

void SecondarySourcesInfo::setWidth(int32_t value)
{
    width_ = value;
    widthIsSet_ = true;
}

bool SecondarySourcesInfo::widthIsSet() const
{
    return widthIsSet_;
}

void SecondarySourcesInfo::unsetwidth()
{
    widthIsSet_ = false;
}

int32_t SecondarySourcesInfo::getHeight() const
{
    return height_;
}

void SecondarySourcesInfo::setHeight(int32_t value)
{
    height_ = value;
    heightIsSet_ = true;
}

bool SecondarySourcesInfo::heightIsSet() const
{
    return heightIsSet_;
}

void SecondarySourcesInfo::unsetheight()
{
    heightIsSet_ = false;
}

bool SecondarySourcesInfo::isBitrateFor3u8() const
{
    return bitrateFor3u8_;
}

void SecondarySourcesInfo::setBitrateFor3u8(bool value)
{
    bitrateFor3u8_ = value;
    bitrateFor3u8IsSet_ = true;
}

bool SecondarySourcesInfo::bitrateFor3u8IsSet() const
{
    return bitrateFor3u8IsSet_;
}

void SecondarySourcesInfo::unsetbitrateFor3u8()
{
    bitrateFor3u8IsSet_ = false;
}

std::string SecondarySourcesInfo::getPassphrase() const
{
    return passphrase_;
}

void SecondarySourcesInfo::setPassphrase(const std::string& value)
{
    passphrase_ = value;
    passphraseIsSet_ = true;
}

bool SecondarySourcesInfo::passphraseIsSet() const
{
    return passphraseIsSet_;
}

void SecondarySourcesInfo::unsetpassphrase()
{
    passphraseIsSet_ = false;
}

std::vector<std::string>& SecondarySourcesInfo::getBackupUrls()
{
    return backupUrls_;
}

void SecondarySourcesInfo::setBackupUrls(const std::vector<std::string>& value)
{
    backupUrls_ = value;
    backupUrlsIsSet_ = true;
}

bool SecondarySourcesInfo::backupUrlsIsSet() const
{
    return backupUrlsIsSet_;
}

void SecondarySourcesInfo::unsetbackupUrls()
{
    backupUrlsIsSet_ = false;
}

std::string SecondarySourcesInfo::getStreamId() const
{
    return streamId_;
}

void SecondarySourcesInfo::setStreamId(const std::string& value)
{
    streamId_ = value;
    streamIdIsSet_ = true;
}

bool SecondarySourcesInfo::streamIdIsSet() const
{
    return streamIdIsSet_;
}

void SecondarySourcesInfo::unsetstreamId()
{
    streamIdIsSet_ = false;
}

int32_t SecondarySourcesInfo::getLatency() const
{
    return latency_;
}

void SecondarySourcesInfo::setLatency(int32_t value)
{
    latency_ = value;
    latencyIsSet_ = true;
}

bool SecondarySourcesInfo::latencyIsSet() const
{
    return latencyIsSet_;
}

void SecondarySourcesInfo::unsetlatency()
{
    latencyIsSet_ = false;
}

}
}
}
}
}


