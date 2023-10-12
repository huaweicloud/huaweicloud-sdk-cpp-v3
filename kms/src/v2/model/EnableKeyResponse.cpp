

#include "huaweicloud/kms/v2/model/EnableKeyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




EnableKeyResponse::EnableKeyResponse()
{
    keyInfoIsSet_ = false;
}

EnableKeyResponse::~EnableKeyResponse() = default;

void EnableKeyResponse::validate()
{
}

web::json::value EnableKeyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keyInfoIsSet_) {
        val[utility::conversions::to_string_t("key_info")] = ModelBase::toJson(keyInfo_);
    }

    return val;
}
bool EnableKeyResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("key_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key_info"));
        if(!fieldValue.is_null())
        {
            KeyStatusInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeyInfo(refVal);
        }
    }
    return ok;
}


KeyStatusInfo EnableKeyResponse::getKeyInfo() const
{
    return keyInfo_;
}

void EnableKeyResponse::setKeyInfo(const KeyStatusInfo& value)
{
    keyInfo_ = value;
    keyInfoIsSet_ = true;
}

bool EnableKeyResponse::keyInfoIsSet() const
{
    return keyInfoIsSet_;
}

void EnableKeyResponse::unsetkeyInfo()
{
    keyInfoIsSet_ = false;
}

}
}
}
}
}


