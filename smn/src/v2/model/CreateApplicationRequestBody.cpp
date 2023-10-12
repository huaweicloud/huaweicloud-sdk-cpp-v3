

#include "huaweicloud/smn/v2/model/CreateApplicationRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




CreateApplicationRequestBody::CreateApplicationRequestBody()
{
    name_ = "";
    nameIsSet_ = false;
    platform_ = "";
    platformIsSet_ = false;
    platformPrincipal_ = "";
    platformPrincipalIsSet_ = false;
    platformCredential_ = "";
    platformCredentialIsSet_ = false;
}

CreateApplicationRequestBody::~CreateApplicationRequestBody() = default;

void CreateApplicationRequestBody::validate()
{
}

web::json::value CreateApplicationRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(platformIsSet_) {
        val[utility::conversions::to_string_t("platform")] = ModelBase::toJson(platform_);
    }
    if(platformPrincipalIsSet_) {
        val[utility::conversions::to_string_t("platform_principal")] = ModelBase::toJson(platformPrincipal_);
    }
    if(platformCredentialIsSet_) {
        val[utility::conversions::to_string_t("platform_credential")] = ModelBase::toJson(platformCredential_);
    }

    return val;
}
bool CreateApplicationRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("platform"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("platform"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPlatform(refVal);
        }
    }
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


std::string CreateApplicationRequestBody::getName() const
{
    return name_;
}

void CreateApplicationRequestBody::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateApplicationRequestBody::nameIsSet() const
{
    return nameIsSet_;
}

void CreateApplicationRequestBody::unsetname()
{
    nameIsSet_ = false;
}

std::string CreateApplicationRequestBody::getPlatform() const
{
    return platform_;
}

void CreateApplicationRequestBody::setPlatform(const std::string& value)
{
    platform_ = value;
    platformIsSet_ = true;
}

bool CreateApplicationRequestBody::platformIsSet() const
{
    return platformIsSet_;
}

void CreateApplicationRequestBody::unsetplatform()
{
    platformIsSet_ = false;
}

std::string CreateApplicationRequestBody::getPlatformPrincipal() const
{
    return platformPrincipal_;
}

void CreateApplicationRequestBody::setPlatformPrincipal(const std::string& value)
{
    platformPrincipal_ = value;
    platformPrincipalIsSet_ = true;
}

bool CreateApplicationRequestBody::platformPrincipalIsSet() const
{
    return platformPrincipalIsSet_;
}

void CreateApplicationRequestBody::unsetplatformPrincipal()
{
    platformPrincipalIsSet_ = false;
}

std::string CreateApplicationRequestBody::getPlatformCredential() const
{
    return platformCredential_;
}

void CreateApplicationRequestBody::setPlatformCredential(const std::string& value)
{
    platformCredential_ = value;
    platformCredentialIsSet_ = true;
}

bool CreateApplicationRequestBody::platformCredentialIsSet() const
{
    return platformCredentialIsSet_;
}

void CreateApplicationRequestBody::unsetplatformCredential()
{
    platformCredentialIsSet_ = false;
}

}
}
}
}
}


