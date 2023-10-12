

#include "huaweicloud/csms/v1/model/ShowSecretRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {




ShowSecretRequest::ShowSecretRequest()
{
    secretName_ = "";
    secretNameIsSet_ = false;
}

ShowSecretRequest::~ShowSecretRequest() = default;

void ShowSecretRequest::validate()
{
}

web::json::value ShowSecretRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(secretNameIsSet_) {
        val[utility::conversions::to_string_t("secret_name")] = ModelBase::toJson(secretName_);
    }

    return val;
}
bool ShowSecretRequest::fromJson(const web::json::value& val)
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


std::string ShowSecretRequest::getSecretName() const
{
    return secretName_;
}

void ShowSecretRequest::setSecretName(const std::string& value)
{
    secretName_ = value;
    secretNameIsSet_ = true;
}

bool ShowSecretRequest::secretNameIsSet() const
{
    return secretNameIsSet_;
}

void ShowSecretRequest::unsetsecretName()
{
    secretNameIsSet_ = false;
}

}
}
}
}
}


