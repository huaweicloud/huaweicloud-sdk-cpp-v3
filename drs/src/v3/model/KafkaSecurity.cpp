

#include "huaweicloud/drs/v3/model/KafkaSecurity.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




KafkaSecurity::KafkaSecurity()
{
    type_ = "";
    typeIsSet_ = false;
    trustStoreKeyName_ = "";
    trustStoreKeyNameIsSet_ = false;
    trustStoreKey_ = "";
    trustStoreKeyIsSet_ = false;
    trustStorePassword_ = "";
    trustStorePasswordIsSet_ = false;
    endpointAlgorithm_ = "";
    endpointAlgorithmIsSet_ = false;
    saslMechanism_ = "";
    saslMechanismIsSet_ = false;
    delegationTokens_ = false;
    delegationTokensIsSet_ = false;
    enableKeyStore_ = false;
    enableKeyStoreIsSet_ = false;
    keyStoreKey_ = "";
    keyStoreKeyIsSet_ = false;
    keyStoreKeyName_ = "";
    keyStoreKeyNameIsSet_ = false;
    keyStorePassword_ = "";
    keyStorePasswordIsSet_ = false;
    setPrivateKeyPassword_ = false;
    setPrivateKeyPasswordIsSet_ = false;
    keyPassword_ = "";
    keyPasswordIsSet_ = false;
}

KafkaSecurity::~KafkaSecurity() = default;

void KafkaSecurity::validate()
{
}

