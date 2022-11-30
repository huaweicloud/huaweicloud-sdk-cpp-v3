

#include "huaweicloud/csms/v1/model/RestoreSecretRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {




RestoreSecretRequest::RestoreSecretRequest()
{
    secretName_ = "";
    secretNameIsSet_ = false;
}

RestoreSecretRequest::~RestoreSecretRequest() = default;

void RestoreSecretRequest::validate()
{
}

web::json::value RestoreSecretRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(secretNameIsSet_) {
        val[utility::conversions::to_string_t("secret_name")] = ModelBase::toJson(secretName_);
    }

    return val;
}

bool RestoreSecretRequest::fromJson(const web::json::value& val)
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


std::string RestoreSecretRequest::getSecretName() const
{
    return secretName_;
}

void RestoreSecretRequest::setSecretName(const std::string& value)
{
    secretName_ = value;
    secretNameIsSet_ = true;
}

bool RestoreSecretRequest::secretNameIsSet() const
{
    return secretNameIsSet_;
}

void RestoreSecretRequest::unsetsecretName()
{
    secretNameIsSet_ = false;
}

}
}
}
}
}


