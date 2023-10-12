

#include "huaweicloud/kms/v2/model/UpdateKeyDescriptionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




UpdateKeyDescriptionResponse::UpdateKeyDescriptionResponse()
{
    keyInfoIsSet_ = false;
}

UpdateKeyDescriptionResponse::~UpdateKeyDescriptionResponse() = default;

void UpdateKeyDescriptionResponse::validate()
{
}

web::json::value UpdateKeyDescriptionResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keyInfoIsSet_) {
        val[utility::conversions::to_string_t("key_info")] = ModelBase::toJson(keyInfo_);
    }

    return val;
}
bool UpdateKeyDescriptionResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("key_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key_info"));
        if(!fieldValue.is_null())
        {
            KeyDescriptionInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeyInfo(refVal);
        }
    }
    return ok;
}


KeyDescriptionInfo UpdateKeyDescriptionResponse::getKeyInfo() const
{
    return keyInfo_;
}

void UpdateKeyDescriptionResponse::setKeyInfo(const KeyDescriptionInfo& value)
{
    keyInfo_ = value;
    keyInfoIsSet_ = true;
}

bool UpdateKeyDescriptionResponse::keyInfoIsSet() const
{
    return keyInfoIsSet_;
}

void UpdateKeyDescriptionResponse::unsetkeyInfo()
{
    keyInfoIsSet_ = false;
}

}
}
}
}
}


