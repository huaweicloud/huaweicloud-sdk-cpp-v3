

#include "huaweicloud/geip/v3/model/ListGlobalEipSegments.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




ListGlobalEipSegments::ListGlobalEipSegments()
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

ListGlobalEipSegments::~ListGlobalEipSegments() = default;

void ListGlobalEipSegments::validate()
{
}

web::json::value ListGlobalEipSegments::toJson() const
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
bool ListGlobalEipSegments::fromJson(const web::json::value& val)
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


std::string ListGlobalEipSegments::getId() const
{
    return id_;
}

void ListGlobalEipSegments::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ListGlobalEipSegments::idIsSet() const
{
    return idIsSet_;
}

void ListGlobalEipSegments::unsetid()
{
    idIsSet_ = false;
}

std::string ListGlobalEipSegments::getName() const
{
    return name_;
}

void ListGlobalEipSegments::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListGlobalEipSegments::nameIsSet() const
{
    return nameIsSet_;
}

void ListGlobalEipSegments::unsetname()
{
    nameIsSet_ = false;
}

std::string ListGlobalEipSegments::getDescription() const
{
    return description_;
}

void ListGlobalEipSegments::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ListGlobalEipSegments::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ListGlobalEipSegments::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string ListGlobalEipSegments::getDomainId() const
{
    return domainId_;
}

void ListGlobalEipSegments::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool ListGlobalEipSegments::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void ListGlobalEipSegments::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string ListGlobalEipSegments::getAccessSite() const
{
    return accessSite_;
}

void ListGlobalEipSegments::setAccessSite(const std::string& value)
{
    accessSite_ = value;
    accessSiteIsSet_ = true;
}

bool ListGlobalEipSegments::accessSiteIsSet() const
{
    return accessSiteIsSet_;
}

void ListGlobalEipSegments::unsetaccessSite()
{
    accessSiteIsSet_ = false;
}

std::string ListGlobalEipSegments::getGeipPoolName() const
{
    return geipPoolName_;
}

void ListGlobalEipSegments::setGeipPoolName(const std::string& value)
{
    geipPoolName_ = value;
    geipPoolNameIsSet_ = true;
}

bool ListGlobalEipSegments::geipPoolNameIsSet() const
{
    return geipPoolNameIsSet_;
}

void ListGlobalEipSegments::unsetgeipPoolName()
{
    geipPoolNameIsSet_ = false;
}

std::string ListGlobalEipSegments::getIsp() const
{
    return isp_;
}

void ListGlobalEipSegments::setIsp(const std::string& value)
{
    isp_ = value;
    ispIsSet_ = true;
}

bool ListGlobalEipSegments::ispIsSet() const
{
    return ispIsSet_;
}

void ListGlobalEipSegments::unsetisp()
{
    ispIsSet_ = false;
}

int32_t ListGlobalEipSegments::getIpVersion() const
{
    return ipVersion_;
}

void ListGlobalEipSegments::setIpVersion(int32_t value)
{
    ipVersion_ = value;
    ipVersionIsSet_ = true;
}

bool ListGlobalEipSegments::ipVersionIsSet() const
{
    return ipVersionIsSet_;
}

void ListGlobalEipSegments::unsetipVersion()
{
    ipVersionIsSet_ = false;
}

std::string ListGlobalEipSegments::getCidr() const
{
    return cidr_;
}

void ListGlobalEipSegments::setCidr(const std::string& value)
{
    cidr_ = value;
    cidrIsSet_ = true;
}

bool ListGlobalEipSegments::cidrIsSet() const
{
    return cidrIsSet_;
}

void ListGlobalEipSegments::unsetcidr()
{
    cidrIsSet_ = false;
}

std::string ListGlobalEipSegments::getCidrV6() const
{
    return cidrV6_;
}

void ListGlobalEipSegments::setCidrV6(const std::string& value)
{
    cidrV6_ = value;
    cidrV6IsSet_ = true;
}

bool ListGlobalEipSegments::cidrV6IsSet() const
{
    return cidrV6IsSet_;
}

void ListGlobalEipSegments::unsetcidrV6()
{
    cidrV6IsSet_ = false;
}

bool ListGlobalEipSegments::isFreezen() const
{
    return freezen_;
}

