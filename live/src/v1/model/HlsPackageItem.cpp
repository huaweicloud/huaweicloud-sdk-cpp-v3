

#include "huaweicloud/live/v1/model/HlsPackageItem.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




HlsPackageItem::HlsPackageItem()
{
    id_ = "";
    idIsSet_ = false;
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
    adMarkerIsSet_ = false;
    enableAccess_ = false;
    enableAccessIsSet_ = false;
    allowAllIpAccess_ = false;
    allowAllIpAccessIsSet_ = false;
    ipWhitelist_ = "";
    ipWhitelistIsSet_ = false;
    cdnIdentifierHeaderIsSet_ = false;
    originDomainMaster_ = "";
    originDomainMasterIsSet_ = false;
    originDomainSlave_ = "";
    originDomainSlaveIsSet_ = false;
    manifestName_ = "";
    manifestNameIsSet_ = false;
    slaveUrl_ = "";
    slaveUrlIsSet_ = false;
    manifestSelectionIsSet_ = false;
}

HlsPackageItem::~HlsPackageItem() = default;

void HlsPackageItem::validate()
{
}

web::json::value HlsPackageItem::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
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
    if(adMarkerIsSet_) {
        val[utility::conversions::to_string_t("ad_marker")] = ModelBase::toJson(adMarker_);
    }
    if(enableAccessIsSet_) {
        val[utility::conversions::to_string_t("enable_access")] = ModelBase::toJson(enableAccess_);
    }
    if(allowAllIpAccessIsSet_) {
        val[utility::conversions::to_string_t("allow_all_ip_access")] = ModelBase::toJson(allowAllIpAccess_);
    }
    if(ipWhitelistIsSet_) {
        val[utility::conversions::to_string_t("ip_whitelist")] = ModelBase::toJson(ipWhitelist_);
    }
    if(cdnIdentifierHeaderIsSet_) {
        val[utility::conversions::to_string_t("cdn_identifier_header")] = ModelBase::toJson(cdnIdentifierHeader_);
    }
    if(originDomainMasterIsSet_) {
        val[utility::conversions::to_string_t("origin_domain_master")] = ModelBase::toJson(originDomainMaster_);
    }
    if(originDomainSlaveIsSet_) {
        val[utility::conversions::to_string_t("origin_domain_slave")] = ModelBase::toJson(originDomainSlave_);
    }
    if(manifestNameIsSet_) {
        val[utility::conversions::to_string_t("manifest_name")] = ModelBase::toJson(manifestName_);
    }
    if(slaveUrlIsSet_) {
        val[utility::conversions::to_string_t("slave_url")] = ModelBase::toJson(slaveUrl_);
    }
    if(manifestSelectionIsSet_) {
        val[utility::conversions::to_string_t("manifest_selection")] = ModelBase::toJson(manifestSelection_);
    }

    return val;
}
bool HlsPackageItem::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
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
    if(val.has_field(utility::conversions::to_string_t("ad_marker"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ad_marker"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAdMarker(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enable_access"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enable_access"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnableAccess(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("allow_all_ip_access"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("allow_all_ip_access"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAllowAllIpAccess(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ip_whitelist"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ip_whitelist"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpWhitelist(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cdn_identifier_header"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cdn_identifier_header"));
        if(!fieldValue.is_null())
        {
            HttpHeader refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCdnIdentifierHeader(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("origin_domain_master"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("origin_domain_master"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOriginDomainMaster(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("origin_domain_slave"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("origin_domain_slave"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOriginDomainSlave(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("manifest_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("manifest_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setManifestName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("slave_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("slave_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSlaveUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("manifest_selection"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("manifest_selection"));
        if(!fieldValue.is_null())
        {
            ManifestSelection refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setManifestSelection(refVal);
        }
    }
    return ok;
}


std::string HlsPackageItem::getId() const
{
    return id_;
}

void HlsPackageItem::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool HlsPackageItem::idIsSet() const
{
    return idIsSet_;
}

void HlsPackageItem::unsetid()
{
    idIsSet_ = false;
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

std::vector<std::string>& HlsPackageItem::getAdMarker()
{
    return adMarker_;
}

void HlsPackageItem::setAdMarker(const std::vector<std::string>& value)
{
    adMarker_ = value;
    adMarkerIsSet_ = true;
}

bool HlsPackageItem::adMarkerIsSet() const
{
    return adMarkerIsSet_;
}

void HlsPackageItem::unsetadMarker()
{
    adMarkerIsSet_ = false;
}

bool HlsPackageItem::isEnableAccess() const
{
    return enableAccess_;
}

void HlsPackageItem::setEnableAccess(bool value)
{
    enableAccess_ = value;
    enableAccessIsSet_ = true;
}

bool HlsPackageItem::enableAccessIsSet() const
{
    return enableAccessIsSet_;
}

void HlsPackageItem::unsetenableAccess()
{
    enableAccessIsSet_ = false;
}

bool HlsPackageItem::isAllowAllIpAccess() const
{
    return allowAllIpAccess_;
}

void HlsPackageItem::setAllowAllIpAccess(bool value)
{
    allowAllIpAccess_ = value;
    allowAllIpAccessIsSet_ = true;
}

bool HlsPackageItem::allowAllIpAccessIsSet() const
{
    return allowAllIpAccessIsSet_;
}

void HlsPackageItem::unsetallowAllIpAccess()
{
    allowAllIpAccessIsSet_ = false;
}

std::string HlsPackageItem::getIpWhitelist() const
{
    return ipWhitelist_;
}

void HlsPackageItem::setIpWhitelist(const std::string& value)
{
    ipWhitelist_ = value;
    ipWhitelistIsSet_ = true;
}

bool HlsPackageItem::ipWhitelistIsSet() const
{
    return ipWhitelistIsSet_;
}

void HlsPackageItem::unsetipWhitelist()
{
    ipWhitelistIsSet_ = false;
}

HttpHeader HlsPackageItem::getCdnIdentifierHeader() const
{
    return cdnIdentifierHeader_;
}

void HlsPackageItem::setCdnIdentifierHeader(const HttpHeader& value)
{
    cdnIdentifierHeader_ = value;
    cdnIdentifierHeaderIsSet_ = true;
}

bool HlsPackageItem::cdnIdentifierHeaderIsSet() const
{
    return cdnIdentifierHeaderIsSet_;
}

void HlsPackageItem::unsetcdnIdentifierHeader()
{
    cdnIdentifierHeaderIsSet_ = false;
}

std::string HlsPackageItem::getOriginDomainMaster() const
{
    return originDomainMaster_;
}

void HlsPackageItem::setOriginDomainMaster(const std::string& value)
{
    originDomainMaster_ = value;
    originDomainMasterIsSet_ = true;
}

bool HlsPackageItem::originDomainMasterIsSet() const
{
    return originDomainMasterIsSet_;
}

void HlsPackageItem::unsetoriginDomainMaster()
{
    originDomainMasterIsSet_ = false;
}

std::string HlsPackageItem::getOriginDomainSlave() const
{
    return originDomainSlave_;
}

void HlsPackageItem::setOriginDomainSlave(const std::string& value)
{
    originDomainSlave_ = value;
    originDomainSlaveIsSet_ = true;
}

bool HlsPackageItem::originDomainSlaveIsSet() const
{
    return originDomainSlaveIsSet_;
}

void HlsPackageItem::unsetoriginDomainSlave()
{
    originDomainSlaveIsSet_ = false;
}

std::string HlsPackageItem::getManifestName() const
{
    return manifestName_;
}

void HlsPackageItem::setManifestName(const std::string& value)
{
    manifestName_ = value;
    manifestNameIsSet_ = true;
}

bool HlsPackageItem::manifestNameIsSet() const
{
    return manifestNameIsSet_;
}

void HlsPackageItem::unsetmanifestName()
{
    manifestNameIsSet_ = false;
}

std::string HlsPackageItem::getSlaveUrl() const
{
    return slaveUrl_;
}

void HlsPackageItem::setSlaveUrl(const std::string& value)
{
    slaveUrl_ = value;
    slaveUrlIsSet_ = true;
}

bool HlsPackageItem::slaveUrlIsSet() const
{
    return slaveUrlIsSet_;
}

void HlsPackageItem::unsetslaveUrl()
{
    slaveUrlIsSet_ = false;
}

ManifestSelection HlsPackageItem::getManifestSelection() const
{
    return manifestSelection_;
}

void HlsPackageItem::setManifestSelection(const ManifestSelection& value)
{
    manifestSelection_ = value;
    manifestSelectionIsSet_ = true;
}

bool HlsPackageItem::manifestSelectionIsSet() const
{
    return manifestSelectionIsSet_;
}

void HlsPackageItem::unsetmanifestSelection()
{
    manifestSelectionIsSet_ = false;
}

}
}
}
}
}


