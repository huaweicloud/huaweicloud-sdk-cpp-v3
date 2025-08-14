

#include "huaweicloud/identitycenterstore/v1/model/GetSpConfigurationForDirectoryResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {




GetSpConfigurationForDirectoryResponse::GetSpConfigurationForDirectoryResponse()
{
    spOidcConfigIsSet_ = false;
    spSamlConfigIsSet_ = false;
}

GetSpConfigurationForDirectoryResponse::~GetSpConfigurationForDirectoryResponse() = default;

void GetSpConfigurationForDirectoryResponse::validate()
{
}

web::json::value GetSpConfigurationForDirectoryResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(spOidcConfigIsSet_) {
        val[utility::conversions::to_string_t("sp_oidc_config")] = ModelBase::toJson(spOidcConfig_);
    }
    if(spSamlConfigIsSet_) {
        val[utility::conversions::to_string_t("sp_saml_config")] = ModelBase::toJson(spSamlConfig_);
    }

    return val;
}
bool GetSpConfigurationForDirectoryResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("sp_oidc_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sp_oidc_config"));
        if(!fieldValue.is_null())
        {
            SPOIDCConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpOidcConfig(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sp_saml_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sp_saml_config"));
        if(!fieldValue.is_null())
        {
            SPSAMLConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpSamlConfig(refVal);
        }
    }
    return ok;
}


SPOIDCConfig GetSpConfigurationForDirectoryResponse::getSpOidcConfig() const
{
    return spOidcConfig_;
}

void GetSpConfigurationForDirectoryResponse::setSpOidcConfig(const SPOIDCConfig& value)
{
    spOidcConfig_ = value;
    spOidcConfigIsSet_ = true;
}

bool GetSpConfigurationForDirectoryResponse::spOidcConfigIsSet() const
{
    return spOidcConfigIsSet_;
}

void GetSpConfigurationForDirectoryResponse::unsetspOidcConfig()
{
    spOidcConfigIsSet_ = false;
}

SPSAMLConfig GetSpConfigurationForDirectoryResponse::getSpSamlConfig() const
{
    return spSamlConfig_;
}

void GetSpConfigurationForDirectoryResponse::setSpSamlConfig(const SPSAMLConfig& value)
{
    spSamlConfig_ = value;
    spSamlConfigIsSet_ = true;
}

bool GetSpConfigurationForDirectoryResponse::spSamlConfigIsSet() const
{
    return spSamlConfigIsSet_;
}

void GetSpConfigurationForDirectoryResponse::unsetspSamlConfig()
{
    spSamlConfigIsSet_ = false;
}

}
}
}
}
}


