

#include "huaweicloud/identitycenterstore/v1/model/GetUserIdResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {




GetUserIdResponse::GetUserIdResponse()
{
    identityStoreId_ = "";
    identityStoreIdIsSet_ = false;
    userId_ = "";
    userIdIsSet_ = false;
}

GetUserIdResponse::~GetUserIdResponse() = default;

void GetUserIdResponse::validate()
{
}

web::json::value GetUserIdResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(identityStoreIdIsSet_) {
        val[utility::conversions::to_string_t("identity_store_id")] = ModelBase::toJson(identityStoreId_);
    }
    if(userIdIsSet_) {
        val[utility::conversions::to_string_t("user_id")] = ModelBase::toJson(userId_);
    }

    return val;
}
bool GetUserIdResponse::fromJson(const web::json::value& val)
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
    return ok;
}


std::string GetUserIdResponse::getIdentityStoreId() const
{
    return identityStoreId_;
}

void GetUserIdResponse::setIdentityStoreId(const std::string& value)
{
    identityStoreId_ = value;
    identityStoreIdIsSet_ = true;
}

bool GetUserIdResponse::identityStoreIdIsSet() const
{
    return identityStoreIdIsSet_;
}

void GetUserIdResponse::unsetidentityStoreId()
{
    identityStoreIdIsSet_ = false;
}

std::string GetUserIdResponse::getUserId() const
{
    return userId_;
}

void GetUserIdResponse::setUserId(const std::string& value)
{
    userId_ = value;
    userIdIsSet_ = true;
}

bool GetUserIdResponse::userIdIsSet() const
{
    return userIdIsSet_;
}

void GetUserIdResponse::unsetuserId()
{
    userIdIsSet_ = false;
}

}
}
}
}
}


