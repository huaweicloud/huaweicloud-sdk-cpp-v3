

#include "huaweicloud/modelarts/v1/model/ViewWorkspaceResponse_grants.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ViewWorkspaceResponse_grants::ViewWorkspaceResponse_grants()
{
    userId_ = "";
    userIdIsSet_ = false;
    userName_ = "";
    userNameIsSet_ = false;
    userType_ = "";
    userTypeIsSet_ = false;
}

ViewWorkspaceResponse_grants::~ViewWorkspaceResponse_grants() = default;

void ViewWorkspaceResponse_grants::validate()
{
}

web::json::value ViewWorkspaceResponse_grants::toJson() const
{
    web::json::value val = web::json::value::object();

    if(userIdIsSet_) {
        val[utility::conversions::to_string_t("user_id")] = ModelBase::toJson(userId_);
    }
    if(userNameIsSet_) {
        val[utility::conversions::to_string_t("user_name")] = ModelBase::toJson(userName_);
    }
    if(userTypeIsSet_) {
        val[utility::conversions::to_string_t("user_type")] = ModelBase::toJson(userType_);
    }

    return val;
}
bool ViewWorkspaceResponse_grants::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("user_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserType(refVal);
        }
    }
    return ok;
}


std::string ViewWorkspaceResponse_grants::getUserId() const
{
    return userId_;
}

void ViewWorkspaceResponse_grants::setUserId(const std::string& value)
{
    userId_ = value;
    userIdIsSet_ = true;
}

bool ViewWorkspaceResponse_grants::userIdIsSet() const
{
    return userIdIsSet_;
}

void ViewWorkspaceResponse_grants::unsetuserId()
{
    userIdIsSet_ = false;
}

std::string ViewWorkspaceResponse_grants::getUserName() const
{
    return userName_;
}

void ViewWorkspaceResponse_grants::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool ViewWorkspaceResponse_grants::userNameIsSet() const
{
    return userNameIsSet_;
}

void ViewWorkspaceResponse_grants::unsetuserName()
{
    userNameIsSet_ = false;
}

std::string ViewWorkspaceResponse_grants::getUserType() const
{
    return userType_;
}

void ViewWorkspaceResponse_grants::setUserType(const std::string& value)
{
    userType_ = value;
    userTypeIsSet_ = true;
}

bool ViewWorkspaceResponse_grants::userTypeIsSet() const
{
    return userTypeIsSet_;
}

void ViewWorkspaceResponse_grants::unsetuserType()
{
    userTypeIsSet_ = false;
}

}
}
}
}
}


