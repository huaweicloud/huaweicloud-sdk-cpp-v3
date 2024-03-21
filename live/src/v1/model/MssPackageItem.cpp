

#include "huaweicloud/live/v1/model/MssPackageItem.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




MssPackageItem::MssPackageItem()
{
    url_ = "";
    urlIsSet_ = false;
    streamSelectionIsSet_ = false;
    segmentDurationSeconds_ = 0;
    segmentDurationSecondsIsSet_ = false;
    playlistWindowSeconds_ = 0;
    playlistWindowSecondsIsSet_ = false;
    encryptionIsSet_ = false;
    extArgsIsSet_ = false;
    delaySegment_ = 0;
    delaySegmentIsSet_ = false;
    requestArgsIsSet_ = false;
}

MssPackageItem::~MssPackageItem() = default;

void MssPackageItem::validate()
{
}

web::json::value MssPackageItem::toJson() const
{
    web::json::value val = web::json::value::object();

    if(urlIsSet_) {
        val[utility::conversions::to_string_t("url")] = ModelBase::toJson(url_);
    }
    if(streamSelectionIsSet_) {
        val[utility::conversions::to_string_t("stream_selection")] = ModelBase::toJson(streamSelection_);
    }
    if(segmentDurationSecondsIsSet_) {
        val[utility::conversions::to_string_t("segment_duration_seconds")] = ModelBase::toJson(segmentDurationSeconds_);
    }
    if(playlistWindowSecondsIsSet_) {
        val[utility::conversions::to_string_t("playlist_window_seconds")] = ModelBase::toJson(playlistWindowSeconds_);
    }
    if(encryptionIsSet_) {
        val[utility::conversions::to_string_t("encryption")] = ModelBase::toJson(encryption_);
    }
    if(extArgsIsSet_) {
        val[utility::conversions::to_string_t("ext_args")] = ModelBase::toJson(extArgs_);
    }
    if(delaySegmentIsSet_) {
        val[utility::conversions::to_string_t("delay_segment")] = ModelBase::toJson(delaySegment_);
    }
    if(requestArgsIsSet_) {
        val[utility::conversions::to_string_t("request_args")] = ModelBase::toJson(requestArgs_);
    }

    return val;
}
bool MssPackageItem::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("stream_selection"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("stream_selection"));
        if(!fieldValue.is_null())
        {
            std::vector<StreamSelectionItem> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStreamSelection(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("segment_duration_seconds"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("segment_duration_seconds"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSegmentDurationSeconds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("playlist_window_seconds"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("playlist_window_seconds"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPlaylistWindowSeconds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("encryption"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("encryption"));
        if(!fieldValue.is_null())
        {
            Encryption refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEncryption(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ext_args"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ext_args"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExtArgs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("delay_segment"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("delay_segment"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDelaySegment(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("request_args"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("request_args"));
        if(!fieldValue.is_null())
        {
            PackageRequestArgs refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRequestArgs(refVal);
        }
    }
    return ok;
}


std::string MssPackageItem::getUrl() const
{
    return url_;
}

void MssPackageItem::setUrl(const std::string& value)
{
    url_ = value;
    urlIsSet_ = true;
}

bool MssPackageItem::urlIsSet() const
{
    return urlIsSet_;
}

void MssPackageItem::unseturl()
{
    urlIsSet_ = false;
}

std::vector<StreamSelectionItem>& MssPackageItem::getStreamSelection()
{
    return streamSelection_;
}

void MssPackageItem::setStreamSelection(const std::vector<StreamSelectionItem>& value)
{
    streamSelection_ = value;
    streamSelectionIsSet_ = true;
}

bool MssPackageItem::streamSelectionIsSet() const
{
    return streamSelectionIsSet_;
}

void MssPackageItem::unsetstreamSelection()
{
    streamSelectionIsSet_ = false;
}

int32_t MssPackageItem::getSegmentDurationSeconds() const
{
    return segmentDurationSeconds_;
}

void MssPackageItem::setSegmentDurationSeconds(int32_t value)
{
    segmentDurationSeconds_ = value;
    segmentDurationSecondsIsSet_ = true;
}

bool MssPackageItem::segmentDurationSecondsIsSet() const
{
    return segmentDurationSecondsIsSet_;
}

void MssPackageItem::unsetsegmentDurationSeconds()
{
    segmentDurationSecondsIsSet_ = false;
}

int32_t MssPackageItem::getPlaylistWindowSeconds() const
{
    return playlistWindowSeconds_;
}

void MssPackageItem::setPlaylistWindowSeconds(int32_t value)
{
    playlistWindowSeconds_ = value;
    playlistWindowSecondsIsSet_ = true;
}

bool MssPackageItem::playlistWindowSecondsIsSet() const
{
    return playlistWindowSecondsIsSet_;
}

void MssPackageItem::unsetplaylistWindowSeconds()
{
    playlistWindowSecondsIsSet_ = false;
}

Encryption MssPackageItem::getEncryption() const
{
    return encryption_;
}

void MssPackageItem::setEncryption(const Encryption& value)
{
    encryption_ = value;
    encryptionIsSet_ = true;
}

bool MssPackageItem::encryptionIsSet() const
{
    return encryptionIsSet_;
}

void MssPackageItem::unsetencryption()
{
    encryptionIsSet_ = false;
}

Object MssPackageItem::getExtArgs() const
{
    return extArgs_;
}

void MssPackageItem::setExtArgs(const Object& value)
{
    extArgs_ = value;
    extArgsIsSet_ = true;
}

bool MssPackageItem::extArgsIsSet() const
{
    return extArgsIsSet_;
}

void MssPackageItem::unsetextArgs()
{
    extArgsIsSet_ = false;
}

int32_t MssPackageItem::getDelaySegment() const
{
    return delaySegment_;
}

void MssPackageItem::setDelaySegment(int32_t value)
{
    delaySegment_ = value;
    delaySegmentIsSet_ = true;
}

bool MssPackageItem::delaySegmentIsSet() const
{
    return delaySegmentIsSet_;
}

void MssPackageItem::unsetdelaySegment()
{
    delaySegmentIsSet_ = false;
}

PackageRequestArgs MssPackageItem::getRequestArgs() const
{
    return requestArgs_;
}

void MssPackageItem::setRequestArgs(const PackageRequestArgs& value)
{
    requestArgs_ = value;
    requestArgsIsSet_ = true;
}

bool MssPackageItem::requestArgsIsSet() const
{
    return requestArgsIsSet_;
}

void MssPackageItem::unsetrequestArgs()
{
    requestArgsIsSet_ = false;
}

}
}
}
}
}


