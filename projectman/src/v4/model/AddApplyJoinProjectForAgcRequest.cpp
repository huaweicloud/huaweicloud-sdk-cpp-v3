

#include "huaweicloud/projectman/v4/model/AddApplyJoinProjectForAgcRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




AddApplyJoinProjectForAgcRequest::AddApplyJoinProjectForAgcRequest()
{
    domainId_ = "";
    domainIdIsSet_ = false;
    userId_ = "";
    userIdIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
}

AddApplyJoinProjectForAgcRequest::~AddApplyJoinProjectForAgcRequest() = default;

void AddApplyJoinProjectForAgcRequest::validate()
{
}

web::json::value AddApplyJoinProjectForAgcRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("Domain-Id")] = ModelBase::toJson(domainId_);
    }
    if(userIdIsSet_) {
        val[utility::conversions::to_string_t("User-Id")] = ModelBase::toJson(userId_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }

    return val;
}
bool AddApplyJoinProjectForAgcRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("Domain-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Domain-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("User-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("User-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserId(refVal);
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
    return ok;
}


std::string AddApplyJoinProjectForAgcRequest::getDomainId() const
{
    return domainId_;
}

void AddApplyJoinProjectForAgcRequest::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool AddApplyJoinProjectForAgcRequest::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void AddApplyJoinProjectForAgcRequest::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string AddApplyJoinProjectForAgcRequest::getUserId() const
{
    return userId_;
}

void AddApplyJoinProjectForAgcRequest::setUserId(const std::string& value)
{
    userId_ = value;
    userIdIsSet_ = true;
}

bool AddApplyJoinProjectForAgcRequest::userIdIsSet() const
{
    return userIdIsSet_;
}

void AddApplyJoinProjectForAgcRequest::unsetuserId()
{
    userIdIsSet_ = false;
}

std::string AddApplyJoinProjectForAgcRequest::getProjectId() const
{
    return projectId_;
}

void AddApplyJoinProjectForAgcRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool AddApplyJoinProjectForAgcRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void AddApplyJoinProjectForAgcRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

}
}
}
}
}


