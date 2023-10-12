

#include "huaweicloud/kms/v2/model/KeyAliasInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




KeyAliasInfo::KeyAliasInfo()
{
    keyId_ = "";
    keyIdIsSet_ = false;
    keyAlias_ = "";
    keyAliasIsSet_ = false;
}

KeyAliasInfo::~KeyAliasInfo() = default;

void KeyAliasInfo::validate()
{
}

web::json::value KeyAliasInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keyIdIsSet_) {
        val[utility::conversions::to_string_t("key_id")] = ModelBase::toJson(keyId_);
    }
    if(keyAliasIsSet_) {
        val[utility::conversions::to_string_t("key_alias")] = ModelBase::toJson(keyAlias_);
    }

    return val;
}
bool KeyAliasInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("key_alias"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key_alias"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeyAlias(refVal);
        }
    }
    return ok;
}


std::string KeyAliasInfo::getKeyId() const
{
    return keyId_;
}

void KeyAliasInfo::setKeyId(const std::string& value)
{
    keyId_ = value;
    keyIdIsSet_ = true;
}

bool KeyAliasInfo::keyIdIsSet() const
{
    return keyIdIsSet_;
}

void KeyAliasInfo::unsetkeyId()
{
    keyIdIsSet_ = false;
}

std::string KeyAliasInfo::getKeyAlias() const
{
    return keyAlias_;
}

void KeyAliasInfo::setKeyAlias(const std::string& value)
{
    keyAlias_ = value;
    keyAliasIsSet_ = true;
}

bool KeyAliasInfo::keyAliasIsSet() const
{
    return keyAliasIsSet_;
}

void KeyAliasInfo::unsetkeyAlias()
{
    keyAliasIsSet_ = false;
}

}
}
}
}
}


