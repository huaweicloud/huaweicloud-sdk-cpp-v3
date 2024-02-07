

#include "huaweicloud/geip/v3/model/DetachInternetBandwidthGlobalEips.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




DetachInternetBandwidthGlobalEips::DetachInternetBandwidthGlobalEips()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    domainId_ = "";
    domainIdIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    accessSite_ = "";
    accessSiteIsSet_ = false;
    geipPoolName_ = "";
    geipPoolNameIsSet_ = false;
    isp_ = "";
    ispIsSet_ = false;
    ipVersion_ = 0;
    ipVersionIsSet_ = false;
    ipAddress_ = "";
    ipAddressIsSet_ = false;
    ipv6Address_ = "";
    ipv6AddressIsSet_ = false;
    freezen_ = false;
    freezenIsSet_ = false;
    freezenInfo_ = "";
    freezenInfoIsSet_ = false;
    polluted_ = false;
    pollutedIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    createdAt_ = utility::datetime();
    createdAtIsSet_ = false;
    updatedAt_ = utility::datetime();
    updatedAtIsSet_ = false;
    internetBandwidthInfoIsSet_ = false;
    globalConnectionBandwidthInfoIsSet_ = false;
    associateInstanceInfoIsSet_ = false;
    isPrePaid_ = false;
    isPrePaidIsSet_ = false;
    tagsIsSet_ = false;
    sysTagsIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
}

DetachInternetBandwidthGlobalEips::~DetachInternetBandwidthGlobalEips() = default;

void DetachInternetBandwidthGlobalEips::validate()
{
}

