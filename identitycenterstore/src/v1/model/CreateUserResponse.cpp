

#include "huaweicloud/identitycenterstore/v1/model/CreateUserResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {




CreateUserResponse::CreateUserResponse()
{
    identityStoreId_ = "";
    identityStoreIdIsSet_ = false;
    userId_ = "";
    userIdIsSet_ = false;
    password_ = "";
    passwordIsSet_ = false;
}

CreateUserResponse::~CreateUserResponse() = default;

void CreateUserResponse::validate()
{
}

web::json::value CreateUserResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(identityStoreIdIsSet_) {
        val[utility::conversions::to_string_t("identity_store_id")] = ModelBase::toJson(identityStoreId_);
    }
    if(userIdIsSet_) {
        val[utility::conversions::to_string_t("user_id")] = ModelBase::toJson(userId_);
    }
    if(passwordIsSet_) {
        val[utility::conversions::to_string_t("password")] = ModelBase::toJson(password_);
    }

    return val;
}
bool CreateUserResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("identity_store_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("identity_store_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIdentityStoreId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("password"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("password"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPassword(refVal);
        }
    }
    return ok;
}


std::string CreateUserResponse::getIdentityStoreId() const
{
    return identityStoreId_;
}

void CreateUserResponse::setIdentityStoreId(const std::string& value)
{
    identityStoreId_ = value;
    identityStoreIdIsSet_ = true;
}

bool CreateUserResponse::identityStoreIdIsSet() const
{
    return identityStoreIdIsSet_;
}

void CreateUserResponse::unsetidentityStoreId()
{
    identityStoreIdIsSet_ = false;
}

std::string CreateUserResponse::getUserId() const
{
    return userId_;
}

void CreateUserResponse::setUserId(const std::string& value)
{
    userId_ = value;
    userIdIsSet_ = true;
}

bool CreateUserResponse::userIdIsSet() const
{
    return userIdIsSet_;
}

void CreateUserResponse::unsetuserId()
{
    userIdIsSet_ = false;
}

std::string CreateUserResponse::getPassword() const
{
    return password_;
}

void CreateUserResponse::setPassword(const std::string& value)
{
    password_ = value;
    passwordIsSet_ = true;
}

bool CreateUserResponse::passwordIsSet() const
{
    return passwordIsSet_;
}

void CreateUserResponse::unsetpassword()
{
    passwordIsSet_ = false;
}

}
}
}
}
}


