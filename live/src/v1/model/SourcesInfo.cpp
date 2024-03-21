

#include "huaweicloud/live/v1/model/SourcesInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




SourcesInfo::SourcesInfo()
{
    url_ = "";
    urlIsSet_ = false;
    bitrate_ = 0;
    bitrateIsSet_ = false;
    width_ = 0;
    widthIsSet_ = false;
    height_ = 0;
    heightIsSet_ = false;
    enableSnapshot_ = false;
    enableSnapshotIsSet_ = false;
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

SourcesInfo::~SourcesInfo() = default;

void SourcesInfo::validate()
{
}

web::json::value SourcesInfo::toJson() const
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
    if(enableSnapshotIsSet_) {
        val[utility::conversions::to_string_t("enable_snapshot")] = ModelBase::toJson(enableSnapshot_);
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
bool SourcesInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("enable_snapshot"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enable_snapshot"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnableSnapshot(refVal);
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


std::string SourcesInfo::getUrl() const
{
    return url_;
}

void SourcesInfo::setUrl(const std::string& value)
{
    url_ = value;
    urlIsSet_ = true;
}

bool SourcesInfo::urlIsSet() const
{
    return urlIsSet_;
}

void SourcesInfo::unseturl()
{
    urlIsSet_ = false;
}

int32_t SourcesInfo::getBitrate() const
{
    return bitrate_;
}

void SourcesInfo::setBitrate(int32_t value)
{
    bitrate_ = value;
    bitrateIsSet_ = true;
}

bool SourcesInfo::bitrateIsSet() const
{
    return bitrateIsSet_;
}

void SourcesInfo::unsetbitrate()
{
    bitrateIsSet_ = false;
}

int32_t SourcesInfo::getWidth() const
{
    return width_;
}

void SourcesInfo::setWidth(int32_t value)
{
    width_ = value;
    widthIsSet_ = true;
}

bool SourcesInfo::widthIsSet() const
{
    return widthIsSet_;
}

void SourcesInfo::unsetwidth()
{
    widthIsSet_ = false;
}

int32_t SourcesInfo::getHeight() const
{
    return height_;
}

void SourcesInfo::setHeight(int32_t value)
{
    height_ = value;
    heightIsSet_ = true;
}

bool SourcesInfo::heightIsSet() const
{
    return heightIsSet_;
}

void SourcesInfo::unsetheight()
{
    heightIsSet_ = false;
}

bool SourcesInfo::isEnableSnapshot() const
{
    return enableSnapshot_;
}

void SourcesInfo::setEnableSnapshot(bool value)
{
    enableSnapshot_ = value;
    enableSnapshotIsSet_ = true;
}

bool SourcesInfo::enableSnapshotIsSet() const
{
    return enableSnapshotIsSet_;
}

void SourcesInfo::unsetenableSnapshot()
{
    enableSnapshotIsSet_ = false;
}

bool SourcesInfo::isBitrateFor3u8() const
{
    return bitrateFor3u8_;
}

void SourcesInfo::setBitrateFor3u8(bool value)
{
    bitrateFor3u8_ = value;
    bitrateFor3u8IsSet_ = true;
}

bool SourcesInfo::bitrateFor3u8IsSet() const
{
    return bitrateFor3u8IsSet_;
}

void SourcesInfo::unsetbitrateFor3u8()
{
    bitrateFor3u8IsSet_ = false;
}

std::string SourcesInfo::getPassphrase() const
{
    return passphrase_;
}

void SourcesInfo::setPassphrase(const std::string& value)
{
    passphrase_ = value;
    passphraseIsSet_ = true;
}

bool SourcesInfo::passphraseIsSet() const
{
    return passphraseIsSet_;
}

void SourcesInfo::unsetpassphrase()
{
    passphraseIsSet_ = false;
}

std::vector<std::string>& SourcesInfo::getBackupUrls()
{
    return backupUrls_;
}

void SourcesInfo::setBackupUrls(const std::vector<std::string>& value)
{
    backupUrls_ = value;
    backupUrlsIsSet_ = true;
}

bool SourcesInfo::backupUrlsIsSet() const
{
    return backupUrlsIsSet_;
}

void SourcesInfo::unsetbackupUrls()
{
    backupUrlsIsSet_ = false;
}

std::string SourcesInfo::getStreamId() const
{
    return streamId_;
}

void SourcesInfo::setStreamId(const std::string& value)
{
    streamId_ = value;
    streamIdIsSet_ = true;
}

bool SourcesInfo::streamIdIsSet() const
{
    return streamIdIsSet_;
}

void SourcesInfo::unsetstreamId()
{
    streamIdIsSet_ = false;
}

int32_t SourcesInfo::getLatency() const
{
    return latency_;
}

void SourcesInfo::setLatency(int32_t value)
{
    latency_ = value;
    latencyIsSet_ = true;
}

bool SourcesInfo::latencyIsSet() const
{
    return latencyIsSet_;
}

void SourcesInfo::unsetlatency()
{
    latencyIsSet_ = false;
}

}
}
}
}
}


