

#include "huaweicloud/kms/v2/model/UpdateKeyStoreResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




UpdateKeyStoreResponse::UpdateKeyStoreResponse()
{
    keystoreIsSet_ = false;
}

UpdateKeyStoreResponse::~UpdateKeyStoreResponse() = default;

void UpdateKeyStoreResponse::validate()
{
}

web::json::value UpdateKeyStoreResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keystoreIsSet_) {
        val[utility::conversions::to_string_t("keystore")] = ModelBase::toJson(keystore_);
    }

    return val;
}
bool UpdateKeyStoreResponse::fromJson(const web::json::value& val)
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


KeyStoreStateInfo UpdateKeyStoreResponse::getKeystore() const
{
    return keystore_;
}

void UpdateKeyStoreResponse::setKeystore(const KeyStoreStateInfo& value)
{
    keystore_ = value;
    keystoreIsSet_ = true;
}

bool UpdateKeyStoreResponse::keystoreIsSet() const
{
    return keystoreIsSet_;
}

void UpdateKeyStoreResponse::unsetkeystore()
{
    keystoreIsSet_ = false;
}

}
}
}
}
}


