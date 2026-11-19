

#include "huaweicloud/kms/v2/model/UpdateKeyStoreRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




UpdateKeyStoreRequest::UpdateKeyStoreRequest()
{
    keystoreId_ = "";
    keystoreIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateKeyStoreRequest::~UpdateKeyStoreRequest() = default;

void UpdateKeyStoreRequest::validate()
{
}

web::json::value UpdateKeyStoreRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keystoreIdIsSet_) {
        val[utility::conversions::to_string_t("keystore_id")] = ModelBase::toJson(keystoreId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateKeyStoreRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateKeyStoreRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateKeyStoreRequest::getKeystoreId() const
{
    return keystoreId_;
}

void UpdateKeyStoreRequest::setKeystoreId(const std::string& value)
{
    keystoreId_ = value;
    keystoreIdIsSet_ = true;
}

bool UpdateKeyStoreRequest::keystoreIdIsSet() const
{
    return keystoreIdIsSet_;
}

void UpdateKeyStoreRequest::unsetkeystoreId()
{
    keystoreIdIsSet_ = false;
}

UpdateKeyStoreRequestBody UpdateKeyStoreRequest::getBody() const
{
    return body_;
}

void UpdateKeyStoreRequest::setBody(const UpdateKeyStoreRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateKeyStoreRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateKeyStoreRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


