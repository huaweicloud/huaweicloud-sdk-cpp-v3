

#include "huaweicloud/live/v1/model/DashPackageItem.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




DashPackageItem::DashPackageItem()
{
    url_ = "";
    urlIsSet_ = false;
    streamSelectionIsSet_ = false;
    segmentDurationSeconds_ = 0;
    segmentDurationSecondsIsSet_ = false;
    playlistWindowSeconds_ = 0;
    playlistWindowSecondsIsSet_ = false;
    encryptionIsSet_ = false;
    adsIsSet_ = false;
    extArgsIsSet_ = false;
    requestArgsIsSet_ = false;
    adMarker_ = "";
    adMarkerIsSet_ = false;
    suggestedPresentationDelay_ = 0;
    suggestedPresentationDelayIsSet_ = false;
    minimumUpdatePeriod_ = 0;
    minimumUpdatePeriodIsSet_ = false;
    minBufferTime_ = 0;
    minBufferTimeIsSet_ = false;
}

DashPackageItem::~DashPackageItem() = default;

void DashPackageItem::validate()
{
}

web::json::value DashPackageItem::toJson() const
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
    if(adsIsSet_) {
        val[utility::conversions::to_string_t("ads")] = ModelBase::toJson(ads_);
    }
    if(extArgsIsSet_) {
        val[utility::conversions::to_string_t("ext_args")] = ModelBase::toJson(extArgs_);
    }
    if(requestArgsIsSet_) {
        val[utility::conversions::to_string_t("request_args")] = ModelBase::toJson(requestArgs_);
    }
    if(adMarkerIsSet_) {
        val[utility::conversions::to_string_t("ad_marker")] = ModelBase::toJson(adMarker_);
    }
    if(suggestedPresentationDelayIsSet_) {
        val[utility::conversions::to_string_t("suggested_presentation_delay")] = ModelBase::toJson(suggestedPresentationDelay_);
    }
    if(minimumUpdatePeriodIsSet_) {
        val[utility::conversions::to_string_t("minimum_update_period")] = ModelBase::toJson(minimumUpdatePeriod_);
    }
    if(minBufferTimeIsSet_) {
        val[utility::conversions::to_string_t("min_buffer_time")] = ModelBase::toJson(minBufferTime_);
    }

    return val;
}
bool DashPackageItem::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("ad_marker"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ad_marker"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAdMarker(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("suggested_presentation_delay"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("suggested_presentation_delay"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSuggestedPresentationDelay(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("minimum_update_period"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("minimum_update_period"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMinimumUpdatePeriod(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("min_buffer_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("min_buffer_time"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMinBufferTime(refVal);
        }
    }
    return ok;
}


std::string DashPackageItem::getUrl() const
{
    return url_;
}

void DashPackageItem::setUrl(const std::string& value)
{
    url_ = value;
    urlIsSet_ = true;
}

bool DashPackageItem::urlIsSet() const
{
    return urlIsSet_;
}

void DashPackageItem::unseturl()
{
    urlIsSet_ = false;
}

std::vector<StreamSelectionItem>& DashPackageItem::getStreamSelection()
{
    return streamSelection_;
}

void DashPackageItem::setStreamSelection(const std::vector<StreamSelectionItem>& value)
{
    streamSelection_ = value;
    streamSelectionIsSet_ = true;
}

bool DashPackageItem::streamSelectionIsSet() const
{
    return streamSelectionIsSet_;
}

void DashPackageItem::unsetstreamSelection()
{
    streamSelectionIsSet_ = false;
}

int32_t DashPackageItem::getSegmentDurationSeconds() const
{
    return segmentDurationSeconds_;
}

void DashPackageItem::setSegmentDurationSeconds(int32_t value)
{
    segmentDurationSeconds_ = value;
    segmentDurationSecondsIsSet_ = true;
}

bool DashPackageItem::segmentDurationSecondsIsSet() const
{
    return segmentDurationSecondsIsSet_;
}

void DashPackageItem::unsetsegmentDurationSeconds()
{
    segmentDurationSecondsIsSet_ = false;
}

int32_t DashPackageItem::getPlaylistWindowSeconds() const
{
    return playlistWindowSeconds_;
}

