

#include "huaweicloud/codehub/v3/model/AddHooksRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {
namespace Model {




AddHooksRequest::AddHooksRequest()
{
    groupName_ = "";
    groupNameIsSet_ = false;
    repositoryName_ = "";
    repositoryNameIsSet_ = false;
    bodyIsSet_ = false;
}

AddHooksRequest::~AddHooksRequest() = default;

void AddHooksRequest::validate()
{
}

web::json::value AddHooksRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(groupNameIsSet_) {
        val[utility::conversions::to_string_t("group_name")] = ModelBase::toJson(groupName_);
    }
    if(repositoryNameIsSet_) {
        val[utility::conversions::to_string_t("repository_name")] = ModelBase::toJson(repositoryName_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool AddHooksRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("group_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("repository_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repository_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepositoryName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            RepositoryHookRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string AddHooksRequest::getGroupName() const
{
    return groupName_;
}

void AddHooksRequest::setGroupName(const std::string& value)
{
    groupName_ = value;
    groupNameIsSet_ = true;
}

bool AddHooksRequest::groupNameIsSet() const
{
    return groupNameIsSet_;
}

void AddHooksRequest::unsetgroupName()
{
    groupNameIsSet_ = false;
}

std::string AddHooksRequest::getRepositoryName() const
{
    return repositoryName_;
}

void AddHooksRequest::setRepositoryName(const std::string& value)
{
    repositoryName_ = value;
    repositoryNameIsSet_ = true;
}

bool AddHooksRequest::repositoryNameIsSet() const
{
    return repositoryNameIsSet_;
}

void AddHooksRequest::unsetrepositoryName()
{
    repositoryNameIsSet_ = false;
}

RepositoryHookRequest AddHooksRequest::getBody() const
{
    return body_;
}

void AddHooksRequest::setBody(const RepositoryHookRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool AddHooksRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void AddHooksRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


