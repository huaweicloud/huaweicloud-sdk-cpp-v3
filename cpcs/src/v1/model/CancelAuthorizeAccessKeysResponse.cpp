

#include "huaweicloud/cpcs/v1/model/CancelAuthorizeAccessKeysResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {




CancelAuthorizeAccessKeysResponse::CancelAuthorizeAccessKeysResponse()
{
    accessKeysIsSet_ = false;
}

CancelAuthorizeAccessKeysResponse::~CancelAuthorizeAccessKeysResponse() = default;

void CancelAuthorizeAccessKeysResponse::validate()
{
}

web::json::value CancelAuthorizeAccessKeysResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(accessKeysIsSet_) {
        val[utility::conversions::to_string_t("access_keys")] = ModelBase::toJson(accessKeys_);
    }

    return val;
}
bool CancelAuthorizeAccessKeysResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("access_keys"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("access_keys"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccessKeys(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& CancelAuthorizeAccessKeysResponse::getAccessKeys()
{
    return accessKeys_;
}

void CancelAuthorizeAccessKeysResponse::setAccessKeys(const std::vector<std::string>& value)
{
    accessKeys_ = value;
    accessKeysIsSet_ = true;
}

bool CancelAuthorizeAccessKeysResponse::accessKeysIsSet() const
{
    return accessKeysIsSet_;
}

void CancelAuthorizeAccessKeysResponse::unsetaccessKeys()
{
    accessKeysIsSet_ = false;
}

}
}
}
}
}


