

#include "huaweicloud/rds/v3/model/DbUserPrivilegeRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




DbUserPrivilegeRequest::DbUserPrivilegeRequest()
{
    userName_ = "";
    userNameIsSet_ = false;
    authorizationType_ = "";
    authorizationTypeIsSet_ = false;
    privilegesIsSet_ = false;
}

DbUserPrivilegeRequest::~DbUserPrivilegeRequest() = default;

void DbUserPrivilegeRequest::validate()
{
}

web::json::value DbUserPrivilegeRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(userNameIsSet_) {
        val[utility::conversions::to_string_t("user_name")] = ModelBase::toJson(userName_);
    }
    if(authorizationTypeIsSet_) {
        val[utility::conversions::to_string_t("authorization_type")] = ModelBase::toJson(authorizationType_);
    }
    if(privilegesIsSet_) {
        val[utility::conversions::to_string_t("privileges")] = ModelBase::toJson(privileges_);
    }

    return val;
}

bool DbUserPrivilegeRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("user_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("authorization_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("authorization_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthorizationType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("privileges"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("privileges"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPrivileges(refVal);
        }
    }
    return ok;
}

std::string DbUserPrivilegeRequest::getUserName() const
{
    return userName_;
}

void DbUserPrivilegeRequest::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool DbUserPrivilegeRequest::userNameIsSet() const
{
    return userNameIsSet_;
}

void DbUserPrivilegeRequest::unsetuserName()
{
    userNameIsSet_ = false;
}

std::string DbUserPrivilegeRequest::getAuthorizationType() const
{
    return authorizationType_;
}

void DbUserPrivilegeRequest::setAuthorizationType(const std::string& value)
{
    authorizationType_ = value;
    authorizationTypeIsSet_ = true;
}

bool DbUserPrivilegeRequest::authorizationTypeIsSet() const
{
    return authorizationTypeIsSet_;
}

void DbUserPrivilegeRequest::unsetauthorizationType()
{
    authorizationTypeIsSet_ = false;
}

std::vector<std::string>& DbUserPrivilegeRequest::getPrivileges()
{
    return privileges_;
}

void DbUserPrivilegeRequest::setPrivileges(const std::vector<std::string>& value)
{
    privileges_ = value;
    privilegesIsSet_ = true;
}

bool DbUserPrivilegeRequest::privilegesIsSet() const
{
    return privilegesIsSet_;
}

void DbUserPrivilegeRequest::unsetprivileges()
{
    privilegesIsSet_ = false;
}

}
}
}
}
}


