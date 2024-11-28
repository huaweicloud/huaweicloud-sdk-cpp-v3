

#include "huaweicloud/csms/v1/model/CreateAgencyRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {




CreateAgencyRequestBody::CreateAgencyRequestBody()
{
    secretType_ = "";
    secretTypeIsSet_ = false;
}

CreateAgencyRequestBody::~CreateAgencyRequestBody() = default;

void CreateAgencyRequestBody::validate()
{
}

web::json::value CreateAgencyRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(secretTypeIsSet_) {
        val[utility::conversions::to_string_t("secret_type")] = ModelBase::toJson(secretType_);
    }

    return val;
}
bool CreateAgencyRequestBody::fromJson(const web::json::value& val)
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


std::string CreateAgencyRequestBody::getSecretType() const
{
    return secretType_;
}

void CreateAgencyRequestBody::setSecretType(const std::string& value)
{
    secretType_ = value;
    secretTypeIsSet_ = true;
}

bool CreateAgencyRequestBody::secretTypeIsSet() const
{
    return secretTypeIsSet_;
}

void CreateAgencyRequestBody::unsetsecretType()
{
    secretTypeIsSet_ = false;
}

}
}
}
}
}


