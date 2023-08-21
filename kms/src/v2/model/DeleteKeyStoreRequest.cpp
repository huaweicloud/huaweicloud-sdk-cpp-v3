

#include "huaweicloud/kms/v2/model/DeleteKeyStoreRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




DeleteKeyStoreRequest::DeleteKeyStoreRequest()
{
    keystoreId_ = "";
    keystoreIdIsSet_ = false;
}

DeleteKeyStoreRequest::~DeleteKeyStoreRequest() = default;

void DeleteKeyStoreRequest::validate()
{
}

web::json::value DeleteKeyStoreRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keystoreIdIsSet_) {
        val[utility::conversions::to_string_t("keystore_id")] = ModelBase::toJson(keystoreId_);
    }

    return val;
}

bool DeleteKeyStoreRequest::fromJson(const web::json::value& val)
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

std::string DeleteKeyStoreRequest::getKeystoreId() const
{
    return keystoreId_;
}

void DeleteKeyStoreRequest::setKeystoreId(const std::string& value)
{
    keystoreId_ = value;
    keystoreIdIsSet_ = true;
}

bool DeleteKeyStoreRequest::keystoreIdIsSet() const
{
    return keystoreIdIsSet_;
}

void DeleteKeyStoreRequest::unsetkeystoreId()
{
    keystoreIdIsSet_ = false;
}

}
}
}
}
}


