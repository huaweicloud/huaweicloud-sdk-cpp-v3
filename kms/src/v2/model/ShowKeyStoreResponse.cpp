

#include "huaweicloud/kms/v2/model/ShowKeyStoreResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




ShowKeyStoreResponse::ShowKeyStoreResponse()
{
    keystoreIsSet_ = false;
}

ShowKeyStoreResponse::~ShowKeyStoreResponse() = default;

void ShowKeyStoreResponse::validate()
{
}

web::json::value ShowKeyStoreResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keystoreIsSet_) {
        val[utility::conversions::to_string_t("keystore")] = ModelBase::toJson(keystore_);
    }

    return val;
}
bool ShowKeyStoreResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("keystore"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("keystore"));
        if(!fieldValue.is_null())
        {
            KeystoreDetails refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeystore(refVal);
        }
    }
    return ok;
}


KeystoreDetails ShowKeyStoreResponse::getKeystore() const
{
    return keystore_;
}

void ShowKeyStoreResponse::setKeystore(const KeystoreDetails& value)
{
    keystore_ = value;
    keystoreIsSet_ = true;
}

bool ShowKeyStoreResponse::keystoreIsSet() const
{
    return keystoreIsSet_;
}

void ShowKeyStoreResponse::unsetkeystore()
{
    keystoreIsSet_ = false;
}

}
}
}
}
}


