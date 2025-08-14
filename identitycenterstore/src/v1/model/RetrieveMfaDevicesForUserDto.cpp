

#include "huaweicloud/identitycenterstore/v1/model/RetrieveMfaDevicesForUserDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {




RetrieveMfaDevicesForUserDto::RetrieveMfaDevicesForUserDto()
{
    identityStoreId_ = "";
    identityStoreIdIsSet_ = false;
    userId_ = "";
    userIdIsSet_ = false;
}

RetrieveMfaDevicesForUserDto::~RetrieveMfaDevicesForUserDto() = default;

void RetrieveMfaDevicesForUserDto::validate()
{
}

web::json::value RetrieveMfaDevicesForUserDto::toJson() const
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
bool RetrieveMfaDevicesForUserDto::fromJson(const web::json::value& val)
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


std::string RetrieveMfaDevicesForUserDto::getIdentityStoreId() const
{
    return identityStoreId_;
}

void RetrieveMfaDevicesForUserDto::setIdentityStoreId(const std::string& value)
{
    identityStoreId_ = value;
    identityStoreIdIsSet_ = true;
}

bool RetrieveMfaDevicesForUserDto::identityStoreIdIsSet() const
{
    return identityStoreIdIsSet_;
}

void RetrieveMfaDevicesForUserDto::unsetidentityStoreId()
{
    identityStoreIdIsSet_ = false;
}

std::string RetrieveMfaDevicesForUserDto::getUserId() const
{
    return userId_;
}

void RetrieveMfaDevicesForUserDto::setUserId(const std::string& value)
{
    userId_ = value;
    userIdIsSet_ = true;
}

bool RetrieveMfaDevicesForUserDto::userIdIsSet() const
{
    return userIdIsSet_;
}

void RetrieveMfaDevicesForUserDto::unsetuserId()
{
    userIdIsSet_ = false;
}

}
}
}
}
}