web::json::value DetachInternetBandwidthGlobalEips::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
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
    if(freezenInfoIsSet_) {
        val[utility::conversions::to_string_t("freezen_info")] = ModelBase::toJson(freezenInfo_);
    }
    if(pollutedIsSet_) {
        val[utility::conversions::to_string_t("polluted")] = ModelBase::toJson(polluted_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(updatedAtIsSet_) {
        val[utility::conversions::to_string_t("updated_at")] = ModelBase::toJson(updatedAt_);
    }
    if(internetBandwidthInfoIsSet_) {
        val[utility::conversions::to_string_t("internet_bandwidth_info")] = ModelBase::toJson(internetBandwidthInfo_);
    }
    if(globalConnectionBandwidthInfoIsSet_) {
        val[utility::conversions::to_string_t("global_connection_bandwidth_info")] = ModelBase::toJson(globalConnectionBandwidthInfo_);
    }
    if(associateInstanceInfoIsSet_) {
        val[utility::conversions::to_string_t("associate_instance_info")] = ModelBase::toJson(associateInstanceInfo_);
    }
    if(isPrePaidIsSet_) {
        val[utility::conversions::to_string_t("is_pre_paid")] = ModelBase::toJson(isPrePaid_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }
    if(sysTagsIsSet_) {
        val[utility::conversions::to_string_t("sys_tags")] = ModelBase::toJson(sysTags_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }

    return val;
}
bool DetachInternetBandwidthGlobalEips::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("domain_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("access_site"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("access_site"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccessSite(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("geip_pool_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("geip_pool_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGeipPoolName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("isp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("isp"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ip_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ip_version"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ip_address"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ip_address"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpAddress(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ipv6_address"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ipv6_address"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpv6Address(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("freezen"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("freezen"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFreezen(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("freezen_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("freezen_info"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFreezenInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("polluted"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("polluted"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPolluted(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_at"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updated_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updated_at"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdatedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("internet_bandwidth_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("internet_bandwidth_info"));
        if(!fieldValue.is_null())
        {
            InternetBandwidthInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInternetBandwidthInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("global_connection_bandwidth_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("global_connection_bandwidth_info"));
        if(!fieldValue.is_null())
        {
            GlobalConnectionBandwidthInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGlobalConnectionBandwidthInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("associate_instance_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("associate_instance_info"));
        if(!fieldValue.is_null())
        {
            InstanceInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssociateInstanceInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_pre_paid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_pre_paid"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsPrePaid(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<Tag> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sys_tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sys_tags"));
        if(!fieldValue.is_null())
        {
            std::vector<Tag> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSysTags(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enterprise_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enterprise_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseProjectId(refVal);
        }
    }
    return ok;
}


std::string DetachInternetBandwidthGlobalEips::getId() const
{
    return id_;
}

void DetachInternetBandwidthGlobalEips::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool DetachInternetBandwidthGlobalEips::idIsSet() const
{
    return idIsSet_;
}

void DetachInternetBandwidthGlobalEips::unsetid()
{
    idIsSet_ = false;
}

std::string DetachInternetBandwidthGlobalEips::getName() const
{
    return name_;
}

void DetachInternetBandwidthGlobalEips::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool DetachInternetBandwidthGlobalEips::nameIsSet() const
{
    return nameIsSet_;
}

void DetachInternetBandwidthGlobalEips::unsetname()
{
    nameIsSet_ = false;
}

std::string DetachInternetBandwidthGlobalEips::getDomainId() const
{
    return domainId_;
}

void DetachInternetBandwidthGlobalEips::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool DetachInternetBandwidthGlobalEips::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void DetachInternetBandwidthGlobalEips::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string DetachInternetBandwidthGlobalEips::getDescription() const
{
    return description_;
}

void DetachInternetBandwidthGlobalEips::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool DetachInternetBandwidthGlobalEips::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void DetachInternetBandwidthGlobalEips::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string DetachInternetBandwidthGlobalEips::getAccessSite() const
{
    return accessSite_;
}

void DetachInternetBandwidthGlobalEips::setAccessSite(const std::string& value)
{
    accessSite_ = value;
    accessSiteIsSet_ = true;
}

bool DetachInternetBandwidthGlobalEips::accessSiteIsSet() const
{
    return accessSiteIsSet_;
}

void DetachInternetBandwidthGlobalEips::unsetaccessSite()
{
    accessSiteIsSet_ = false;
}

std::string DetachInternetBandwidthGlobalEips::getGeipPoolName() const
{
    return geipPoolName_;
}

void DetachInternetBandwidthGlobalEips::setGeipPoolName(const std::string& value)
{
    geipPoolName_ = value;
    geipPoolNameIsSet_ = true;
}

bool DetachInternetBandwidthGlobalEips::geipPoolNameIsSet() const
{
    return geipPoolNameIsSet_;
}

void DetachInternetBandwidthGlobalEips::unsetgeipPoolName()
{
    geipPoolNameIsSet_ = false;
}

std::string DetachInternetBandwidthGlobalEips::getIsp() const
{
    return isp_;
}

void DetachInternetBandwidthGlobalEips::setIsp(const std::string& value)
{
    isp_ = value;
    ispIsSet_ = true;
}

bool DetachInternetBandwidthGlobalEips::ispIsSet() const
{
    return ispIsSet_;
}

void DetachInternetBandwidthGlobalEips::unsetisp()
{
    ispIsSet_ = false;
}

int32_t DetachInternetBandwidthGlobalEips::getIpVersion() const
{
    return ipVersion_;
}

void DetachInternetBandwidthGlobalEips::setIpVersion(int32_t value)
{
    ipVersion_ = value;
    ipVersionIsSet_ = true;
}

bool DetachInternetBandwidthGlobalEips::ipVersionIsSet() const
{
    return ipVersionIsSet_;
}

void DetachInternetBandwidthGlobalEips::unsetipVersion()
{
    ipVersionIsSet_ = false;
}

std::string DetachInternetBandwidthGlobalEips::getIpAddress() const
{
    return ipAddress_;
}

void DetachInternetBandwidthGlobalEips::setIpAddress(const std::string& value)
{
    ipAddress_ = value;
    ipAddressIsSet_ = true;
}

bool DetachInternetBandwidthGlobalEips::ipAddressIsSet() const
{
    return ipAddressIsSet_;
}

void DetachInternetBandwidthGlobalEips::unsetipAddress()
{
    ipAddressIsSet_ = false;
}

std::string DetachInternetBandwidthGlobalEips::getIpv6Address() const
{
    return ipv6Address_;
}

void DetachInternetBandwidthGlobalEips::setIpv6Address(const std::string& value)
{
    ipv6Address_ = value;
    ipv6AddressIsSet_ = true;
}

bool DetachInternetBandwidthGlobalEips::ipv6AddressIsSet() const
{
    return ipv6AddressIsSet_;
}

void DetachInternetBandwidthGlobalEips::unsetipv6Address()
{
    ipv6AddressIsSet_ = false;
}

bool DetachInternetBandwidthGlobalEips::isFreezen() const
{
    return freezen_;
}

void DetachInternetBandwidthGlobalEips::setFreezen(bool value)
{
    freezen_ = value;
    freezenIsSet_ = true;
}

bool DetachInternetBandwidthGlobalEips::freezenIsSet() const
{
    return freezenIsSet_;
}

void DetachInternetBandwidthGlobalEips::unsetfreezen()
{
    freezenIsSet_ = false;
}

std::string DetachInternetBandwidthGlobalEips::getFreezenInfo() const
{
    return freezenInfo_;
}

void DetachInternetBandwidthGlobalEips::setFreezenInfo(const std::string& value)
{
    freezenInfo_ = value;
    freezenInfoIsSet_ = true;
}

bool DetachInternetBandwidthGlobalEips::freezenInfoIsSet() const
{
    return freezenInfoIsSet_;
}

void DetachInternetBandwidthGlobalEips::unsetfreezenInfo()
{
    freezenInfoIsSet_ = false;
}

bool DetachInternetBandwidthGlobalEips::isPolluted() const
{
    return polluted_;
}

void DetachInternetBandwidthGlobalEips::setPolluted(bool value)
{
    polluted_ = value;
    pollutedIsSet_ = true;
}

bool DetachInternetBandwidthGlobalEips::pollutedIsSet() const
{
    return pollutedIsSet_;
}

void DetachInternetBandwidthGlobalEips::unsetpolluted()
{
    pollutedIsSet_ = false;
}

std::string DetachInternetBandwidthGlobalEips::getStatus() const
{
    return status_;
}

void DetachInternetBandwidthGlobalEips::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool DetachInternetBandwidthGlobalEips::statusIsSet() const
{
    return statusIsSet_;
}

void DetachInternetBandwidthGlobalEips::unsetstatus()
{
    statusIsSet_ = false;
}

utility::datetime DetachInternetBandwidthGlobalEips::getCreatedAt() const
{
    return createdAt_;
}

void DetachInternetBandwidthGlobalEips::setCreatedAt(const utility::datetime& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool DetachInternetBandwidthGlobalEips::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void DetachInternetBandwidthGlobalEips::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

utility::datetime DetachInternetBandwidthGlobalEips::getUpdatedAt() const
{
    return updatedAt_;
}

void DetachInternetBandwidthGlobalEips::setUpdatedAt(const utility::datetime& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool DetachInternetBandwidthGlobalEips::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void DetachInternetBandwidthGlobalEips::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

InternetBandwidthInfo DetachInternetBandwidthGlobalEips::getInternetBandwidthInfo() const
{
    return internetBandwidthInfo_;
}

void DetachInternetBandwidthGlobalEips::setInternetBandwidthInfo(const InternetBandwidthInfo& value)
{
    internetBandwidthInfo_ = value;
    internetBandwidthInfoIsSet_ = true;
}

bool DetachInternetBandwidthGlobalEips::internetBandwidthInfoIsSet() const
{
    return internetBandwidthInfoIsSet_;
}

void DetachInternetBandwidthGlobalEips::unsetinternetBandwidthInfo()
{
    internetBandwidthInfoIsSet_ = false;
}

GlobalConnectionBandwidthInfo DetachInternetBandwidthGlobalEips::getGlobalConnectionBandwidthInfo() const
{
    return globalConnectionBandwidthInfo_;
}

void DetachInternetBandwidthGlobalEips::setGlobalConnectionBandwidthInfo(const GlobalConnectionBandwidthInfo& value)
{
    globalConnectionBandwidthInfo_ = value;
    globalConnectionBandwidthInfoIsSet_ = true;
}

bool DetachInternetBandwidthGlobalEips::globalConnectionBandwidthInfoIsSet() const
{
    return globalConnectionBandwidthInfoIsSet_;
}

void DetachInternetBandwidthGlobalEips::unsetglobalConnectionBandwidthInfo()
{
    globalConnectionBandwidthInfoIsSet_ = false;
}

InstanceInfo DetachInternetBandwidthGlobalEips::getAssociateInstanceInfo() const
{
    return associateInstanceInfo_;
}

void DetachInternetBandwidthGlobalEips::setAssociateInstanceInfo(const InstanceInfo& value)
{
    associateInstanceInfo_ = value;
    associateInstanceInfoIsSet_ = true;
}

bool DetachInternetBandwidthGlobalEips::associateInstanceInfoIsSet() const
{
    return associateInstanceInfoIsSet_;
}

void DetachInternetBandwidthGlobalEips::unsetassociateInstanceInfo()
{
    associateInstanceInfoIsSet_ = false;
}

bool DetachInternetBandwidthGlobalEips::isIsPrePaid() const
{
    return isPrePaid_;
}

void DetachInternetBandwidthGlobalEips::setIsPrePaid(bool value)
{
    isPrePaid_ = value;
    isPrePaidIsSet_ = true;
}

bool DetachInternetBandwidthGlobalEips::isPrePaidIsSet() const
{
    return isPrePaidIsSet_;
}

void DetachInternetBandwidthGlobalEips::unsetisPrePaid()
{
    isPrePaidIsSet_ = false;
}

std::vector<Tag>& DetachInternetBandwidthGlobalEips::getTags()
{
    return tags_;
}

void DetachInternetBandwidthGlobalEips::setTags(const std::vector<Tag>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool DetachInternetBandwidthGlobalEips::tagsIsSet() const
{
    return tagsIsSet_;
}

void DetachInternetBandwidthGlobalEips::unsettags()
{
    tagsIsSet_ = false;
}

std::vector<Tag>& DetachInternetBandwidthGlobalEips::getSysTags()
{
    return sysTags_;
}

void DetachInternetBandwidthGlobalEips::setSysTags(const std::vector<Tag>& value)
{
    sysTags_ = value;
    sysTagsIsSet_ = true;
}

bool DetachInternetBandwidthGlobalEips::sysTagsIsSet() const
{
    return sysTagsIsSet_;
}

void DetachInternetBandwidthGlobalEips::unsetsysTags()
{
    sysTagsIsSet_ = false;
}

std::string DetachInternetBandwidthGlobalEips::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void DetachInternetBandwidthGlobalEips::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool DetachInternetBandwidthGlobalEips::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void DetachInternetBandwidthGlobalEips::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

}
}
}
}
}


