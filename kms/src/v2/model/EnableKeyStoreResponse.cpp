

#include "huaweicloud/kms/v2/model/EnableKeyStoreResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




EnableKeyStoreResponse::EnableKeyStoreResponse()
{
    keystoreIsSet_ = false;
}

EnableKeyStoreResponse::~EnableKeyStoreResponse() = default;

void EnableKeyStoreResponse::validate()
{
}

web::json::value EnableKeyStoreResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keystoreIsSet_) {
        val[utility::conversions::to_string_t("keystore")] = ModelBase::toJson(keystore_);
    }

    return val;
}

bool EnableKeyStoreResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("keystore"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("keystore"));
        if(!fieldValue.is_null())
        {
            KeyStoreStateInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeystore(refVal);
        }
    }
    return ok;
}

KeyStoreStateInfo EnableKeyStoreResponse::getKeystore() const
{
    return keystore_;
}

void EnableKeyStoreResponse::setKeystore(const KeyStoreStateInfo& value)
{
    keystore_ = value;
    keystoreIsSet_ = true;
}

bool EnableKeyStoreResponse::keystoreIsSet() const
{
    return keystoreIsSet_;
}

void EnableKeyStoreResponse::unsetkeystore()
{
    keystoreIsSet_ = false;
}

}
}
}
}
}