void DashPackageItem::setPlaylistWindowSeconds(int32_t value)
{
    playlistWindowSeconds_ = value;
    playlistWindowSecondsIsSet_ = true;
}

bool DashPackageItem::playlistWindowSecondsIsSet() const
{
    return playlistWindowSecondsIsSet_;
}

void DashPackageItem::unsetplaylistWindowSeconds()
{
    playlistWindowSecondsIsSet_ = false;
}

Encryption DashPackageItem::getEncryption() const
{
    return encryption_;
}

void DashPackageItem::setEncryption(const Encryption& value)
{
    encryption_ = value;
    encryptionIsSet_ = true;
}

bool DashPackageItem::encryptionIsSet() const
{
    return encryptionIsSet_;
}

void DashPackageItem::unsetencryption()
{
    encryptionIsSet_ = false;
}

Object DashPackageItem::getAds() const
{
    return ads_;
}

void DashPackageItem::setAds(const Object& value)
{
    ads_ = value;
    adsIsSet_ = true;
}

bool DashPackageItem::adsIsSet() const
{
    return adsIsSet_;
}

void DashPackageItem::unsetads()
{
    adsIsSet_ = false;
}

Object DashPackageItem::getExtArgs() const
{
    return extArgs_;
}

void DashPackageItem::setExtArgs(const Object& value)
{
    extArgs_ = value;
    extArgsIsSet_ = true;
}

bool DashPackageItem::extArgsIsSet() const
{
    return extArgsIsSet_;
}

void DashPackageItem::unsetextArgs()
{
    extArgsIsSet_ = false;
}

PackageRequestArgs DashPackageItem::getRequestArgs() const
{
    return requestArgs_;
}

void DashPackageItem::setRequestArgs(const PackageRequestArgs& value)
{
    requestArgs_ = value;
    requestArgsIsSet_ = true;
}

bool DashPackageItem::requestArgsIsSet() const
{
    return requestArgsIsSet_;
}

void DashPackageItem::unsetrequestArgs()
{
    requestArgsIsSet_ = false;
}

std::string DashPackageItem::getAdMarker() const
{
    return adMarker_;
}

void DashPackageItem::setAdMarker(const std::string& value)
{
    adMarker_ = value;
    adMarkerIsSet_ = true;
}

bool DashPackageItem::adMarkerIsSet() const
{
    return adMarkerIsSet_;
}

void DashPackageItem::unsetadMarker()
{
    adMarkerIsSet_ = false;
}

int32_t DashPackageItem::getSuggestedPresentationDelay() const
{
    return suggestedPresentationDelay_;
}

void DashPackageItem::setSuggestedPresentationDelay(int32_t value)
{
    suggestedPresentationDelay_ = value;
    suggestedPresentationDelayIsSet_ = true;
}

bool DashPackageItem::suggestedPresentationDelayIsSet() const
{
    return suggestedPresentationDelayIsSet_;
}

void DashPackageItem::unsetsuggestedPresentationDelay()
{
    suggestedPresentationDelayIsSet_ = false;
}

int32_t DashPackageItem::getMinimumUpdatePeriod() const
{
    return minimumUpdatePeriod_;
}

void DashPackageItem::setMinimumUpdatePeriod(int32_t value)
{
    minimumUpdatePeriod_ = value;
    minimumUpdatePeriodIsSet_ = true;
}

bool DashPackageItem::minimumUpdatePeriodIsSet() const
{
    return minimumUpdatePeriodIsSet_;
}

void DashPackageItem::unsetminimumUpdatePeriod()
{
    minimumUpdatePeriodIsSet_ = false;
}

int32_t DashPackageItem::getMinBufferTime() const
{
    return minBufferTime_;
}

void DashPackageItem::setMinBufferTime(int32_t value)
{
    minBufferTime_ = value;
    minBufferTimeIsSet_ = true;
}

bool DashPackageItem::minBufferTimeIsSet() const
{
    return minBufferTimeIsSet_;
}

void DashPackageItem::unsetminBufferTime()
{
    minBufferTimeIsSet_ = false;
}

}
}
}
}
}


