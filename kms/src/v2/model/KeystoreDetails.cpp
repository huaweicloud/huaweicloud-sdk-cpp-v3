

#include "huaweicloud/kms/v2/model/KeystoreDetails.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




KeystoreDetails::KeystoreDetails()
{
    keystoreId_ = "";
    keystoreIdIsSet_ = false;
    domainId_ = "";
    domainIdIsSet_ = false;
    keystoreAlias_ = "";
    keystoreAliasIsSet_ = false;
    keystoreType_ = "";
    keystoreTypeIsSet_ = false;
    hsmClusterId_ = "";
    hsmClusterIdIsSet_ = false;
    clusterId_ = "";
    clusterIdIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
}

KeystoreDetails::~KeystoreDetails() = default;

void KeystoreDetails::validate()
{
}

web::json::value KeystoreDetails::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keystoreIdIsSet_) {
        val[utility::conversions::to_string_t("keystore_id")] = ModelBase::toJson(keystoreId_);
    }
    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }
    if(keystoreAliasIsSet_) {
        val[utility::conversions::to_string_t("keystore_alias")] = ModelBase::toJson(keystoreAlias_);
    }
    if(keystoreTypeIsSet_) {
        val[utility::conversions::to_string_t("keystore_type")] = ModelBase::toJson(keystoreType_);
    }
    if(hsmClusterIdIsSet_) {
        val[utility::conversions::to_string_t("hsm_cluster_id")] = ModelBase::toJson(hsmClusterId_);
    }
    if(clusterIdIsSet_) {
        val[utility::conversions::to_string_t("cluster_id")] = ModelBase::toJson(clusterId_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }

    return val;
}
bool KeystoreDetails::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("keystore_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("keystore_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeystoreId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("domain_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("keystore_alias"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("keystore_alias"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeystoreAlias(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("hsm_cluster_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hsm_cluster_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHsmClusterId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    return ok;
}


std::string KeystoreDetails::getKeystoreId() const
{
    return keystoreId_;
}

void KeystoreDetails::setKeystoreId(const std::string& value)
{
    keystoreId_ = value;
    keystoreIdIsSet_ = true;
}

bool KeystoreDetails::keystoreIdIsSet() const
{
    return keystoreIdIsSet_;
}

void KeystoreDetails::unsetkeystoreId()
{
    keystoreIdIsSet_ = false;
}

std::string KeystoreDetails::getDomainId() const
{
    return domainId_;
}

void KeystoreDetails::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool KeystoreDetails::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void KeystoreDetails::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string KeystoreDetails::getKeystoreAlias() const
{
    return keystoreAlias_;
}

void KeystoreDetails::setKeystoreAlias(const std::string& value)
{
    keystoreAlias_ = value;
    keystoreAliasIsSet_ = true;
}

bool KeystoreDetails::keystoreAliasIsSet() const
{
    return keystoreAliasIsSet_;
}

void KeystoreDetails::unsetkeystoreAlias()
{
    keystoreAliasIsSet_ = false;
}

std::string KeystoreDetails::getKeystoreType() const
{
    return keystoreType_;
}

void KeystoreDetails::setKeystoreType(const std::string& value)
{
    keystoreType_ = value;
    keystoreTypeIsSet_ = true;
}

bool KeystoreDetails::keystoreTypeIsSet() const
{
    return keystoreTypeIsSet_;
}

void KeystoreDetails::unsetkeystoreType()
{
    keystoreTypeIsSet_ = false;
}

std::string KeystoreDetails::getHsmClusterId() const
{
    return hsmClusterId_;
}

void KeystoreDetails::setHsmClusterId(const std::string& value)
{
    hsmClusterId_ = value;
    hsmClusterIdIsSet_ = true;
}

bool KeystoreDetails::hsmClusterIdIsSet() const
{
    return hsmClusterIdIsSet_;
}

void KeystoreDetails::unsethsmClusterId()
{
    hsmClusterIdIsSet_ = false;
}

std::string KeystoreDetails::getClusterId() const
{
    return clusterId_;
}

void KeystoreDetails::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool KeystoreDetails::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void KeystoreDetails::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

std::string KeystoreDetails::getCreateTime() const
{
    return createTime_;
}

void KeystoreDetails::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool KeystoreDetails::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void KeystoreDetails::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

}
}
}
}
}


