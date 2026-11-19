

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
    clusterId_ = "";
    clusterIdIsSet_ = false;
    keystoreType_ = "";
    keystoreTypeIsSet_ = false;
    proxyUriEndpoint_ = "";
    proxyUriEndpointIsSet_ = false;
    proxyUriPath_ = "";
    proxyUriPathIsSet_ = false;
    proxyAccessKeyId_ = "";
    proxyAccessKeyIdIsSet_ = false;
    proxySecretAccessKey_ = "";
    proxySecretAccessKeyIsSet_ = false;
    proxyVpcEndpointServiceName_ = "";
    proxyVpcEndpointServiceNameIsSet_ = false;
    proxyVpcEndpointServiceOwner_ = "";
    proxyVpcEndpointServiceOwnerIsSet_ = false;
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
    if(clusterIdIsSet_) {
        val[utility::conversions::to_string_t("cluster_id")] = ModelBase::toJson(clusterId_);
    }
    if(keystoreTypeIsSet_) {
        val[utility::conversions::to_string_t("keystore_type")] = ModelBase::toJson(keystoreType_);
    }
    if(proxyUriEndpointIsSet_) {
        val[utility::conversions::to_string_t("proxy_uri_endpoint")] = ModelBase::toJson(proxyUriEndpoint_);
    }
    if(proxyUriPathIsSet_) {
        val[utility::conversions::to_string_t("proxy_uri_path")] = ModelBase::toJson(proxyUriPath_);
    }
    if(proxyAccessKeyIdIsSet_) {
        val[utility::conversions::to_string_t("proxy_access_key_id")] = ModelBase::toJson(proxyAccessKeyId_);
    }
    if(proxySecretAccessKeyIsSet_) {
        val[utility::conversions::to_string_t("proxy_secret_access_key")] = ModelBase::toJson(proxySecretAccessKey_);
    }
    if(proxyVpcEndpointServiceNameIsSet_) {
        val[utility::conversions::to_string_t("proxy_vpc_endpoint_service_name")] = ModelBase::toJson(proxyVpcEndpointServiceName_);
    }
    if(proxyVpcEndpointServiceOwnerIsSet_) {
        val[utility::conversions::to_string_t("proxy_vpc_endpoint_service_owner")] = ModelBase::toJson(proxyVpcEndpointServiceOwner_);
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
    if(val.has_field(utility::conversions::to_string_t("cluster_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cluster_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClusterId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("keystore_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("keystore_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeystoreType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("proxy_uri_endpoint"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("proxy_uri_endpoint"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProxyUriEndpoint(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("proxy_uri_path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("proxy_uri_path"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProxyUriPath(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("proxy_access_key_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("proxy_access_key_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProxyAccessKeyId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("proxy_secret_access_key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("proxy_secret_access_key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProxySecretAccessKey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("proxy_vpc_endpoint_service_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("proxy_vpc_endpoint_service_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProxyVpcEndpointServiceName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("proxy_vpc_endpoint_service_owner"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("proxy_vpc_endpoint_service_owner"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProxyVpcEndpointServiceOwner(refVal);
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

std::string CreateKeyStoreRequestBody::getClusterId() const
{
    return clusterId_;
}

void CreateKeyStoreRequestBody::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool CreateKeyStoreRequestBody::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void CreateKeyStoreRequestBody::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

std::string CreateKeyStoreRequestBody::getKeystoreType() const
{
    return keystoreType_;
}

void CreateKeyStoreRequestBody::setKeystoreType(const std::string& value)
{
    keystoreType_ = value;
    keystoreTypeIsSet_ = true;
}

bool CreateKeyStoreRequestBody::keystoreTypeIsSet() const
{
    return keystoreTypeIsSet_;
}

void CreateKeyStoreRequestBody::unsetkeystoreType()
{
    keystoreTypeIsSet_ = false;
}

std::string CreateKeyStoreRequestBody::getProxyUriEndpoint() const
{
    return proxyUriEndpoint_;
}

void CreateKeyStoreRequestBody::setProxyUriEndpoint(const std::string& value)
{
    proxyUriEndpoint_ = value;
    proxyUriEndpointIsSet_ = true;
}

bool CreateKeyStoreRequestBody::proxyUriEndpointIsSet() const
{
    return proxyUriEndpointIsSet_;
}

void CreateKeyStoreRequestBody::unsetproxyUriEndpoint()
{
    proxyUriEndpointIsSet_ = false;
}

std::string CreateKeyStoreRequestBody::getProxyUriPath() const
{
    return proxyUriPath_;
}

void CreateKeyStoreRequestBody::setProxyUriPath(const std::string& value)
{
    proxyUriPath_ = value;
    proxyUriPathIsSet_ = true;
}

bool CreateKeyStoreRequestBody::proxyUriPathIsSet() const
{
    return proxyUriPathIsSet_;
}

void CreateKeyStoreRequestBody::unsetproxyUriPath()
{
    proxyUriPathIsSet_ = false;
}

std::string CreateKeyStoreRequestBody::getProxyAccessKeyId() const
{
    return proxyAccessKeyId_;
}

void CreateKeyStoreRequestBody::setProxyAccessKeyId(const std::string& value)
{
    proxyAccessKeyId_ = value;
    proxyAccessKeyIdIsSet_ = true;
}

bool CreateKeyStoreRequestBody::proxyAccessKeyIdIsSet() const
{
    return proxyAccessKeyIdIsSet_;
}

void CreateKeyStoreRequestBody::unsetproxyAccessKeyId()
{
    proxyAccessKeyIdIsSet_ = false;
}

std::string CreateKeyStoreRequestBody::getProxySecretAccessKey() const
{
    return proxySecretAccessKey_;
}

void CreateKeyStoreRequestBody::setProxySecretAccessKey(const std::string& value)
{
    proxySecretAccessKey_ = value;
    proxySecretAccessKeyIsSet_ = true;
}

bool CreateKeyStoreRequestBody::proxySecretAccessKeyIsSet() const
{
    return proxySecretAccessKeyIsSet_;
}

void CreateKeyStoreRequestBody::unsetproxySecretAccessKey()
{
    proxySecretAccessKeyIsSet_ = false;
}

std::string CreateKeyStoreRequestBody::getProxyVpcEndpointServiceName() const
{
    return proxyVpcEndpointServiceName_;
}

void CreateKeyStoreRequestBody::setProxyVpcEndpointServiceName(const std::string& value)
{
    proxyVpcEndpointServiceName_ = value;
    proxyVpcEndpointServiceNameIsSet_ = true;
}

bool CreateKeyStoreRequestBody::proxyVpcEndpointServiceNameIsSet() const
{
    return proxyVpcEndpointServiceNameIsSet_;
}

void CreateKeyStoreRequestBody::unsetproxyVpcEndpointServiceName()
{
    proxyVpcEndpointServiceNameIsSet_ = false;
}

std::string CreateKeyStoreRequestBody::getProxyVpcEndpointServiceOwner() const
{
    return proxyVpcEndpointServiceOwner_;
}

void CreateKeyStoreRequestBody::setProxyVpcEndpointServiceOwner(const std::string& value)
{
    proxyVpcEndpointServiceOwner_ = value;
    proxyVpcEndpointServiceOwnerIsSet_ = true;
}

bool CreateKeyStoreRequestBody::proxyVpcEndpointServiceOwnerIsSet() const
{
    return proxyVpcEndpointServiceOwnerIsSet_;
}

void CreateKeyStoreRequestBody::unsetproxyVpcEndpointServiceOwner()
{
    proxyVpcEndpointServiceOwnerIsSet_ = false;
}

}
}
}
}
}


