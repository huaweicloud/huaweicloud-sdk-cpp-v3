

#include "huaweicloud/csms/v1/model/RotateSecretRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {




RotateSecretRequest::RotateSecretRequest()
{
    secretName_ = "";
    secretNameIsSet_ = false;
}

RotateSecretRequest::~RotateSecretRequest() = default;

void RotateSecretRequest::validate()
{
}

web::json::value RotateSecretRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(secretNameIsSet_) {
        val[utility::conversions::to_string_t("secret_name")] = ModelBase::toJson(secretName_);
    }

    return val;
}
bool RotateSecretRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("secret_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("secret_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecretName(refVal);
        }
    }
    return ok;
}


std::string RotateSecretRequest::getSecretName() const
{
    return secretName_;
}

void RotateSecretRequest::setSecretName(const std::string& value)
{
    secretName_ = value;
    secretNameIsSet_ = true;
}

bool RotateSecretRequest::secretNameIsSet() const
{
    return secretNameIsSet_;
}

void RotateSecretRequest::unsetsecretName()
{
    secretNameIsSet_ = false;
}

}
}
}
}
}


