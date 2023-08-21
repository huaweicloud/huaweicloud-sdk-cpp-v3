

#include "huaweicloud/kms/v2/model/UpdateKeyAliasResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




UpdateKeyAliasResponse::UpdateKeyAliasResponse()
{
    keyInfoIsSet_ = false;
}

UpdateKeyAliasResponse::~UpdateKeyAliasResponse() = default;

void UpdateKeyAliasResponse::validate()
{
}

web::json::value UpdateKeyAliasResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keyInfoIsSet_) {
        val[utility::conversions::to_string_t("key_info")] = ModelBase::toJson(keyInfo_);
    }

    return val;
}

bool UpdateKeyAliasResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("key_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key_info"));
        if(!fieldValue.is_null())
        {
            KeyAliasInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeyInfo(refVal);
        }
    }
    return ok;
}

KeyAliasInfo UpdateKeyAliasResponse::getKeyInfo() const
{
    return keyInfo_;
}

void UpdateKeyAliasResponse::setKeyInfo(const KeyAliasInfo& value)
{
    keyInfo_ = value;
    keyInfoIsSet_ = true;
}

bool UpdateKeyAliasResponse::keyInfoIsSet() const
{
    return keyInfoIsSet_;
}

void UpdateKeyAliasResponse::unsetkeyInfo()
{
    keyInfoIsSet_ = false;
}

}
}
}
}
}


