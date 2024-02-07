

#include "huaweicloud/geip/v3/model/CountGlobalEipsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




CountGlobalEipsRequest::CountGlobalEipsRequest()
{
    idIsSet_ = false;
    internetBandwidthIdIsSet_ = false;
    nameIsSet_ = false;
    nameLike_ = "";
    nameLikeIsSet_ = false;
    accessSiteIsSet_ = false;
    geipPoolNameIsSet_ = false;
    ispIsSet_ = false;
    ipVersionIsSet_ = false;
    ipAddressIsSet_ = false;
    ipv6AddressIsSet_ = false;
    freezenIsSet_ = false;
    pollutedIsSet_ = false;
    internetBandwidthIsNullIsSet_ = false;
    gcbBandwidthIsNullIsSet_ = false;
    statusIsSet_ = false;
    associateInstanceInfoRegionIsSet_ = false;
    associateInstanceInfoPublicBorderGroupIsSet_ = false;
    associateInstanceInfoInstanceSiteIsSet_ = false;
    associateInstanceInfoInstanceTypeIsSet_ = false;
    associateInstanceInfoInstanceIdIsSet_ = false;
    associateInstanceInfoProjectIdIsSet_ = false;
    enterpriseProjectIdIsSet_ = false;
    tagsIsSet_ = false;
}

CountGlobalEipsRequest::~CountGlobalEipsRequest() = default;

void CountGlobalEipsRequest::validate()
{
}

