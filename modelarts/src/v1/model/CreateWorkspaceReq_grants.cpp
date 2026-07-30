

#include "huaweicloud/modelarts/v1/model/CreateWorkspaceReq_grants.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




CreateWorkspaceReq_grants::CreateWorkspaceReq_grants()
{
    userId_ = "";
    userIdIsSet_ = false;
    userName_ = "";
    userNameIsSet_ = false;
    userType_ = "";
    userTypeIsSet_ = false;
}

CreateWorkspaceReq_grants::~CreateWorkspaceReq_grants() = default;

void CreateWorkspaceReq_grants::validate()
{
}

web::json::value CreateWorkspaceReq_grants::toJson() const
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
bool CreateWorkspaceReq_grants::fromJson(const web::json::value& val)
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


std::string CreateWorkspaceReq_grants::getUserId() const
{
    return userId_;
}

void CreateWorkspaceReq_grants::setUserId(const std::string& value)
{
    userId_ = value;
    userIdIsSet_ = true;
}

bool CreateWorkspaceReq_grants::userIdIsSet() const
{
    return userIdIsSet_;
}

void CreateWorkspaceReq_grants::unsetuserId()
{
    userIdIsSet_ = false;
}

std::string CreateWorkspaceReq_grants::getUserName() const
{
    return userName_;
}

void CreateWorkspaceReq_grants::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool CreateWorkspaceReq_grants::userNameIsSet() const
{
    return userNameIsSet_;
}

void CreateWorkspaceReq_grants::unsetuserName()
{
    userNameIsSet_ = false;
}

std::string CreateWorkspaceReq_grants::getUserType() const
{
    return userType_;
}

void CreateWorkspaceReq_grants::setUserType(const std::string& value)
{
    userType_ = value;
    userTypeIsSet_ = true;
}

bool CreateWorkspaceReq_grants::userTypeIsSet() const
{
    return userTypeIsSet_;
}

void CreateWorkspaceReq_grants::unsetuserType()
{
    userTypeIsSet_ = false;
}

}
}
}
}
}


