

#include "huaweicloud/gaussdbforopengauss/v3/model/ListKmsTdeKeyResponseBody_key_details.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListKmsTdeKeyResponseBody_key_details::ListKmsTdeKeyResponseBody_key_details()
{
    keyId_ = "";
    keyIdIsSet_ = false;
    defaultKeyFlag_ = "";
    defaultKeyFlagIsSet_ = false;
    keyAlias_ = "";
    keyAliasIsSet_ = false;
    keySpec_ = "";
    keySpecIsSet_ = false;
    domainId_ = "";
    domainIdIsSet_ = false;
    keyState_ = "";
    keyStateIsSet_ = false;
}

ListKmsTdeKeyResponseBody_key_details::~ListKmsTdeKeyResponseBody_key_details() = default;

void ListKmsTdeKeyResponseBody_key_details::validate()
{
}

web::json::value ListKmsTdeKeyResponseBody_key_details::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keyIdIsSet_) {
        val[utility::conversions::to_string_t("key_id")] = ModelBase::toJson(keyId_);
    }
    if(defaultKeyFlagIsSet_) {
        val[utility::conversions::to_string_t("default_key_flag")] = ModelBase::toJson(defaultKeyFlag_);
    }
    if(keyAliasIsSet_) {
        val[utility::conversions::to_string_t("key_alias")] = ModelBase::toJson(keyAlias_);
    }
    if(keySpecIsSet_) {
        val[utility::conversions::to_string_t("key_spec")] = ModelBase::toJson(keySpec_);
    }
    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }
    if(keyStateIsSet_) {
        val[utility::conversions::to_string_t("key_state")] = ModelBase::toJson(keyState_);
    }

    return val;
}
bool ListKmsTdeKeyResponseBody_key_details::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("key_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeyId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("default_key_flag"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("default_key_flag"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDefaultKeyFlag(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("key_alias"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key_alias"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeyAlias(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("key_spec"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key_spec"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeySpec(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("key_state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key_state"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeyState(refVal);
        }
    }
    return ok;
}


std::string ListKmsTdeKeyResponseBody_key_details::getKeyId() const
{
    return keyId_;
}

void ListKmsTdeKeyResponseBody_key_details::setKeyId(const std::string& value)
{
    keyId_ = value;
    keyIdIsSet_ = true;
}

bool ListKmsTdeKeyResponseBody_key_details::keyIdIsSet() const
{
    return keyIdIsSet_;
}

void ListKmsTdeKeyResponseBody_key_details::unsetkeyId()
{
    keyIdIsSet_ = false;
}

std::string ListKmsTdeKeyResponseBody_key_details::getDefaultKeyFlag() const
{
    return defaultKeyFlag_;
}

void ListKmsTdeKeyResponseBody_key_details::setDefaultKeyFlag(const std::string& value)
{
    defaultKeyFlag_ = value;
    defaultKeyFlagIsSet_ = true;
}

bool ListKmsTdeKeyResponseBody_key_details::defaultKeyFlagIsSet() const
{
    return defaultKeyFlagIsSet_;
}

void ListKmsTdeKeyResponseBody_key_details::unsetdefaultKeyFlag()
{
    defaultKeyFlagIsSet_ = false;
}

std::string ListKmsTdeKeyResponseBody_key_details::getKeyAlias() const
{
    return keyAlias_;
}

void ListKmsTdeKeyResponseBody_key_details::setKeyAlias(const std::string& value)
{
    keyAlias_ = value;
    keyAliasIsSet_ = true;
}

bool ListKmsTdeKeyResponseBody_key_details::keyAliasIsSet() const
{
    return keyAliasIsSet_;
}

void ListKmsTdeKeyResponseBody_key_details::unsetkeyAlias()
{
    keyAliasIsSet_ = false;
}

std::string ListKmsTdeKeyResponseBody_key_details::getKeySpec() const
{
    return keySpec_;
}

void ListKmsTdeKeyResponseBody_key_details::setKeySpec(const std::string& value)
{
    keySpec_ = value;
    keySpecIsSet_ = true;
}

bool ListKmsTdeKeyResponseBody_key_details::keySpecIsSet() const
{
    return keySpecIsSet_;
}

void ListKmsTdeKeyResponseBody_key_details::unsetkeySpec()
{
    keySpecIsSet_ = false;
}

std::string ListKmsTdeKeyResponseBody_key_details::getDomainId() const
{
    return domainId_;
}

void ListKmsTdeKeyResponseBody_key_details::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool ListKmsTdeKeyResponseBody_key_details::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void ListKmsTdeKeyResponseBody_key_details::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string ListKmsTdeKeyResponseBody_key_details::getKeyState() const
{
    return keyState_;
}

void ListKmsTdeKeyResponseBody_key_details::setKeyState(const std::string& value)
{
    keyState_ = value;
    keyStateIsSet_ = true;
}

bool ListKmsTdeKeyResponseBody_key_details::keyStateIsSet() const
{
    return keyStateIsSet_;
}

void ListKmsTdeKeyResponseBody_key_details::unsetkeyState()
{
    keyStateIsSet_ = false;
}

}
}
}
}
}


