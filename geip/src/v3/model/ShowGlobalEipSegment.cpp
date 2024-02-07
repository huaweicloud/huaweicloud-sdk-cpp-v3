

#include "huaweicloud/geip/v3/model/ShowGlobalEipSegment.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




ShowGlobalEipSegment::ShowGlobalEipSegment()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    domainId_ = "";
    domainIdIsSet_ = false;
    accessSite_ = "";
    accessSiteIsSet_ = false;
    geipPoolName_ = "";
    geipPoolNameIsSet_ = false;
    isp_ = "";
    ispIsSet_ = false;
    ipVersion_ = 0;
    ipVersionIsSet_ = false;
    cidr_ = "";
    cidrIsSet_ = false;
    cidrV6_ = "";
    cidrV6IsSet_ = false;
    freezen_ = false;
    freezenIsSet_ = false;
    freezenInfo_ = "";
    freezenInfoIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    createdAt_ = utility::datetime();
    createdAtIsSet_ = false;
    updatedAt_ = utility::datetime();
    updatedAtIsSet_ = false;
    internetBandwidthIsSet_ = false;
    associateInstanceIsSet_ = false;
    isPrePaid_ = false;
    isPrePaidIsSet_ = false;
    tagsIsSet_ = false;
    sysTagsIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
}

ShowGlobalEipSegment::~ShowGlobalEipSegment() = default;

void ShowGlobalEipSegment::validate()
{
}

