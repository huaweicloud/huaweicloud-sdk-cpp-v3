

#include "huaweicloud/codeartsartifact/v2/model/UpdateRepoRolesPrivilegeRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




UpdateRepoRolesPrivilegeRequest::UpdateRepoRolesPrivilegeRequest()
{
    roleId_ = "";
    roleIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateRepoRolesPrivilegeRequest::~UpdateRepoRolesPrivilegeRequest() = default;

void UpdateRepoRolesPrivilegeRequest::validate()
{
}

web::json::value UpdateRepoRolesPrivilegeRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(roleIdIsSet_) {
        val[utility::conversions::to_string_t("role_id")] = ModelBase::toJson(roleId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateRepoRolesPrivilegeRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("role_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("role_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRoleId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            RolePrivilegeV5 refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateRepoRolesPrivilegeRequest::getRoleId() const
{
    return roleId_;
}

void UpdateRepoRolesPrivilegeRequest::setRoleId(const std::string& value)
{
    roleId_ = value;
    roleIdIsSet_ = true;
}

bool UpdateRepoRolesPrivilegeRequest::roleIdIsSet() const
{
    return roleIdIsSet_;
}

void UpdateRepoRolesPrivilegeRequest::unsetroleId()
{
    roleIdIsSet_ = false;
}

RolePrivilegeV5 UpdateRepoRolesPrivilegeRequest::getBody() const
{
    return body_;
}

void UpdateRepoRolesPrivilegeRequest::setBody(const RolePrivilegeV5& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateRepoRolesPrivilegeRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateRepoRolesPrivilegeRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


