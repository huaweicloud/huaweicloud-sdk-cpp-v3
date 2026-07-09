

#include "huaweicloud/dbss/v1/model/ResourceEnvironment.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




ResourceEnvironment::ResourceEnvironment()
{
    domainId_ = "";
    domainIdIsSet_ = false;
    epId_ = "";
    epIdIsSet_ = false;
    epName_ = "";
    epNameIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    regionId_ = "";
    regionIdIsSet_ = false;
}

ResourceEnvironment::~ResourceEnvironment() = default;

void ResourceEnvironment::validate()
{
}

web::json::value ResourceEnvironment::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }
    if(epIdIsSet_) {
        val[utility::conversions::to_string_t("ep_id")] = ModelBase::toJson(epId_);
    }
    if(epNameIsSet_) {
        val[utility::conversions::to_string_t("ep_name")] = ModelBase::toJson(epName_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(regionIdIsSet_) {
        val[utility::conversions::to_string_t("region_id")] = ModelBase::toJson(regionId_);
    }

    return val;
}
bool ResourceEnvironment::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("domain_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ep_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ep_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEpId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ep_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ep_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEpName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("region_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegionId(refVal);
        }
    }
    return ok;
}


std::string ResourceEnvironment::getDomainId() const
{
    return domainId_;
}

void ResourceEnvironment::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool ResourceEnvironment::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void ResourceEnvironment::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string ResourceEnvironment::getEpId() const
{
    return epId_;
}

void ResourceEnvironment::setEpId(const std::string& value)
{
    epId_ = value;
    epIdIsSet_ = true;
}

bool ResourceEnvironment::epIdIsSet() const
{
    return epIdIsSet_;
}

void ResourceEnvironment::unsetepId()
{
    epIdIsSet_ = false;
}

std::string ResourceEnvironment::getEpName() const
{
    return epName_;
}

void ResourceEnvironment::setEpName(const std::string& value)
{
    epName_ = value;
    epNameIsSet_ = true;
}

bool ResourceEnvironment::epNameIsSet() const
{
    return epNameIsSet_;
}

void ResourceEnvironment::unsetepName()
{
    epNameIsSet_ = false;
}

std::string ResourceEnvironment::getProjectId() const
{
    return projectId_;
}

void ResourceEnvironment::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ResourceEnvironment::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ResourceEnvironment::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ResourceEnvironment::getRegionId() const
{
    return regionId_;
}

void ResourceEnvironment::setRegionId(const std::string& value)
{
    regionId_ = value;
    regionIdIsSet_ = true;
}

bool ResourceEnvironment::regionIdIsSet() const
{
    return regionIdIsSet_;
}

void ResourceEnvironment::unsetregionId()
{
    regionIdIsSet_ = false;
}

}
}
}
}
}


