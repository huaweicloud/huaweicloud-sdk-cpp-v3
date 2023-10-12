

#include "huaweicloud/kms/v2/model/UpdateKeyAliasRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




UpdateKeyAliasRequestBody::UpdateKeyAliasRequestBody()
{
    keyId_ = "";
    keyIdIsSet_ = false;
    keyAlias_ = "";
    keyAliasIsSet_ = false;
    sequence_ = "";
    sequenceIsSet_ = false;
}

UpdateKeyAliasRequestBody::~UpdateKeyAliasRequestBody() = default;

void UpdateKeyAliasRequestBody::validate()
{
}

web::json::value UpdateKeyAliasRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keyIdIsSet_) {
        val[utility::conversions::to_string_t("key_id")] = ModelBase::toJson(keyId_);
    }
    if(keyAliasIsSet_) {
        val[utility::conversions::to_string_t("key_alias")] = ModelBase::toJson(keyAlias_);
    }
    if(sequenceIsSet_) {
        val[utility::conversions::to_string_t("sequence")] = ModelBase::toJson(sequence_);
    }

    return val;
}
bool UpdateKeyAliasRequestBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("sequence"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sequence"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSequence(refVal);
        }
    }
    return ok;
}


std::string UpdateKeyAliasRequestBody::getKeyId() const
{
    return keyId_;
}

void UpdateKeyAliasRequestBody::setKeyId(const std::string& value)
{
    keyId_ = value;
    keyIdIsSet_ = true;
}

bool UpdateKeyAliasRequestBody::keyIdIsSet() const
{
    return keyIdIsSet_;
}

void UpdateKeyAliasRequestBody::unsetkeyId()
{
    keyIdIsSet_ = false;
}

std::string UpdateKeyAliasRequestBody::getKeyAlias() const
{
    return keyAlias_;
}

void UpdateKeyAliasRequestBody::setKeyAlias(const std::string& value)
{
    keyAlias_ = value;
    keyAliasIsSet_ = true;
}

bool UpdateKeyAliasRequestBody::keyAliasIsSet() const
{
    return keyAliasIsSet_;
}

void UpdateKeyAliasRequestBody::unsetkeyAlias()
{
    keyAliasIsSet_ = false;
}

std::string UpdateKeyAliasRequestBody::getSequence() const
{
    return sequence_;
}

void UpdateKeyAliasRequestBody::setSequence(const std::string& value)
{
    sequence_ = value;
    sequenceIsSet_ = true;
}

bool UpdateKeyAliasRequestBody::sequenceIsSet() const
{
    return sequenceIsSet_;
}

void UpdateKeyAliasRequestBody::unsetsequence()
{
    sequenceIsSet_ = false;
}

}
}
}
}
}