void ListGlobalEipSegments::setFreezen(bool value)
{
    freezen_ = value;
    freezenIsSet_ = true;
}

bool ListGlobalEipSegments::freezenIsSet() const
{
    return freezenIsSet_;
}

void ListGlobalEipSegments::unsetfreezen()
{
    freezenIsSet_ = false;
}

std::string ListGlobalEipSegments::getFreezenInfo() const
{
    return freezenInfo_;
}

void ListGlobalEipSegments::setFreezenInfo(const std::string& value)
{
    freezenInfo_ = value;
    freezenInfoIsSet_ = true;
}

bool ListGlobalEipSegments::freezenInfoIsSet() const
{
    return freezenInfoIsSet_;
}

void ListGlobalEipSegments::unsetfreezenInfo()
{
    freezenInfoIsSet_ = false;
}

std::string ListGlobalEipSegments::getStatus() const
{
    return status_;
}

void ListGlobalEipSegments::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListGlobalEipSegments::statusIsSet() const
{
    return statusIsSet_;
}

void ListGlobalEipSegments::unsetstatus()
{
    statusIsSet_ = false;
}

utility::datetime ListGlobalEipSegments::getCreatedAt() const
{
    return createdAt_;
}

void ListGlobalEipSegments::setCreatedAt(const utility::datetime& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool ListGlobalEipSegments::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void ListGlobalEipSegments::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

utility::datetime ListGlobalEipSegments::getUpdatedAt() const
{
    return updatedAt_;
}

void ListGlobalEipSegments::setUpdatedAt(const utility::datetime& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool ListGlobalEipSegments::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void ListGlobalEipSegments::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

InternetBandwidthInfo ListGlobalEipSegments::getInternetBandwidth() const
{
    return internetBandwidth_;
}

void ListGlobalEipSegments::setInternetBandwidth(const InternetBandwidthInfo& value)
{
    internetBandwidth_ = value;
    internetBandwidthIsSet_ = true;
}

bool ListGlobalEipSegments::internetBandwidthIsSet() const
{
    return internetBandwidthIsSet_;
}

void ListGlobalEipSegments::unsetinternetBandwidth()
{
    internetBandwidthIsSet_ = false;
}

InstanceInfo ListGlobalEipSegments::getAssociateInstance() const
{
    return associateInstance_;
}

void ListGlobalEipSegments::setAssociateInstance(const InstanceInfo& value)
{
    associateInstance_ = value;
    associateInstanceIsSet_ = true;
}

bool ListGlobalEipSegments::associateInstanceIsSet() const
{
    return associateInstanceIsSet_;
}

void ListGlobalEipSegments::unsetassociateInstance()
{
    associateInstanceIsSet_ = false;
}

bool ListGlobalEipSegments::isIsPrePaid() const
{
    return isPrePaid_;
}

void ListGlobalEipSegments::setIsPrePaid(bool value)
{
    isPrePaid_ = value;
    isPrePaidIsSet_ = true;
}

bool ListGlobalEipSegments::isPrePaidIsSet() const
{
    return isPrePaidIsSet_;
}

void ListGlobalEipSegments::unsetisPrePaid()
{
    isPrePaidIsSet_ = false;
}

std::vector<Tag>& ListGlobalEipSegments::getTags()
{
    return tags_;
}

void ListGlobalEipSegments::setTags(const std::vector<Tag>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ListGlobalEipSegments::tagsIsSet() const
{
    return tagsIsSet_;
}

void ListGlobalEipSegments::unsettags()
{
    tagsIsSet_ = false;
}

std::vector<Tag>& ListGlobalEipSegments::getSysTags()
{
    return sysTags_;
}

void ListGlobalEipSegments::setSysTags(const std::vector<Tag>& value)
{
    sysTags_ = value;
    sysTagsIsSet_ = true;
}

bool ListGlobalEipSegments::sysTagsIsSet() const
{
    return sysTagsIsSet_;
}

void ListGlobalEipSegments::unsetsysTags()
{
    sysTagsIsSet_ = false;
}

std::string ListGlobalEipSegments::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void ListGlobalEipSegments::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool ListGlobalEipSegments::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void ListGlobalEipSegments::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

}
}
}
}
}


