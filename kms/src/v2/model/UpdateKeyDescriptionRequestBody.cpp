

#include "huaweicloud/kms/v2/model/UpdateKeyDescriptionRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




UpdateKeyDescriptionRequestBody::UpdateKeyDescriptionRequestBody()
{
    keyId_ = "";
    keyIdIsSet_ = false;
    keyDescription_ = "";
    keyDescriptionIsSet_ = false;
    sequence_ = "";
    sequenceIsSet_ = false;
}

UpdateKeyDescriptionRequestBody::~UpdateKeyDescriptionRequestBody() = default;

void UpdateKeyDescriptionRequestBody::validate()
{
}

web::json::value UpdateKeyDescriptionRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keyIdIsSet_) {
        val[utility::conversions::to_string_t("key_id")] = ModelBase::toJson(keyId_);
    }
    if(keyDescriptionIsSet_) {
        val[utility::conversions::to_string_t("key_description")] = ModelBase::toJson(keyDescription_);
    }
    if(sequenceIsSet_) {
        val[utility::conversions::to_string_t("sequence")] = ModelBase::toJson(sequence_);
    }

    return val;
}

bool UpdateKeyDescriptionRequestBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("key_description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key_description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeyDescription(refVal);
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

std::string UpdateKeyDescriptionRequestBody::getKeyId() const
{
    return keyId_;
}

void UpdateKeyDescriptionRequestBody::setKeyId(const std::string& value)
{
    keyId_ = value;
    keyIdIsSet_ = true;
}

bool UpdateKeyDescriptionRequestBody::keyIdIsSet() const
{
    return keyIdIsSet_;
}

void UpdateKeyDescriptionRequestBody::unsetkeyId()
{
    keyIdIsSet_ = false;
}

std::string UpdateKeyDescriptionRequestBody::getKeyDescription() const
{
    return keyDescription_;
}

void UpdateKeyDescriptionRequestBody::setKeyDescription(const std::string& value)
{
    keyDescription_ = value;
    keyDescriptionIsSet_ = true;
}

bool UpdateKeyDescriptionRequestBody::keyDescriptionIsSet() const
{
    return keyDescriptionIsSet_;
}

void UpdateKeyDescriptionRequestBody::unsetkeyDescription()
{
    keyDescriptionIsSet_ = false;
}

std::string UpdateKeyDescriptionRequestBody::getSequence() const
{
    return sequence_;
}

void UpdateKeyDescriptionRequestBody::setSequence(const std::string& value)
{
    sequence_ = value;
    sequenceIsSet_ = true;
}

bool UpdateKeyDescriptionRequestBody::sequenceIsSet() const
{
    return sequenceIsSet_;
}

void UpdateKeyDescriptionRequestBody::unsetsequence()
{
    sequenceIsSet_ = false;
}

}
}
}
}
}


