

#include "huaweicloud/live/v1/model/MssPackageItem.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




MssPackageItem::MssPackageItem()
{
    id_ = "";
    idIsSet_ = false;
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

MssPackageItem::~MssPackageItem() = default;

void MssPackageItem::validate()
{
}

web::json::value MssPackageItem::toJson() const
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
bool MssPackageItem::fromJson(const web::json::value& val)
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


std::string MssPackageItem::getId() const
{
    return id_;
}

void MssPackageItem::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool MssPackageItem::idIsSet() const
{
    return idIsSet_;
}

void MssPackageItem::unsetid()
{
    idIsSet_ = false;
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

bool MssPackageItem::isEnableAccess() const
{
    return enableAccess_;
}

void MssPackageItem::setEnableAccess(bool value)
{
    enableAccess_ = value;
    enableAccessIsSet_ = true;
}

bool MssPackageItem::enableAccessIsSet() const
{
    return enableAccessIsSet_;
}

void MssPackageItem::unsetenableAccess()
{
    enableAccessIsSet_ = false;
}

bool MssPackageItem::isAllowAllIpAccess() const
{
    return allowAllIpAccess_;
}

void MssPackageItem::setAllowAllIpAccess(bool value)
{
    allowAllIpAccess_ = value;
    allowAllIpAccessIsSet_ = true;
}

bool MssPackageItem::allowAllIpAccessIsSet() const
{
    return allowAllIpAccessIsSet_;
}

void MssPackageItem::unsetallowAllIpAccess()
{
    allowAllIpAccessIsSet_ = false;
}

std::string MssPackageItem::getIpWhitelist() const
{
    return ipWhitelist_;
}

void MssPackageItem::setIpWhitelist(const std::string& value)
{
    ipWhitelist_ = value;
    ipWhitelistIsSet_ = true;
}

bool MssPackageItem::ipWhitelistIsSet() const
{
    return ipWhitelistIsSet_;
}

void MssPackageItem::unsetipWhitelist()
{
    ipWhitelistIsSet_ = false;
}

HttpHeader MssPackageItem::getCdnIdentifierHeader() const
{
    return cdnIdentifierHeader_;
}

void MssPackageItem::setCdnIdentifierHeader(const HttpHeader& value)
{
    cdnIdentifierHeader_ = value;
    cdnIdentifierHeaderIsSet_ = true;
}

bool MssPackageItem::cdnIdentifierHeaderIsSet() const
{
    return cdnIdentifierHeaderIsSet_;
}

void MssPackageItem::unsetcdnIdentifierHeader()
{
    cdnIdentifierHeaderIsSet_ = false;
}

std::string MssPackageItem::getOriginDomainMaster() const
{
    return originDomainMaster_;
}

void MssPackageItem::setOriginDomainMaster(const std::string& value)
{
    originDomainMaster_ = value;
    originDomainMasterIsSet_ = true;
}

bool MssPackageItem::originDomainMasterIsSet() const
{
    return originDomainMasterIsSet_;
}

void MssPackageItem::unsetoriginDomainMaster()
{
    originDomainMasterIsSet_ = false;
}

std::string MssPackageItem::getOriginDomainSlave() const
{
    return originDomainSlave_;
}

void MssPackageItem::setOriginDomainSlave(const std::string& value)
{
    originDomainSlave_ = value;
    originDomainSlaveIsSet_ = true;
}

bool MssPackageItem::originDomainSlaveIsSet() const
{
    return originDomainSlaveIsSet_;
}

void MssPackageItem::unsetoriginDomainSlave()
{
    originDomainSlaveIsSet_ = false;
}

std::string MssPackageItem::getManifestName() const
{
    return manifestName_;
}

void MssPackageItem::setManifestName(const std::string& value)
{
    manifestName_ = value;
    manifestNameIsSet_ = true;
}

bool MssPackageItem::manifestNameIsSet() const
{
    return manifestNameIsSet_;
}

void MssPackageItem::unsetmanifestName()
{
    manifestNameIsSet_ = false;
}

std::string MssPackageItem::getSlaveUrl() const
{
    return slaveUrl_;
}

void MssPackageItem::setSlaveUrl(const std::string& value)
{
    slaveUrl_ = value;
    slaveUrlIsSet_ = true;
}

bool MssPackageItem::slaveUrlIsSet() const
{
    return slaveUrlIsSet_;
}

void MssPackageItem::unsetslaveUrl()
{
    slaveUrlIsSet_ = false;
}

ManifestSelection MssPackageItem::getManifestSelection() const
{
    return manifestSelection_;
}

void MssPackageItem::setManifestSelection(const ManifestSelection& value)
{
    manifestSelection_ = value;
    manifestSelectionIsSet_ = true;
}

bool MssPackageItem::manifestSelectionIsSet() const
{
    return manifestSelectionIsSet_;
}

void MssPackageItem::unsetmanifestSelection()
{
    manifestSelectionIsSet_ = false;
}

}
}
}
}
}


