

#include "huaweicloud/kms/v2/model/CreateKeyStoreRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




CreateKeyStoreRequestBody::CreateKeyStoreRequestBody()
{
    keystoreAlias_ = "";
    keystoreAliasIsSet_ = false;
    hsmClusterId_ = "";
    hsmClusterIdIsSet_ = false;
    hsmCaCert_ = "";
    hsmCaCertIsSet_ = false;
}

CreateKeyStoreRequestBody::~CreateKeyStoreRequestBody() = default;

void CreateKeyStoreRequestBody::validate()
{
}

web::json::value CreateKeyStoreRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keystoreAliasIsSet_) {
        val[utility::conversions::to_string_t("keystore_alias")] = ModelBase::toJson(keystoreAlias_);
    }
    if(hsmClusterIdIsSet_) {
        val[utility::conversions::to_string_t("hsm_cluster_id")] = ModelBase::toJson(hsmClusterId_);
    }
    if(hsmCaCertIsSet_) {
        val[utility::conversions::to_string_t("hsm_ca_cert")] = ModelBase::toJson(hsmCaCert_);
    }

    return val;
}

bool CreateKeyStoreRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("keystore_alias"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("keystore_alias"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeystoreAlias(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("hsm_cluster_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hsm_cluster_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHsmClusterId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("hsm_ca_cert"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hsm_ca_cert"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHsmCaCert(refVal);
        }
    }
    return ok;
}

std::string CreateKeyStoreRequestBody::getKeystoreAlias() const
{
    return keystoreAlias_;
}

void CreateKeyStoreRequestBody::setKeystoreAlias(const std::string& value)
{
    keystoreAlias_ = value;
    keystoreAliasIsSet_ = true;
}

bool CreateKeyStoreRequestBody::keystoreAliasIsSet() const
{
    return keystoreAliasIsSet_;
}

void CreateKeyStoreRequestBody::unsetkeystoreAlias()
{
    keystoreAliasIsSet_ = false;
}

std::string CreateKeyStoreRequestBody::getHsmClusterId() const
{
    return hsmClusterId_;
}

void CreateKeyStoreRequestBody::setHsmClusterId(const std::string& value)
{
    hsmClusterId_ = value;
    hsmClusterIdIsSet_ = true;
}

bool CreateKeyStoreRequestBody::hsmClusterIdIsSet() const
{
    return hsmClusterIdIsSet_;
}

void CreateKeyStoreRequestBody::unsethsmClusterId()
{
    hsmClusterIdIsSet_ = false;
}

std::string CreateKeyStoreRequestBody::getHsmCaCert() const
{
    return hsmCaCert_;
}

void CreateKeyStoreRequestBody::setHsmCaCert(const std::string& value)
{
    hsmCaCert_ = value;
    hsmCaCertIsSet_ = true;
}

bool CreateKeyStoreRequestBody::hsmCaCertIsSet() const
{
    return hsmCaCertIsSet_;
}

void CreateKeyStoreRequestBody::unsethsmCaCert()
{
    hsmCaCertIsSet_ = false;
}

}
}
}
}
}


