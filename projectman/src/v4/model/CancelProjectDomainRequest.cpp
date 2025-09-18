

#include "huaweicloud/projectman/v4/model/CancelProjectDomainRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




CancelProjectDomainRequest::CancelProjectDomainRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    domainId_ = "";
    domainIdIsSet_ = false;
}

CancelProjectDomainRequest::~CancelProjectDomainRequest() = default;

void CancelProjectDomainRequest::validate()
{
}

web::json::value CancelProjectDomainRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }

    return val;
}
bool CancelProjectDomainRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    return ok;
}


std::string CancelProjectDomainRequest::getProjectId() const
{
    return projectId_;
}

void CancelProjectDomainRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool CancelProjectDomainRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void CancelProjectDomainRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string CancelProjectDomainRequest::getDomainId() const
{
    return domainId_;
}

void CancelProjectDomainRequest::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool CancelProjectDomainRequest::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void CancelProjectDomainRequest::unsetdomainId()
{
    domainIdIsSet_ = false;
}

}
}
}
}
}