web::json::value CountGlobalEipsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(internetBandwidthIdIsSet_) {
        val[utility::conversions::to_string_t("internet_bandwidth_id")] = ModelBase::toJson(internetBandwidthId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(nameLikeIsSet_) {
        val[utility::conversions::to_string_t("name_like")] = ModelBase::toJson(nameLike_);
    }
    if(accessSiteIsSet_) {
        val[utility::conversions::to_string_t("access_site")] = ModelBase::toJson(accessSite_);
    }
    if(geipPoolNameIsSet_) {
        val[utility::conversions::to_string_t("geip_pool_name")] = ModelBase::toJson(geipPoolName_);
    }
    if(ispIsSet_) {
        val[utility::conversions::to_string_t("isp")] = ModelBase::toJson(isp_);
    }
    if(ipVersionIsSet_) {
        val[utility::conversions::to_string_t("ip_version")] = ModelBase::toJson(ipVersion_);
    }
    if(ipAddressIsSet_) {
        val[utility::conversions::to_string_t("ip_address")] = ModelBase::toJson(ipAddress_);
    }
    if(ipv6AddressIsSet_) {
        val[utility::conversions::to_string_t("ipv6_address")] = ModelBase::toJson(ipv6Address_);
    }
    if(freezenIsSet_) {
        val[utility::conversions::to_string_t("freezen")] = ModelBase::toJson(freezen_);
    }
    if(pollutedIsSet_) {
        val[utility::conversions::to_string_t("polluted")] = ModelBase::toJson(polluted_);
    }
    if(internetBandwidthIsNullIsSet_) {
        val[utility::conversions::to_string_t("internet_bandwidth_is_null")] = ModelBase::toJson(internetBandwidthIsNull_);
    }
    if(gcbBandwidthIsNullIsSet_) {
        val[utility::conversions::to_string_t("gcb_bandwidth_is_null")] = ModelBase::toJson(gcbBandwidthIsNull_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(associateInstanceInfoRegionIsSet_) {
        val[utility::conversions::to_string_t("associate_instance_info.region")] = ModelBase::toJson(associateInstanceInfoRegion_);
    }
    if(associateInstanceInfoPublicBorderGroupIsSet_) {
        val[utility::conversions::to_string_t("associate_instance_info.public_border_group")] = ModelBase::toJson(associateInstanceInfoPublicBorderGroup_);
    }
    if(associateInstanceInfoInstanceSiteIsSet_) {
        val[utility::conversions::to_string_t("associate_instance_info.instance_site")] = ModelBase::toJson(associateInstanceInfoInstanceSite_);
    }
    if(associateInstanceInfoInstanceTypeIsSet_) {
        val[utility::conversions::to_string_t("associate_instance_info.instance_type")] = ModelBase::toJson(associateInstanceInfoInstanceType_);
    }
    if(associateInstanceInfoInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("associate_instance_info.instance_id")] = ModelBase::toJson(associateInstanceInfoInstanceId_);
    }
    if(associateInstanceInfoProjectIdIsSet_) {
        val[utility::conversions::to_string_t("associate_instance_info.project_id")] = ModelBase::toJson(associateInstanceInfoProjectId_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }

    return val;
}
bool CountGlobalEipsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("internet_bandwidth_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("internet_bandwidth_id"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInternetBandwidthId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name_like"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name_like"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNameLike(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("access_site"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("access_site"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccessSite(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("geip_pool_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("geip_pool_name"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGeipPoolName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("isp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("isp"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ip_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ip_version"));
        if(!fieldValue.is_null())
        {
            std::vector<int32_t> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ip_address"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ip_address"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpAddress(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ipv6_address"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ipv6_address"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpv6Address(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("freezen"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("freezen"));
        if(!fieldValue.is_null())
        {
            std::vector<bool> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFreezen(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("polluted"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("polluted"));
        if(!fieldValue.is_null())
        {
            std::vector<bool> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPolluted(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("internet_bandwidth_is_null"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("internet_bandwidth_is_null"));
        if(!fieldValue.is_null())
        {
            std::vector<bool> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInternetBandwidthIsNull(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("gcb_bandwidth_is_null"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("gcb_bandwidth_is_null"));
        if(!fieldValue.is_null())
        {
            std::vector<bool> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGcbBandwidthIsNull(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("associate_instance_info.region"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("associate_instance_info.region"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssociateInstanceInfoRegion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("associate_instance_info.public_border_group"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("associate_instance_info.public_border_group"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssociateInstanceInfoPublicBorderGroup(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("associate_instance_info.instance_site"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("associate_instance_info.instance_site"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssociateInstanceInfoInstanceSite(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("associate_instance_info.instance_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("associate_instance_info.instance_type"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssociateInstanceInfoInstanceType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("associate_instance_info.instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("associate_instance_info.instance_id"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssociateInstanceInfoInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("associate_instance_info.project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("associate_instance_info.project_id"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssociateInstanceInfoProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enterprise_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enterprise_project_id"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& CountGlobalEipsRequest::getId()
{
    return id_;
}

void CountGlobalEipsRequest::setId(const std::vector<std::string>& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool CountGlobalEipsRequest::idIsSet() const
{
    return idIsSet_;
}

void CountGlobalEipsRequest::unsetid()
{
    idIsSet_ = false;
}

std::vector<std::string>& CountGlobalEipsRequest::getInternetBandwidthId()
{
    return internetBandwidthId_;
}

void CountGlobalEipsRequest::setInternetBandwidthId(const std::vector<std::string>& value)
{
    internetBandwidthId_ = value;
    internetBandwidthIdIsSet_ = true;
}

bool CountGlobalEipsRequest::internetBandwidthIdIsSet() const
{
    return internetBandwidthIdIsSet_;
}

void CountGlobalEipsRequest::unsetinternetBandwidthId()
{
    internetBandwidthIdIsSet_ = false;
}

std::vector<std::string>& CountGlobalEipsRequest::getName()
{
    return name_;
}

void CountGlobalEipsRequest::setName(const std::vector<std::string>& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CountGlobalEipsRequest::nameIsSet() const
{
    return nameIsSet_;
}

void CountGlobalEipsRequest::unsetname()
{
    nameIsSet_ = false;
}

std::string CountGlobalEipsRequest::getNameLike() const
{
    return nameLike_;
}

void CountGlobalEipsRequest::setNameLike(const std::string& value)
{
    nameLike_ = value;
    nameLikeIsSet_ = true;
}

bool CountGlobalEipsRequest::nameLikeIsSet() const
{
    return nameLikeIsSet_;
}

void CountGlobalEipsRequest::unsetnameLike()
{
    nameLikeIsSet_ = false;
}

std::vector<std::string>& CountGlobalEipsRequest::getAccessSite()
{
    return accessSite_;
}

void CountGlobalEipsRequest::setAccessSite(const std::vector<std::string>& value)
{
    accessSite_ = value;
    accessSiteIsSet_ = true;
}

bool CountGlobalEipsRequest::accessSiteIsSet() const
{
    return accessSiteIsSet_;
}

void CountGlobalEipsRequest::unsetaccessSite()
{
    accessSiteIsSet_ = false;
}

std::vector<std::string>& CountGlobalEipsRequest::getGeipPoolName()
{
    return geipPoolName_;
}

void CountGlobalEipsRequest::setGeipPoolName(const std::vector<std::string>& value)
{
    geipPoolName_ = value;
    geipPoolNameIsSet_ = true;
}

bool CountGlobalEipsRequest::geipPoolNameIsSet() const
{
    return geipPoolNameIsSet_;
}

void CountGlobalEipsRequest::unsetgeipPoolName()
{
    geipPoolNameIsSet_ = false;
}

std::vector<std::string>& CountGlobalEipsRequest::getIsp()
{
    return isp_;
}

void CountGlobalEipsRequest::setIsp(const std::vector<std::string>& value)
{
    isp_ = value;
    ispIsSet_ = true;
}

bool CountGlobalEipsRequest::ispIsSet() const
{
    return ispIsSet_;
}

void CountGlobalEipsRequest::unsetisp()
{
    ispIsSet_ = false;
}

std::vector<int32_t>& CountGlobalEipsRequest::getIpVersion()
{
    return ipVersion_;
}

void CountGlobalEipsRequest::setIpVersion(std::vector<int32_t> value)
{
    ipVersion_ = value;
    ipVersionIsSet_ = true;
}

bool CountGlobalEipsRequest::ipVersionIsSet() const
{
    return ipVersionIsSet_;
}

void CountGlobalEipsRequest::unsetipVersion()
{
    ipVersionIsSet_ = false;
}

std::vector<std::string>& CountGlobalEipsRequest::getIpAddress()
{
    return ipAddress_;
}

void CountGlobalEipsRequest::setIpAddress(const std::vector<std::string>& value)
{
    ipAddress_ = value;
    ipAddressIsSet_ = true;
}

bool CountGlobalEipsRequest::ipAddressIsSet() const
{
    return ipAddressIsSet_;
}

void CountGlobalEipsRequest::unsetipAddress()
{
    ipAddressIsSet_ = false;
}

std::vector<std::string>& CountGlobalEipsRequest::getIpv6Address()
{
    return ipv6Address_;
}

void CountGlobalEipsRequest::setIpv6Address(const std::vector<std::string>& value)
{
    ipv6Address_ = value;
    ipv6AddressIsSet_ = true;
}

bool CountGlobalEipsRequest::ipv6AddressIsSet() const
{
    return ipv6AddressIsSet_;
}

void CountGlobalEipsRequest::unsetipv6Address()
{
    ipv6AddressIsSet_ = false;
}

std::vector<bool>& CountGlobalEipsRequest::getFreezen()
{
    return freezen_;
}

void CountGlobalEipsRequest::setFreezen(std::vector<bool> value)
{
    freezen_ = value;
    freezenIsSet_ = true;
}

bool CountGlobalEipsRequest::freezenIsSet() const
{
    return freezenIsSet_;
}

void CountGlobalEipsRequest::unsetfreezen()
{
    freezenIsSet_ = false;
}

std::vector<bool>& CountGlobalEipsRequest::getPolluted()
{
    return polluted_;
}

void CountGlobalEipsRequest::setPolluted(std::vector<bool> value)
{
    polluted_ = value;
    pollutedIsSet_ = true;
}

bool CountGlobalEipsRequest::pollutedIsSet() const
{
    return pollutedIsSet_;
}

void CountGlobalEipsRequest::unsetpolluted()
{
    pollutedIsSet_ = false;
}

std::vector<bool>& CountGlobalEipsRequest::getInternetBandwidthIsNull()
{
    return internetBandwidthIsNull_;
}

void CountGlobalEipsRequest::setInternetBandwidthIsNull(std::vector<bool> value)
{
    internetBandwidthIsNull_ = value;
    internetBandwidthIsNullIsSet_ = true;
}

bool CountGlobalEipsRequest::internetBandwidthIsNullIsSet() const
{
    return internetBandwidthIsNullIsSet_;
}

void CountGlobalEipsRequest::unsetinternetBandwidthIsNull()
{
    internetBandwidthIsNullIsSet_ = false;
}

std::vector<bool>& CountGlobalEipsRequest::getGcbBandwidthIsNull()
{
    return gcbBandwidthIsNull_;
}

void CountGlobalEipsRequest::setGcbBandwidthIsNull(std::vector<bool> value)
{
    gcbBandwidthIsNull_ = value;
    gcbBandwidthIsNullIsSet_ = true;
}

bool CountGlobalEipsRequest::gcbBandwidthIsNullIsSet() const
{
    return gcbBandwidthIsNullIsSet_;
}

void CountGlobalEipsRequest::unsetgcbBandwidthIsNull()
{
    gcbBandwidthIsNullIsSet_ = false;
}

std::vector<std::string>& CountGlobalEipsRequest::getStatus()
{
    return status_;
}

void CountGlobalEipsRequest::setStatus(const std::vector<std::string>& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool CountGlobalEipsRequest::statusIsSet() const
{
    return statusIsSet_;
}

void CountGlobalEipsRequest::unsetstatus()
{
    statusIsSet_ = false;
}

std::vector<std::string>& CountGlobalEipsRequest::getAssociateInstanceInfoRegion()
{
    return associateInstanceInfoRegion_;
}

void CountGlobalEipsRequest::setAssociateInstanceInfoRegion(const std::vector<std::string>& value)
{
    associateInstanceInfoRegion_ = value;
    associateInstanceInfoRegionIsSet_ = true;
}

bool CountGlobalEipsRequest::associateInstanceInfoRegionIsSet() const
{
    return associateInstanceInfoRegionIsSet_;
}

void CountGlobalEipsRequest::unsetassociateInstanceInfoRegion()
{
    associateInstanceInfoRegionIsSet_ = false;
}

std::vector<std::string>& CountGlobalEipsRequest::getAssociateInstanceInfoPublicBorderGroup()
{
    return associateInstanceInfoPublicBorderGroup_;
}

void CountGlobalEipsRequest::setAssociateInstanceInfoPublicBorderGroup(const std::vector<std::string>& value)
{
    associateInstanceInfoPublicBorderGroup_ = value;
    associateInstanceInfoPublicBorderGroupIsSet_ = true;
}

bool CountGlobalEipsRequest::associateInstanceInfoPublicBorderGroupIsSet() const
{
    return associateInstanceInfoPublicBorderGroupIsSet_;
}

void CountGlobalEipsRequest::unsetassociateInstanceInfoPublicBorderGroup()
{
    associateInstanceInfoPublicBorderGroupIsSet_ = false;
}

std::vector<std::string>& CountGlobalEipsRequest::getAssociateInstanceInfoInstanceSite()
{
    return associateInstanceInfoInstanceSite_;
}

void CountGlobalEipsRequest::setAssociateInstanceInfoInstanceSite(const std::vector<std::string>& value)
{
    associateInstanceInfoInstanceSite_ = value;
    associateInstanceInfoInstanceSiteIsSet_ = true;
}

bool CountGlobalEipsRequest::associateInstanceInfoInstanceSiteIsSet() const
{
    return associateInstanceInfoInstanceSiteIsSet_;
}

void CountGlobalEipsRequest::unsetassociateInstanceInfoInstanceSite()
{
    associateInstanceInfoInstanceSiteIsSet_ = false;
}

std::vector<std::string>& CountGlobalEipsRequest::getAssociateInstanceInfoInstanceType()
{
    return associateInstanceInfoInstanceType_;
}

void CountGlobalEipsRequest::setAssociateInstanceInfoInstanceType(const std::vector<std::string>& value)
{
    associateInstanceInfoInstanceType_ = value;
    associateInstanceInfoInstanceTypeIsSet_ = true;
}

bool CountGlobalEipsRequest::associateInstanceInfoInstanceTypeIsSet() const
{
    return associateInstanceInfoInstanceTypeIsSet_;
}

void CountGlobalEipsRequest::unsetassociateInstanceInfoInstanceType()
{
    associateInstanceInfoInstanceTypeIsSet_ = false;
}

std::vector<std::string>& CountGlobalEipsRequest::getAssociateInstanceInfoInstanceId()
{
    return associateInstanceInfoInstanceId_;
}

void CountGlobalEipsRequest::setAssociateInstanceInfoInstanceId(const std::vector<std::string>& value)
{
    associateInstanceInfoInstanceId_ = value;
    associateInstanceInfoInstanceIdIsSet_ = true;
}

bool CountGlobalEipsRequest::associateInstanceInfoInstanceIdIsSet() const
{
    return associateInstanceInfoInstanceIdIsSet_;
}

void CountGlobalEipsRequest::unsetassociateInstanceInfoInstanceId()
{
    associateInstanceInfoInstanceIdIsSet_ = false;
}

std::vector<std::string>& CountGlobalEipsRequest::getAssociateInstanceInfoProjectId()
{
    return associateInstanceInfoProjectId_;
}

void CountGlobalEipsRequest::setAssociateInstanceInfoProjectId(const std::vector<std::string>& value)
{
    associateInstanceInfoProjectId_ = value;
    associateInstanceInfoProjectIdIsSet_ = true;
}

bool CountGlobalEipsRequest::associateInstanceInfoProjectIdIsSet() const
{
    return associateInstanceInfoProjectIdIsSet_;
}

void CountGlobalEipsRequest::unsetassociateInstanceInfoProjectId()
{
    associateInstanceInfoProjectIdIsSet_ = false;
}

std::vector<std::string>& CountGlobalEipsRequest::getEnterpriseProjectId()
{
    return enterpriseProjectId_;
}

void CountGlobalEipsRequest::setEnterpriseProjectId(const std::vector<std::string>& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool CountGlobalEipsRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void CountGlobalEipsRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::vector<std::string>& CountGlobalEipsRequest::getTags()
{
    return tags_;
}

void CountGlobalEipsRequest::setTags(const std::vector<std::string>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool CountGlobalEipsRequest::tagsIsSet() const
{
    return tagsIsSet_;
}

void CountGlobalEipsRequest::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


