

#include "huaweicloud/kms/v2/model/DisableKeyStoreRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




DisableKeyStoreRequest::DisableKeyStoreRequest()
{
    keystoreId_ = "";
    keystoreIdIsSet_ = false;
}

DisableKeyStoreRequest::~DisableKeyStoreRequest() = default;

void DisableKeyStoreRequest::validate()
{
}

web::json::value DisableKeyStoreRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keystoreIdIsSet_) {
        val[utility::conversions::to_string_t("keystore_id")] = ModelBase::toJson(keystoreId_);
    }

    return val;
}

bool DisableKeyStoreRequest::fromJson(const web::json::value& val)
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

std::string DisableKeyStoreRequest::getKeystoreId() const
{
    return keystoreId_;
}

void DisableKeyStoreRequest::setKeystoreId(const std::string& value)
{
    keystoreId_ = value;
    keystoreIdIsSet_ = true;
}

bool DisableKeyStoreRequest::keystoreIdIsSet() const
{
    return keystoreIdIsSet_;
}

void DisableKeyStoreRequest::unsetkeystoreId()
{
    keystoreIdIsSet_ = false;
}

}
}
}
}
}


