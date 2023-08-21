

#include "huaweicloud/kms/v2/model/DisableKeyResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




DisableKeyResponse::DisableKeyResponse()
{
    keyInfoIsSet_ = false;
}

DisableKeyResponse::~DisableKeyResponse() = default;

void DisableKeyResponse::validate()
{
}

web::json::value DisableKeyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keyInfoIsSet_) {
        val[utility::conversions::to_string_t("key_info")] = ModelBase::toJson(keyInfo_);
    }

    return val;
}

bool DisableKeyResponse::fromJson(const web::json::value& val)
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

KeyStatusInfo DisableKeyResponse::getKeyInfo() const
{
    return keyInfo_;
}

void DisableKeyResponse::setKeyInfo(const KeyStatusInfo& value)
{
    keyInfo_ = value;
    keyInfoIsSet_ = true;
}

bool DisableKeyResponse::keyInfoIsSet() const
{
    return keyInfoIsSet_;
}

void DisableKeyResponse::unsetkeyInfo()
{
    keyInfoIsSet_ = false;
}

}
}
}
}
}


