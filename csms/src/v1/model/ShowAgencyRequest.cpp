

#include "huaweicloud/csms/v1/model/ShowAgencyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {




ShowAgencyRequest::ShowAgencyRequest()
{
    secretType_ = "";
    secretTypeIsSet_ = false;
}

ShowAgencyRequest::~ShowAgencyRequest() = default;

void ShowAgencyRequest::validate()
{
}

web::json::value ShowAgencyRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(secretTypeIsSet_) {
        val[utility::conversions::to_string_t("secret_type")] = ModelBase::toJson(secretType_);
    }

    return val;
}
bool ShowAgencyRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("secret_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("secret_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecretType(refVal);
        }
    }
    return ok;
}


std::string ShowAgencyRequest::getSecretType() const
{
    return secretType_;
}

void ShowAgencyRequest::setSecretType(const std::string& value)
{
    secretType_ = value;
    secretTypeIsSet_ = true;
}

bool ShowAgencyRequest::secretTypeIsSet() const
{
    return secretTypeIsSet_;
}

void ShowAgencyRequest::unsetsecretType()
{
    secretTypeIsSet_ = false;
}

}
}
}
}
}


