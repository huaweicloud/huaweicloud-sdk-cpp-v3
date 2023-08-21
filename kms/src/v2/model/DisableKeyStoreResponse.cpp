

#include "huaweicloud/kms/v2/model/DisableKeyStoreResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




DisableKeyStoreResponse::DisableKeyStoreResponse()
{
    keystoreIsSet_ = false;
}

DisableKeyStoreResponse::~DisableKeyStoreResponse() = default;

void DisableKeyStoreResponse::validate()
{
}

web::json::value DisableKeyStoreResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keystoreIsSet_) {
        val[utility::conversions::to_string_t("keystore")] = ModelBase::toJson(keystore_);
    }

    return val;
}

bool DisableKeyStoreResponse::fromJson(const web::json::value& val)
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

KeyStoreStateInfo DisableKeyStoreResponse::getKeystore() const
{
    return keystore_;
}

void DisableKeyStoreResponse::setKeystore(const KeyStoreStateInfo& value)
{
    keystore_ = value;
    keystoreIsSet_ = true;
}

bool DisableKeyStoreResponse::keystoreIsSet() const
{
    return keystoreIsSet_;
}

void DisableKeyStoreResponse::unsetkeystore()
{
    keystoreIsSet_ = false;
}

}
}
}
}
}


