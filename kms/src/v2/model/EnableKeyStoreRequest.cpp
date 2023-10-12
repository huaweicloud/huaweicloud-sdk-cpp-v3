

#include "huaweicloud/kms/v2/model/EnableKeyStoreRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




EnableKeyStoreRequest::EnableKeyStoreRequest()
{
    keystoreId_ = "";
    keystoreIdIsSet_ = false;
}

EnableKeyStoreRequest::~EnableKeyStoreRequest() = default;

void EnableKeyStoreRequest::validate()
{
}

web::json::value EnableKeyStoreRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keystoreIdIsSet_) {
        val[utility::conversions::to_string_t("keystore_id")] = ModelBase::toJson(keystoreId_);
    }

    return val;
}
bool EnableKeyStoreRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("keystore_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("keystore_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeystoreId(refVal);
        }
    }
    return ok;
}


std::string EnableKeyStoreRequest::getKeystoreId() const
{
    return keystoreId_;
}

void EnableKeyStoreRequest::setKeystoreId(const std::string& value)
{
    keystoreId_ = value;
    keystoreIdIsSet_ = true;
}

bool EnableKeyStoreRequest::keystoreIdIsSet() const
{
    return keystoreIdIsSet_;
}

void EnableKeyStoreRequest::unsetkeystoreId()
{
    keystoreIdIsSet_ = false;
}

}
}
}
}
}