web::json::value ShowGlobalEipSegment::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
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
    if(cidrIsSet_) {
        val[utility::conversions::to_string_t("cidr")] = ModelBase::toJson(cidr_);
    }
    if(cidrV6IsSet_) {
        val[utility::conversions::to_string_t("cidr_v6")] = ModelBase::toJson(cidrV6_);
    }
    if(freezenIsSet_) {
        val[utility::conversions::to_string_t("freezen")] = ModelBase::toJson(freezen_);
    }
    if(freezenInfoIsSet_) {
        val[utility::conversions::to_string_t("freezen_info")] = ModelBase::toJson(freezenInfo_);
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
    if(internetBandwidthIsSet_) {
        val[utility::conversions::to_string_t("internet_bandwidth")] = ModelBase::toJson(internetBandwidth_);
    }
    if(associateInstanceIsSet_) {
        val[utility::conversions::to_string_t("associate_instance")] = ModelBase::toJson(associateInstance_);
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
bool ShowGlobalEipSegment::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("cidr"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cidr"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCidr(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cidr_v6"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cidr_v6"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCidrV6(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("internet_bandwidth"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("internet_bandwidth"));
        if(!fieldValue.is_null())
        {
            InternetBandwidthInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInternetBandwidth(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("associate_instance"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("associate_instance"));
        if(!fieldValue.is_null())
        {
            InstanceInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssociateInstance(refVal);
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


std::string ShowGlobalEipSegment::getId() const
{
    return id_;
}

void ShowGlobalEipSegment::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ShowGlobalEipSegment::idIsSet() const
{
    return idIsSet_;
}

void ShowGlobalEipSegment::unsetid()
{
    idIsSet_ = false;
}

std::string ShowGlobalEipSegment::getName() const
{
    return name_;
}

void ShowGlobalEipSegment::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ShowGlobalEipSegment::nameIsSet() const
{
    return nameIsSet_;
}

void ShowGlobalEipSegment::unsetname()
{
    nameIsSet_ = false;
}

std::string ShowGlobalEipSegment::getDescription() const
{
    return description_;
}

void ShowGlobalEipSegment::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ShowGlobalEipSegment::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ShowGlobalEipSegment::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string ShowGlobalEipSegment::getDomainId() const
{
    return domainId_;
}

void ShowGlobalEipSegment::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool ShowGlobalEipSegment::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void ShowGlobalEipSegment::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string ShowGlobalEipSegment::getAccessSite() const
{
    return accessSite_;
}

void ShowGlobalEipSegment::setAccessSite(const std::string& value)
{
    accessSite_ = value;
    accessSiteIsSet_ = true;
}

bool ShowGlobalEipSegment::accessSiteIsSet() const
{
    return accessSiteIsSet_;
}

void ShowGlobalEipSegment::unsetaccessSite()
{
    accessSiteIsSet_ = false;
}

std::string ShowGlobalEipSegment::getGeipPoolName() const
{
    return geipPoolName_;
}

void ShowGlobalEipSegment::setGeipPoolName(const std::string& value)
{
    geipPoolName_ = value;
    geipPoolNameIsSet_ = true;
}

bool ShowGlobalEipSegment::geipPoolNameIsSet() const
{
    return geipPoolNameIsSet_;
}

void ShowGlobalEipSegment::unsetgeipPoolName()
{
    geipPoolNameIsSet_ = false;
}

std::string ShowGlobalEipSegment::getIsp() const
{
    return isp_;
}

void ShowGlobalEipSegment::setIsp(const std::string& value)
{
    isp_ = value;
    ispIsSet_ = true;
}

bool ShowGlobalEipSegment::ispIsSet() const
{
    return ispIsSet_;
}

void ShowGlobalEipSegment::unsetisp()
{
    ispIsSet_ = false;
}

int32_t ShowGlobalEipSegment::getIpVersion() const
{
    return ipVersion_;
}

void ShowGlobalEipSegment::setIpVersion(int32_t value)
{
    ipVersion_ = value;
    ipVersionIsSet_ = true;
}

bool ShowGlobalEipSegment::ipVersionIsSet() const
{
    return ipVersionIsSet_;
}

void ShowGlobalEipSegment::unsetipVersion()
{
    ipVersionIsSet_ = false;
}

std::string ShowGlobalEipSegment::getCidr() const
{
    return cidr_;
}

void ShowGlobalEipSegment::setCidr(const std::string& value)
{
    cidr_ = value;
    cidrIsSet_ = true;
}

bool ShowGlobalEipSegment::cidrIsSet() const
{
    return cidrIsSet_;
}

void ShowGlobalEipSegment::unsetcidr()
{
    cidrIsSet_ = false;
}

std::string ShowGlobalEipSegment::getCidrV6() const
{
    return cidrV6_;
}

void ShowGlobalEipSegment::setCidrV6(const std::string& value)
{
    cidrV6_ = value;
    cidrV6IsSet_ = true;
}

bool ShowGlobalEipSegment::cidrV6IsSet() const
{
    return cidrV6IsSet_;
}

void ShowGlobalEipSegment::unsetcidrV6()
{
    cidrV6IsSet_ = false;
}

bool ShowGlobalEipSegment::isFreezen() const
{
    return freezen_;
}

void ShowGlobalEipSegment::setFreezen(bool value)
{
    freezen_ = value;
    freezenIsSet_ = true;
}

bool ShowGlobalEipSegment::freezenIsSet() const
{
    return freezenIsSet_;
}

void ShowGlobalEipSegment::unsetfreezen()
{
    freezenIsSet_ = false;
}

std::string ShowGlobalEipSegment::getFreezenInfo() const
{
    return freezenInfo_;
}

void ShowGlobalEipSegment::setFreezenInfo(const std::string& value)
{
    freezenInfo_ = value;
    freezenInfoIsSet_ = true;
}

bool ShowGlobalEipSegment::freezenInfoIsSet() const
{
    return freezenInfoIsSet_;
}

void ShowGlobalEipSegment::unsetfreezenInfo()
{
    freezenInfoIsSet_ = false;
}

std::string ShowGlobalEipSegment::getStatus() const
{
    return status_;
}

void ShowGlobalEipSegment::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowGlobalEipSegment::statusIsSet() const
{
    return statusIsSet_;
}

void ShowGlobalEipSegment::unsetstatus()
{
    statusIsSet_ = false;
}

utility::datetime ShowGlobalEipSegment::getCreatedAt() const
{
    return createdAt_;
}

void ShowGlobalEipSegment::setCreatedAt(const utility::datetime& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool ShowGlobalEipSegment::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void ShowGlobalEipSegment::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

utility::datetime ShowGlobalEipSegment::getUpdatedAt() const
{
    return updatedAt_;
}

void ShowGlobalEipSegment::setUpdatedAt(const utility::datetime& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool ShowGlobalEipSegment::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void ShowGlobalEipSegment::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

InternetBandwidthInfo ShowGlobalEipSegment::getInternetBandwidth() const
{
    return internetBandwidth_;
}

void ShowGlobalEipSegment::setInternetBandwidth(const InternetBandwidthInfo& value)
{
    internetBandwidth_ = value;
    internetBandwidthIsSet_ = true;
}

bool ShowGlobalEipSegment::internetBandwidthIsSet() const
{
    return internetBandwidthIsSet_;
}

void ShowGlobalEipSegment::unsetinternetBandwidth()
{
    internetBandwidthIsSet_ = false;
}

InstanceInfo ShowGlobalEipSegment::getAssociateInstance() const
{
    return associateInstance_;
}

void ShowGlobalEipSegment::setAssociateInstance(const InstanceInfo& value)
{
    associateInstance_ = value;
    associateInstanceIsSet_ = true;
}

bool ShowGlobalEipSegment::associateInstanceIsSet() const
{
    return associateInstanceIsSet_;
}

void ShowGlobalEipSegment::unsetassociateInstance()
{
    associateInstanceIsSet_ = false;
}

bool ShowGlobalEipSegment::isIsPrePaid() const
{
    return isPrePaid_;
}

void ShowGlobalEipSegment::setIsPrePaid(bool value)
{
    isPrePaid_ = value;
    isPrePaidIsSet_ = true;
}

bool ShowGlobalEipSegment::isPrePaidIsSet() const
{
    return isPrePaidIsSet_;
}

void ShowGlobalEipSegment::unsetisPrePaid()
{
    isPrePaidIsSet_ = false;
}

std::vector<Tag>& ShowGlobalEipSegment::getTags()
{
    return tags_;
}

void ShowGlobalEipSegment::setTags(const std::vector<Tag>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ShowGlobalEipSegment::tagsIsSet() const
{
    return tagsIsSet_;
}

void ShowGlobalEipSegment::unsettags()
{
    tagsIsSet_ = false;
}

std::vector<Tag>& ShowGlobalEipSegment::getSysTags()
{
    return sysTags_;
}

void ShowGlobalEipSegment::setSysTags(const std::vector<Tag>& value)
{
    sysTags_ = value;
    sysTagsIsSet_ = true;
}

bool ShowGlobalEipSegment::sysTagsIsSet() const
{
    return sysTagsIsSet_;
}

void ShowGlobalEipSegment::unsetsysTags()
{
    sysTagsIsSet_ = false;
}

std::string ShowGlobalEipSegment::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void ShowGlobalEipSegment::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool ShowGlobalEipSegment::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void ShowGlobalEipSegment::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

}
}
}
}
}


