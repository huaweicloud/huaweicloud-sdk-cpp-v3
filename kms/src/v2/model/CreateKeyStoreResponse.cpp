

#include "huaweicloud/kms/v2/model/CreateKeyStoreResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




CreateKeyStoreResponse::CreateKeyStoreResponse()
{
    keystoreIsSet_ = false;
}

CreateKeyStoreResponse::~CreateKeyStoreResponse() = default;

void CreateKeyStoreResponse::validate()
{
}

web::json::value CreateKeyStoreResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keystoreIsSet_) {
        val[utility::conversions::to_string_t("keystore")] = ModelBase::toJson(keystore_);
    }

    return val;
}
bool CreateKeyStoreResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("keystore"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("keystore"));
        if(!fieldValue.is_null())
        {
            KeystoreInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeystore(refVal);
        }
    }
    return ok;
}


KeystoreInfo CreateKeyStoreResponse::getKeystore() const
{
    return keystore_;
}

void CreateKeyStoreResponse::setKeystore(const KeystoreInfo& value)
{
    keystore_ = value;
    keystoreIsSet_ = true;
}

bool CreateKeyStoreResponse::keystoreIsSet() const
{
    return keystoreIsSet_;
}

void CreateKeyStoreResponse::unsetkeystore()
{
    keystoreIsSet_ = false;
}

}
}
}
}
}


