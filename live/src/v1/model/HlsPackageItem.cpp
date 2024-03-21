

#include "huaweicloud/live/v1/model/HlsPackageItem.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




HlsPackageItem::HlsPackageItem()
{
    url_ = "";
    urlIsSet_ = false;
    streamSelectionIsSet_ = false;
    hlsVersion_ = "";
    hlsVersionIsSet_ = false;
    segmentDurationSeconds_ = 0;
    segmentDurationSecondsIsSet_ = false;
    playlistWindowSeconds_ = 0;
    playlistWindowSecondsIsSet_ = false;
    encryptionIsSet_ = false;
    adsIsSet_ = false;
    extArgsIsSet_ = false;
    requestArgsIsSet_ = false;
}

HlsPackageItem::~HlsPackageItem() = default;

void HlsPackageItem::validate()
{
}

web::json::value HlsPackageItem::toJson() const
{
    web::json::value val = web::json::value::object();

    if(urlIsSet_) {
        val[utility::conversions::to_string_t("url")] = ModelBase::toJson(url_);
    }
    if(streamSelectionIsSet_) {
        val[utility::conversions::to_string_t("stream_selection")] = ModelBase::toJson(streamSelection_);
    }
    if(hlsVersionIsSet_) {
        val[utility::conversions::to_string_t("hls_version")] = ModelBase::toJson(hlsVersion_);
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
    if(adsIsSet_) {
        val[utility::conversions::to_string_t("ads")] = ModelBase::toJson(ads_);
    }
    if(extArgsIsSet_) {
        val[utility::conversions::to_string_t("ext_args")] = ModelBase::toJson(extArgs_);
    }
    if(requestArgsIsSet_) {
        val[utility::conversions::to_string_t("request_args")] = ModelBase::toJson(requestArgs_);
    }

    return val;
}
bool HlsPackageItem::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("hls_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hls_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHlsVersion(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("ads"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ads"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAds(refVal);
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


std::string HlsPackageItem::getUrl() const
{
    return url_;
}

void HlsPackageItem::setUrl(const std::string& value)
{
    url_ = value;
    urlIsSet_ = true;
}

bool HlsPackageItem::urlIsSet() const
{
    return urlIsSet_;
}

void HlsPackageItem::unseturl()
{
    urlIsSet_ = false;
}

std::vector<StreamSelectionItem>& HlsPackageItem::getStreamSelection()
{
    return streamSelection_;
}

void HlsPackageItem::setStreamSelection(const std::vector<StreamSelectionItem>& value)
{
    streamSelection_ = value;
    streamSelectionIsSet_ = true;
}

bool HlsPackageItem::streamSelectionIsSet() const
{
    return streamSelectionIsSet_;
}

void HlsPackageItem::unsetstreamSelection()
{
    streamSelectionIsSet_ = false;
}

std::string HlsPackageItem::getHlsVersion() const
{
    return hlsVersion_;
}

void HlsPackageItem::setHlsVersion(const std::string& value)
{
    hlsVersion_ = value;
    hlsVersionIsSet_ = true;
}

bool HlsPackageItem::hlsVersionIsSet() const
{
    return hlsVersionIsSet_;
}

void HlsPackageItem::unsethlsVersion()
{
    hlsVersionIsSet_ = false;
}

int32_t HlsPackageItem::getSegmentDurationSeconds() const
{
    return segmentDurationSeconds_;
}

void HlsPackageItem::setSegmentDurationSeconds(int32_t value)
{
    segmentDurationSeconds_ = value;
    segmentDurationSecondsIsSet_ = true;
}

bool HlsPackageItem::segmentDurationSecondsIsSet() const
{
    return segmentDurationSecondsIsSet_;
}

void HlsPackageItem::unsetsegmentDurationSeconds()
{
    segmentDurationSecondsIsSet_ = false;
}

int32_t HlsPackageItem::getPlaylistWindowSeconds() const
{
    return playlistWindowSeconds_;
}

void HlsPackageItem::setPlaylistWindowSeconds(int32_t value)
{
    playlistWindowSeconds_ = value;
    playlistWindowSecondsIsSet_ = true;
}

bool HlsPackageItem::playlistWindowSecondsIsSet() const
{
    return playlistWindowSecondsIsSet_;
}

void HlsPackageItem::unsetplaylistWindowSeconds()
{
    playlistWindowSecondsIsSet_ = false;
}

Encryption HlsPackageItem::getEncryption() const
{
    return encryption_;
}

void HlsPackageItem::setEncryption(const Encryption& value)
{
    encryption_ = value;
    encryptionIsSet_ = true;
}

bool HlsPackageItem::encryptionIsSet() const
{
    return encryptionIsSet_;
}

void HlsPackageItem::unsetencryption()
{
    encryptionIsSet_ = false;
}

Object HlsPackageItem::getAds() const
{
    return ads_;
}

void HlsPackageItem::setAds(const Object& value)
{
    ads_ = value;
    adsIsSet_ = true;
}

bool HlsPackageItem::adsIsSet() const
{
    return adsIsSet_;
}

void HlsPackageItem::unsetads()
{
    adsIsSet_ = false;
}

Object HlsPackageItem::getExtArgs() const
{
    return extArgs_;
}

void HlsPackageItem::setExtArgs(const Object& value)
{
    extArgs_ = value;
    extArgsIsSet_ = true;
}

bool HlsPackageItem::extArgsIsSet() const
{
    return extArgsIsSet_;
}

void HlsPackageItem::unsetextArgs()
{
    extArgsIsSet_ = false;
}

PackageRequestArgs HlsPackageItem::getRequestArgs() const
{
    return requestArgs_;
}

void HlsPackageItem::setRequestArgs(const PackageRequestArgs& value)
{
    requestArgs_ = value;
    requestArgsIsSet_ = true;
}

bool HlsPackageItem::requestArgsIsSet() const
{
    return requestArgsIsSet_;
}

void HlsPackageItem::unsetrequestArgs()
{
    requestArgsIsSet_ = false;
}

}
}
}
}
}


