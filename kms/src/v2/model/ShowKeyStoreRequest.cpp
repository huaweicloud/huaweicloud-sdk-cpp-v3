

#include "huaweicloud/kms/v2/model/ShowKeyStoreRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




ShowKeyStoreRequest::ShowKeyStoreRequest()
{
    keystoreId_ = "";
    keystoreIdIsSet_ = false;
}

ShowKeyStoreRequest::~ShowKeyStoreRequest() = default;

void ShowKeyStoreRequest::validate()
{
}

web::json::value ShowKeyStoreRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keystoreIdIsSet_) {
        val[utility::conversions::to_string_t("keystore_id")] = ModelBase::toJson(keystoreId_);
    }

    return val;
}
bool ShowKeyStoreRequest::fromJson(const web::json::value& val)
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


std::string ShowKeyStoreRequest::getKeystoreId() const
{
    return keystoreId_;
}

void ShowKeyStoreRequest::setKeystoreId(const std::string& value)
{
    keystoreId_ = value;
    keystoreIdIsSet_ = true;
}

bool ShowKeyStoreRequest::keystoreIdIsSet() const
{
    return keystoreIdIsSet_;
}

void ShowKeyStoreRequest::unsetkeystoreId()
{
    keystoreIdIsSet_ = false;
}

}
}
}
}
}


