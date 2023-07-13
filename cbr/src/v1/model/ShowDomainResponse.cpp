

#include "huaweicloud/cbr/v1/model/ShowDomainResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




ShowDomainResponse::ShowDomainResponse()
{
    projectName_ = "";
    projectNameIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    domainId_ = "";
    domainIdIsSet_ = false;
    domainName_ = "";
    domainNameIsSet_ = false;
}

ShowDomainResponse::~ShowDomainResponse() = default;

void ShowDomainResponse::validate()
{
}

web::json::value ShowDomainResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectNameIsSet_) {
        val[utility::conversions::to_string_t("project_name")] = ModelBase::toJson(projectName_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }
    if(domainNameIsSet_) {
        val[utility::conversions::to_string_t("domain_name")] = ModelBase::toJson(domainName_);
    }

    return val;
}

bool ShowDomainResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("project_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("domain_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("domain_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainName(refVal);
        }
    }
    return ok;
}

std::string ShowDomainResponse::getProjectName() const
{
    return projectName_;
}

void ShowDomainResponse::setProjectName(const std::string& value)
{
    projectName_ = value;
    projectNameIsSet_ = true;
}

bool ShowDomainResponse::projectNameIsSet() const
{
    return projectNameIsSet_;
}

void ShowDomainResponse::unsetprojectName()
{
    projectNameIsSet_ = false;
}

std::string ShowDomainResponse::getProjectId() const
{
    return projectId_;
}

void ShowDomainResponse::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ShowDomainResponse::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ShowDomainResponse::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ShowDomainResponse::getDomainId() const
{
    return domainId_;
}

void ShowDomainResponse::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool ShowDomainResponse::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void ShowDomainResponse::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string ShowDomainResponse::getDomainName() const
{
    return domainName_;
}

void ShowDomainResponse::setDomainName(const std::string& value)
{
    domainName_ = value;
    domainNameIsSet_ = true;
}

bool ShowDomainResponse::domainNameIsSet() const
{
    return domainNameIsSet_;
}

void ShowDomainResponse::unsetdomainName()
{
    domainNameIsSet_ = false;
}

}
}
}
}
}


