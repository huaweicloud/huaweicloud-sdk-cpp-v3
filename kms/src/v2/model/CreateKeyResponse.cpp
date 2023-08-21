

#include "huaweicloud/kms/v2/model/CreateKeyResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




CreateKeyResponse::CreateKeyResponse()
{
    keyInfoIsSet_ = false;
}

CreateKeyResponse::~CreateKeyResponse() = default;

void CreateKeyResponse::validate()
{
}

web::json::value CreateKeyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keyInfoIsSet_) {
        val[utility::conversions::to_string_t("key_info")] = ModelBase::toJson(keyInfo_);
    }

    return val;
}

bool CreateKeyResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("key_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key_info"));
        if(!fieldValue.is_null())
        {
            KeKInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeyInfo(refVal);
        }
    }
    return ok;
}

KeKInfo CreateKeyResponse::getKeyInfo() const
{
    return keyInfo_;
}

void CreateKeyResponse::setKeyInfo(const KeKInfo& value)
{
    keyInfo_ = value;
    keyInfoIsSet_ = true;
}

bool CreateKeyResponse::keyInfoIsSet() const
{
    return keyInfoIsSet_;
}

void CreateKeyResponse::unsetkeyInfo()
{
    keyInfoIsSet_ = false;
}

}
}
}
}
}


