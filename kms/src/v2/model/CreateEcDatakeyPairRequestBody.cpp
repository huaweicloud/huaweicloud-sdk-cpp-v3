

#include "huaweicloud/kms/v2/model/CreateEcDatakeyPairRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




CreateEcDatakeyPairRequestBody::CreateEcDatakeyPairRequestBody()
{
    keyId_ = "";
    keyIdIsSet_ = false;
    keySpec_ = "";
    keySpecIsSet_ = false;
    withPlainText_ = false;
    withPlainTextIsSet_ = false;
    additionalAuthenticatedData_ = "";
    additionalAuthenticatedDataIsSet_ = false;
    sequence_ = "";
    sequenceIsSet_ = false;
    pin_ = "";
    pinIsSet_ = false;
    pinType_ = "";
    pinTypeIsSet_ = false;
}

CreateEcDatakeyPairRequestBody::~CreateEcDatakeyPairRequestBody() = default;

void CreateEcDatakeyPairRequestBody::validate()
{
}

web::json::value CreateEcDatakeyPairRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keyIdIsSet_) {
        val[utility::conversions::to_string_t("key_id")] = ModelBase::toJson(keyId_);
    }
    if(keySpecIsSet_) {
        val[utility::conversions::to_string_t("key_spec")] = ModelBase::toJson(keySpec_);
    }
    if(withPlainTextIsSet_) {
        val[utility::conversions::to_string_t("with_plain_text")] = ModelBase::toJson(withPlainText_);
    }
    if(additionalAuthenticatedDataIsSet_) {
        val[utility::conversions::to_string_t("additional_authenticated_data")] = ModelBase::toJson(additionalAuthenticatedData_);
    }
    if(sequenceIsSet_) {
        val[utility::conversions::to_string_t("sequence")] = ModelBase::toJson(sequence_);
    }
    if(pinIsSet_) {
        val[utility::conversions::to_string_t("pin")] = ModelBase::toJson(pin_);
    }
    if(pinTypeIsSet_) {
        val[utility::conversions::to_string_t("pin_type")] = ModelBase::toJson(pinType_);
    }

    return val;
}
bool CreateEcDatakeyPairRequestBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("key_spec"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key_spec"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeySpec(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("with_plain_text"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("with_plain_text"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWithPlainText(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("additional_authenticated_data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("additional_authenticated_data"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAdditionalAuthenticatedData(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("pin"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pin"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPin(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pin_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pin_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPinType(refVal);
        }
    }
    return ok;
}


std::string CreateEcDatakeyPairRequestBody::getKeyId() const
{
    return keyId_;
}

void CreateEcDatakeyPairRequestBody::setKeyId(const std::string& value)
{
    keyId_ = value;
    keyIdIsSet_ = true;
}

bool CreateEcDatakeyPairRequestBody::keyIdIsSet() const
{
    return keyIdIsSet_;
}

void CreateEcDatakeyPairRequestBody::unsetkeyId()
{
    keyIdIsSet_ = false;
}

std::string CreateEcDatakeyPairRequestBody::getKeySpec() const
{
    return keySpec_;
}

void CreateEcDatakeyPairRequestBody::setKeySpec(const std::string& value)
{
    keySpec_ = value;
    keySpecIsSet_ = true;
}

bool CreateEcDatakeyPairRequestBody::keySpecIsSet() const
{
    return keySpecIsSet_;
}

void CreateEcDatakeyPairRequestBody::unsetkeySpec()
{
    keySpecIsSet_ = false;
}

bool CreateEcDatakeyPairRequestBody::isWithPlainText() const
{
    return withPlainText_;
}

void CreateEcDatakeyPairRequestBody::setWithPlainText(bool value)
{
    withPlainText_ = value;
    withPlainTextIsSet_ = true;
}

bool CreateEcDatakeyPairRequestBody::withPlainTextIsSet() const
{
    return withPlainTextIsSet_;
}

void CreateEcDatakeyPairRequestBody::unsetwithPlainText()
{
    withPlainTextIsSet_ = false;
}

std::string CreateEcDatakeyPairRequestBody::getAdditionalAuthenticatedData() const
{
    return additionalAuthenticatedData_;
}

void CreateEcDatakeyPairRequestBody::setAdditionalAuthenticatedData(const std::string& value)
{
    additionalAuthenticatedData_ = value;
    additionalAuthenticatedDataIsSet_ = true;
}

bool CreateEcDatakeyPairRequestBody::additionalAuthenticatedDataIsSet() const
{
    return additionalAuthenticatedDataIsSet_;
}

void CreateEcDatakeyPairRequestBody::unsetadditionalAuthenticatedData()
{
    additionalAuthenticatedDataIsSet_ = false;
}

std::string CreateEcDatakeyPairRequestBody::getSequence() const
{
    return sequence_;
}

void CreateEcDatakeyPairRequestBody::setSequence(const std::string& value)
{
    sequence_ = value;
    sequenceIsSet_ = true;
}

bool CreateEcDatakeyPairRequestBody::sequenceIsSet() const
{
    return sequenceIsSet_;
}

void CreateEcDatakeyPairRequestBody::unsetsequence()
{
    sequenceIsSet_ = false;
}

std::string CreateEcDatakeyPairRequestBody::getPin() const
{
    return pin_;
}

void CreateEcDatakeyPairRequestBody::setPin(const std::string& value)
{
    pin_ = value;
    pinIsSet_ = true;
}

bool CreateEcDatakeyPairRequestBody::pinIsSet() const
{
    return pinIsSet_;
}

void CreateEcDatakeyPairRequestBody::unsetpin()
{
    pinIsSet_ = false;
}

std::string CreateEcDatakeyPairRequestBody::getPinType() const
{
    return pinType_;
}

void CreateEcDatakeyPairRequestBody::setPinType(const std::string& value)
{
    pinType_ = value;
    pinTypeIsSet_ = true;
}

bool CreateEcDatakeyPairRequestBody::pinTypeIsSet() const
{
    return pinTypeIsSet_;
}

void CreateEcDatakeyPairRequestBody::unsetpinType()
{
    pinTypeIsSet_ = false;
}

}
}
}
}
}


