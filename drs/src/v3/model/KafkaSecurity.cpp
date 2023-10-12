

#include "huaweicloud/drs/v3/model/KafkaSecurity.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




KafkaSecurity::KafkaSecurity()
{
    trustStoreKeyName_ = "";
    trustStoreKeyNameIsSet_ = false;
    trustStoreKey_ = "";
    trustStoreKeyIsSet_ = false;
    trustStorePassword_ = "";
    trustStorePasswordIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
}

KafkaSecurity::~KafkaSecurity() = default;

void KafkaSecurity::validate()
{
}

web::json::value KafkaSecurity::toJson() const
{
    web::json::value val = web::json::value::object();

    if(trustStoreKeyNameIsSet_) {
        val[utility::conversions::to_string_t("trust_store_key_name")] = ModelBase::toJson(trustStoreKeyName_);
    }
    if(trustStoreKeyIsSet_) {
        val[utility::conversions::to_string_t("trust_store_key")] = ModelBase::toJson(trustStoreKey_);
    }
    if(trustStorePasswordIsSet_) {
        val[utility::conversions::to_string_t("trust_store_password")] = ModelBase::toJson(trustStorePassword_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }

    return val;
}
bool KafkaSecurity::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    return ok;
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

}
}
}
}
}