web::json::value KafkaSecurity::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(trustStoreKeyNameIsSet_) {
        val[utility::conversions::to_string_t("trust_store_key_name")] = ModelBase::toJson(trustStoreKeyName_);
    }
    if(trustStoreKeyIsSet_) {
        val[utility::conversions::to_string_t("trust_store_key")] = ModelBase::toJson(trustStoreKey_);
    }
    if(trustStorePasswordIsSet_) {
        val[utility::conversions::to_string_t("trust_store_password")] = ModelBase::toJson(trustStorePassword_);
    }
    if(endpointAlgorithmIsSet_) {
        val[utility::conversions::to_string_t("endpoint_algorithm")] = ModelBase::toJson(endpointAlgorithm_);
    }
    if(saslMechanismIsSet_) {
        val[utility::conversions::to_string_t("sasl_mechanism")] = ModelBase::toJson(saslMechanism_);
    }
    if(delegationTokensIsSet_) {
        val[utility::conversions::to_string_t("delegation_tokens")] = ModelBase::toJson(delegationTokens_);
    }
    if(enableKeyStoreIsSet_) {
        val[utility::conversions::to_string_t("enable_key_store")] = ModelBase::toJson(enableKeyStore_);
    }
    if(keyStoreKeyIsSet_) {
        val[utility::conversions::to_string_t("key_store_key")] = ModelBase::toJson(keyStoreKey_);
    }
    if(keyStoreKeyNameIsSet_) {
        val[utility::conversions::to_string_t("key_store_key_name")] = ModelBase::toJson(keyStoreKeyName_);
    }
    if(keyStorePasswordIsSet_) {
        val[utility::conversions::to_string_t("key_store_password")] = ModelBase::toJson(keyStorePassword_);
    }
    if(setPrivateKeyPasswordIsSet_) {
        val[utility::conversions::to_string_t("set_private_key_password")] = ModelBase::toJson(setPrivateKeyPassword_);
    }
    if(keyPasswordIsSet_) {
        val[utility::conversions::to_string_t("key_password")] = ModelBase::toJson(keyPassword_);
    }

    return val;
}
bool KafkaSecurity::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("trust_store_key_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("trust_store_key_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTrustStoreKeyName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("trust_store_key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("trust_store_key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTrustStoreKey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("trust_store_password"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("trust_store_password"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTrustStorePassword(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("endpoint_algorithm"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("endpoint_algorithm"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndpointAlgorithm(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sasl_mechanism"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sasl_mechanism"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSaslMechanism(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("delegation_tokens"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("delegation_tokens"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDelegationTokens(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enable_key_store"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enable_key_store"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnableKeyStore(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("key_store_key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key_store_key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeyStoreKey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("key_store_key_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key_store_key_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeyStoreKeyName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("key_store_password"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key_store_password"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeyStorePassword(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("set_private_key_password"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("set_private_key_password"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSetPrivateKeyPassword(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("key_password"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key_password"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeyPassword(refVal);
        }
    }
    return ok;
}


std::string KafkaSecurity::getType() const
{
    return type_;
}

void KafkaSecurity::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool KafkaSecurity::typeIsSet() const
{
    return typeIsSet_;
}

void KafkaSecurity::unsettype()
{
    typeIsSet_ = false;
}

std::string KafkaSecurity::getTrustStoreKeyName() const
{
    return trustStoreKeyName_;
}

void KafkaSecurity::setTrustStoreKeyName(const std::string& value)
{
    trustStoreKeyName_ = value;
    trustStoreKeyNameIsSet_ = true;
}

bool KafkaSecurity::trustStoreKeyNameIsSet() const
{
    return trustStoreKeyNameIsSet_;
}

void KafkaSecurity::unsettrustStoreKeyName()
{
    trustStoreKeyNameIsSet_ = false;
}

std::string KafkaSecurity::getTrustStoreKey() const
{
    return trustStoreKey_;
}

void KafkaSecurity::setTrustStoreKey(const std::string& value)
{
    trustStoreKey_ = value;
    trustStoreKeyIsSet_ = true;
}

bool KafkaSecurity::trustStoreKeyIsSet() const
{
    return trustStoreKeyIsSet_;
}

void KafkaSecurity::unsettrustStoreKey()
{
    trustStoreKeyIsSet_ = false;
}

std::string KafkaSecurity::getTrustStorePassword() const
{
    return trustStorePassword_;
}

void KafkaSecurity::setTrustStorePassword(const std::string& value)
{
    trustStorePassword_ = value;
    trustStorePasswordIsSet_ = true;
}

bool KafkaSecurity::trustStorePasswordIsSet() const
{
    return trustStorePasswordIsSet_;
}

void KafkaSecurity::unsettrustStorePassword()
{
    trustStorePasswordIsSet_ = false;
}

std::string KafkaSecurity::getEndpointAlgorithm() const
{
    return endpointAlgorithm_;
}

void KafkaSecurity::setEndpointAlgorithm(const std::string& value)
{
    endpointAlgorithm_ = value;
    endpointAlgorithmIsSet_ = true;
}

bool KafkaSecurity::endpointAlgorithmIsSet() const
{
    return endpointAlgorithmIsSet_;
}

void KafkaSecurity::unsetendpointAlgorithm()
{
    endpointAlgorithmIsSet_ = false;
}

std::string KafkaSecurity::getSaslMechanism() const
{
    return saslMechanism_;
}

void KafkaSecurity::setSaslMechanism(const std::string& value)
{
    saslMechanism_ = value;
    saslMechanismIsSet_ = true;
}

bool KafkaSecurity::saslMechanismIsSet() const
{
    return saslMechanismIsSet_;
}

void KafkaSecurity::unsetsaslMechanism()
{
    saslMechanismIsSet_ = false;
}

bool KafkaSecurity::isDelegationTokens() const
{
    return delegationTokens_;
}

void KafkaSecurity::setDelegationTokens(bool value)
{
    delegationTokens_ = value;
    delegationTokensIsSet_ = true;
}

bool KafkaSecurity::delegationTokensIsSet() const
{
    return delegationTokensIsSet_;
}

void KafkaSecurity::unsetdelegationTokens()
{
    delegationTokensIsSet_ = false;
}

bool KafkaSecurity::isEnableKeyStore() const
{
    return enableKeyStore_;
}

void KafkaSecurity::setEnableKeyStore(bool value)
{
    enableKeyStore_ = value;
    enableKeyStoreIsSet_ = true;
}

bool KafkaSecurity::enableKeyStoreIsSet() const
{
    return enableKeyStoreIsSet_;
}

void KafkaSecurity::unsetenableKeyStore()
{
    enableKeyStoreIsSet_ = false;
}

std::string KafkaSecurity::getKeyStoreKey() const
{
    return keyStoreKey_;
}

void KafkaSecurity::setKeyStoreKey(const std::string& value)
{
    keyStoreKey_ = value;
    keyStoreKeyIsSet_ = true;
}

bool KafkaSecurity::keyStoreKeyIsSet() const
{
    return keyStoreKeyIsSet_;
}

void KafkaSecurity::unsetkeyStoreKey()
{
    keyStoreKeyIsSet_ = false;
}

std::string KafkaSecurity::getKeyStoreKeyName() const
{
    return keyStoreKeyName_;
}

void KafkaSecurity::setKeyStoreKeyName(const std::string& value)
{
    keyStoreKeyName_ = value;
    keyStoreKeyNameIsSet_ = true;
}

bool KafkaSecurity::keyStoreKeyNameIsSet() const
{
    return keyStoreKeyNameIsSet_;
}

void KafkaSecurity::unsetkeyStoreKeyName()
{
    keyStoreKeyNameIsSet_ = false;
}

std::string KafkaSecurity::getKeyStorePassword() const
{
    return keyStorePassword_;
}

void KafkaSecurity::setKeyStorePassword(const std::string& value)
{
    keyStorePassword_ = value;
    keyStorePasswordIsSet_ = true;
}

bool KafkaSecurity::keyStorePasswordIsSet() const
{
    return keyStorePasswordIsSet_;
}

void KafkaSecurity::unsetkeyStorePassword()
{
    keyStorePasswordIsSet_ = false;
}

bool KafkaSecurity::isSetPrivateKeyPassword() const
{
    return setPrivateKeyPassword_;
}

void KafkaSecurity::setSetPrivateKeyPassword(bool value)
{
    setPrivateKeyPassword_ = value;
    setPrivateKeyPasswordIsSet_ = true;
}

bool KafkaSecurity::setPrivateKeyPasswordIsSet() const
{
    return setPrivateKeyPasswordIsSet_;
}

void KafkaSecurity::unsetsetPrivateKeyPassword()
{
    setPrivateKeyPasswordIsSet_ = false;
}

std::string KafkaSecurity::getKeyPassword() const
{
    return keyPassword_;
}

void KafkaSecurity::setKeyPassword(const std::string& value)
{
    keyPassword_ = value;
    keyPasswordIsSet_ = true;
}

bool KafkaSecurity::keyPasswordIsSet() const
{
    return keyPasswordIsSet_;
}

void KafkaSecurity::unsetkeyPassword()
{
    keyPasswordIsSet_ = false;
}

}
}
}
}
}


