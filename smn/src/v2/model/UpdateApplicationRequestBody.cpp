

#include "huaweicloud/smn/v2/model/UpdateApplicationRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




UpdateApplicationRequestBody::UpdateApplicationRequestBody()
{
    platformPrincipal_ = "";
    platformPrincipalIsSet_ = false;
    platformCredential_ = "";
    platformCredentialIsSet_ = false;
}

UpdateApplicationRequestBody::~UpdateApplicationRequestBody() = default;

void UpdateApplicationRequestBody::validate()
{
}

web::json::value UpdateApplicationRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(platformPrincipalIsSet_) {
        val[utility::conversions::to_string_t("platform_principal")] = ModelBase::toJson(platformPrincipal_);
    }
    if(platformCredentialIsSet_) {
        val[utility::conversions::to_string_t("platform_credential")] = ModelBase::toJson(platformCredential_);
    }

    return val;
}

bool UpdateApplicationRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("platform_principal"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("platform_principal"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPlatformPrincipal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("platform_credential"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("platform_credential"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPlatformCredential(refVal);
        }
    }
    return ok;
}

std::string UpdateApplicationRequestBody::getPlatformPrincipal() const
{
    return platformPrincipal_;
}

void UpdateApplicationRequestBody::setPlatformPrincipal(const std::string& value)
{
    platformPrincipal_ = value;
    platformPrincipalIsSet_ = true;
}

bool UpdateApplicationRequestBody::platformPrincipalIsSet() const
{
    return platformPrincipalIsSet_;
}

void UpdateApplicationRequestBody::unsetplatformPrincipal()
{
    platformPrincipalIsSet_ = false;
}

std::string UpdateApplicationRequestBody::getPlatformCredential() const
{
    return platformCredential_;
}

void UpdateApplicationRequestBody::setPlatformCredential(const std::string& value)
{
    platformCredential_ = value;
    platformCredentialIsSet_ = true;
}

bool UpdateApplicationRequestBody::platformCredentialIsSet() const
{
    return platformCredentialIsSet_;
}

void UpdateApplicationRequestBody::unsetplatformCredential()
{
    platformCredentialIsSet_ = false;
}

}
}
}
}
}


