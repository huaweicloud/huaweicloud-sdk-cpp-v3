

#include "huaweicloud/modelarts/v1/model/CreateWorkspaceResponseBody_grants.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




CreateWorkspaceResponseBody_grants::CreateWorkspaceResponseBody_grants()
{
    userId_ = "";
    userIdIsSet_ = false;
    userName_ = "";
    userNameIsSet_ = false;
}

CreateWorkspaceResponseBody_grants::~CreateWorkspaceResponseBody_grants() = default;

void CreateWorkspaceResponseBody_grants::validate()
{
}

web::json::value CreateWorkspaceResponseBody_grants::toJson() const
{
    web::json::value val = web::json::value::object();

    if(userIdIsSet_) {
        val[utility::conversions::to_string_t("user_id")] = ModelBase::toJson(userId_);
    }
    if(userNameIsSet_) {
        val[utility::conversions::to_string_t("user_name")] = ModelBase::toJson(userName_);
    }

    return val;
}
bool CreateWorkspaceResponseBody_grants::fromJson(const web::json::value& val)
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
    return ok;
}


std::string CreateWorkspaceResponseBody_grants::getUserId() const
{
    return userId_;
}

void CreateWorkspaceResponseBody_grants::setUserId(const std::string& value)
{
    userId_ = value;
    userIdIsSet_ = true;
}

bool CreateWorkspaceResponseBody_grants::userIdIsSet() const
{
    return userIdIsSet_;
}

void CreateWorkspaceResponseBody_grants::unsetuserId()
{
    userIdIsSet_ = false;
}

std::string CreateWorkspaceResponseBody_grants::getUserName() const
{
    return userName_;
}

void CreateWorkspaceResponseBody_grants::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool CreateWorkspaceResponseBody_grants::userNameIsSet() const
{
    return userNameIsSet_;
}

void CreateWorkspaceResponseBody_grants::unsetuserName()
{
    userNameIsSet_ = false;
}

}
}
}
}
}


