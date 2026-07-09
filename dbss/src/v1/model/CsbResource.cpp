

#include "huaweicloud/dbss/v1/model/CsbResource.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




CsbResource::CsbResource()
{
    tagsIsSet_ = false;
    affectedResourcesIsSet_ = false;
    createTime_ = utility::datetime();
    createTimeIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    environmentIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    provider_ = "";
    providerIsSet_ = false;
    resourceId_ = "";
    resourceIdIsSet_ = false;
    securityGroupId_ = "";
    securityGroupIdIsSet_ = false;
    subnetId_ = "";
    subnetIdIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    updateTime_ = utility::datetime();
    updateTimeIsSet_ = false;
    urn_ = "";
    urnIsSet_ = false;
    urnext_ = "";
    urnextIsSet_ = false;
    vpcId_ = "";
    vpcIdIsSet_ = false;
}

CsbResource::~CsbResource() = default;

void CsbResource::validate()
{
}

web::json::value CsbResource::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }
    if(affectedResourcesIsSet_) {
        val[utility::conversions::to_string_t("affected_resources")] = ModelBase::toJson(affectedResources_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(environmentIsSet_) {
        val[utility::conversions::to_string_t("environment")] = ModelBase::toJson(environment_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(providerIsSet_) {
        val[utility::conversions::to_string_t("provider")] = ModelBase::toJson(provider_);
    }
    if(resourceIdIsSet_) {
        val[utility::conversions::to_string_t("resource_id")] = ModelBase::toJson(resourceId_);
    }
    if(securityGroupIdIsSet_) {
        val[utility::conversions::to_string_t("security_group_id")] = ModelBase::toJson(securityGroupId_);
    }
    if(subnetIdIsSet_) {
        val[utility::conversions::to_string_t("subnet_id")] = ModelBase::toJson(subnetId_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(updateTimeIsSet_) {
        val[utility::conversions::to_string_t("update_time")] = ModelBase::toJson(updateTime_);
    }
    if(urnIsSet_) {
        val[utility::conversions::to_string_t("urn")] = ModelBase::toJson(urn_);
    }
    if(urnextIsSet_) {
        val[utility::conversions::to_string_t("urnext")] = ModelBase::toJson(urnext_);
    }
    if(vpcIdIsSet_) {
        val[utility::conversions::to_string_t("vpc_id")] = ModelBase::toJson(vpcId_);
    }

    return val;
}
bool CsbResource::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<CsbResourceTag> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("affected_resources"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("affected_resources"));
        if(!fieldValue.is_null())
        {
            std::vector<AffectedResource> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAffectedResources(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("environment"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("environment"));
        if(!fieldValue.is_null())
        {
            ResourceEnvironment refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnvironment(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("provider"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("provider"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProvider(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("security_group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("security_group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecurityGroupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("subnet_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subnet_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubnetId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_time"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("urn"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("urn"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUrn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("urnext"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("urnext"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUrnext(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vpc_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vpc_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVpcId(refVal);
        }
    }
    return ok;
}


std::vector<CsbResourceTag>& CsbResource::getTags()
{
    return tags_;
}

void CsbResource::setTags(const std::vector<CsbResourceTag>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool CsbResource::tagsIsSet() const
{
    return tagsIsSet_;
}

void CsbResource::unsettags()
{
    tagsIsSet_ = false;
}

std::vector<AffectedResource>& CsbResource::getAffectedResources()
{
    return affectedResources_;
}

void CsbResource::setAffectedResources(const std::vector<AffectedResource>& value)
{
    affectedResources_ = value;
    affectedResourcesIsSet_ = true;
}

bool CsbResource::affectedResourcesIsSet() const
{
    return affectedResourcesIsSet_;
}

void CsbResource::unsetaffectedResources()
{
    affectedResourcesIsSet_ = false;
}

utility::datetime CsbResource::getCreateTime() const
{
    return createTime_;
}

void CsbResource::setCreateTime(const utility::datetime& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool CsbResource::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void CsbResource::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string CsbResource::getDescription() const
{
    return description_;
}

void CsbResource::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool CsbResource::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void CsbResource::unsetdescription()
{
    descriptionIsSet_ = false;
}

ResourceEnvironment CsbResource::getEnvironment() const
{
    return environment_;
}

void CsbResource::setEnvironment(const ResourceEnvironment& value)
{
    environment_ = value;
    environmentIsSet_ = true;
}

bool CsbResource::environmentIsSet() const
{
    return environmentIsSet_;
}

void CsbResource::unsetenvironment()
{
    environmentIsSet_ = false;
}

std::string CsbResource::getName() const
{
    return name_;
}

void CsbResource::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CsbResource::nameIsSet() const
{
    return nameIsSet_;
}

void CsbResource::unsetname()
{
    nameIsSet_ = false;
}

std::string CsbResource::getProvider() const
{
    return provider_;
}

void CsbResource::setProvider(const std::string& value)
{
    provider_ = value;
    providerIsSet_ = true;
}

bool CsbResource::providerIsSet() const
{
    return providerIsSet_;
}

void CsbResource::unsetprovider()
{
    providerIsSet_ = false;
}

std::string CsbResource::getResourceId() const
{
    return resourceId_;
}

void CsbResource::setResourceId(const std::string& value)
{
    resourceId_ = value;
    resourceIdIsSet_ = true;
}

bool CsbResource::resourceIdIsSet() const
{
    return resourceIdIsSet_;
}

void CsbResource::unsetresourceId()
{
    resourceIdIsSet_ = false;
}

std::string CsbResource::getSecurityGroupId() const
{
    return securityGroupId_;
}

void CsbResource::setSecurityGroupId(const std::string& value)
{
    securityGroupId_ = value;
    securityGroupIdIsSet_ = true;
}

bool CsbResource::securityGroupIdIsSet() const
{
    return securityGroupIdIsSet_;
}

void CsbResource::unsetsecurityGroupId()
{
    securityGroupIdIsSet_ = false;
}

std::string CsbResource::getSubnetId() const
{
    return subnetId_;
}

void CsbResource::setSubnetId(const std::string& value)
{
    subnetId_ = value;
    subnetIdIsSet_ = true;
}

bool CsbResource::subnetIdIsSet() const
{
    return subnetIdIsSet_;
}

void CsbResource::unsetsubnetId()
{
    subnetIdIsSet_ = false;
}

std::string CsbResource::getType() const
{
    return type_;
}

void CsbResource::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool CsbResource::typeIsSet() const
{
    return typeIsSet_;
}

void CsbResource::unsettype()
{
    typeIsSet_ = false;
}

utility::datetime CsbResource::getUpdateTime() const
{
    return updateTime_;
}

void CsbResource::setUpdateTime(const utility::datetime& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool CsbResource::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void CsbResource::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

std::string CsbResource::getUrn() const
{
    return urn_;
}

void CsbResource::setUrn(const std::string& value)
{
    urn_ = value;
    urnIsSet_ = true;
}

bool CsbResource::urnIsSet() const
{
    return urnIsSet_;
}

void CsbResource::unseturn()
{
    urnIsSet_ = false;
}

std::string CsbResource::getUrnext() const
{
    return urnext_;
}

void CsbResource::setUrnext(const std::string& value)
{
    urnext_ = value;
    urnextIsSet_ = true;
}

bool CsbResource::urnextIsSet() const
{
    return urnextIsSet_;
}

void CsbResource::unseturnext()
{
    urnextIsSet_ = false;
}

std::string CsbResource::getVpcId() const
{
    return vpcId_;
}

void CsbResource::setVpcId(const std::string& value)
{
    vpcId_ = value;
    vpcIdIsSet_ = true;
}

bool CsbResource::vpcIdIsSet() const
{
    return vpcIdIsSet_;
}

void CsbResource::unsetvpcId()
{
    vpcIdIsSet_ = false;
}

}
}
}
}
}


