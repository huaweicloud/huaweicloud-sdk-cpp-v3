

#include "huaweicloud/kms/v2/model/CreateDatakeyRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




CreateDatakeyRequestBody::CreateDatakeyRequestBody()
{
    keyId_ = "";
    keyIdIsSet_ = false;
    keySpec_ = "";
    keySpecIsSet_ = false;
    datakeyLength_ = "";
    datakeyLengthIsSet_ = false;
    additionalAuthenticatedData_ = "";
    additionalAuthenticatedDataIsSet_ = false;
    sequence_ = "";
    sequenceIsSet_ = false;
    pin_ = "";
    pinIsSet_ = false;
    pinType_ = "";
    pinTypeIsSet_ = false;
}

CreateDatakeyRequestBody::~CreateDatakeyRequestBody() = default;

void CreateDatakeyRequestBody::validate()
{
}

web::json::value CreateDatakeyRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keyIdIsSet_) {
        val[utility::conversions::to_string_t("key_id")] = ModelBase::toJson(keyId_);
    }
    if(keySpecIsSet_) {
        val[utility::conversions::to_string_t("key_spec")] = ModelBase::toJson(keySpec_);
    }
    if(datakeyLengthIsSet_) {
        val[utility::conversions::to_string_t("datakey_length")] = ModelBase::toJson(datakeyLength_);
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
bool CreateDatakeyRequestBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("datakey_length"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("datakey_length"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatakeyLength(refVal);
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


std::string CreateDatakeyRequestBody::getKeyId() const
{
    return keyId_;
}

void CreateDatakeyRequestBody::setKeyId(const std::string& value)
{
    keyId_ = value;
    keyIdIsSet_ = true;
}

bool CreateDatakeyRequestBody::keyIdIsSet() const
{
    return keyIdIsSet_;
}

void CreateDatakeyRequestBody::unsetkeyId()
{
    keyIdIsSet_ = false;
}

std::string CreateDatakeyRequestBody::getKeySpec() const
{
    return keySpec_;
}

void CreateDatakeyRequestBody::setKeySpec(const std::string& value)
{
    keySpec_ = value;
    keySpecIsSet_ = true;
}

bool CreateDatakeyRequestBody::keySpecIsSet() const
{
    return keySpecIsSet_;
}

void CreateDatakeyRequestBody::unsetkeySpec()
{
    keySpecIsSet_ = false;
}

std::string CreateDatakeyRequestBody::getDatakeyLength() const
{
    return datakeyLength_;
}

void CreateDatakeyRequestBody::setDatakeyLength(const std::string& value)
{
    datakeyLength_ = value;
    datakeyLengthIsSet_ = true;
}

bool CreateDatakeyRequestBody::datakeyLengthIsSet() const
{
    return datakeyLengthIsSet_;
}

void CreateDatakeyRequestBody::unsetdatakeyLength()
{
    datakeyLengthIsSet_ = false;
}

std::string CreateDatakeyRequestBody::getAdditionalAuthenticatedData() const
{
    return additionalAuthenticatedData_;
}

void CreateDatakeyRequestBody::setAdditionalAuthenticatedData(const std::string& value)
{
    additionalAuthenticatedData_ = value;
    additionalAuthenticatedDataIsSet_ = true;
}

bool CreateDatakeyRequestBody::additionalAuthenticatedDataIsSet() const
{
    return additionalAuthenticatedDataIsSet_;
}

void CreateDatakeyRequestBody::unsetadditionalAuthenticatedData()
{
    additionalAuthenticatedDataIsSet_ = false;
}

std::string CreateDatakeyRequestBody::getSequence() const
{
    return sequence_;
}

void CreateDatakeyRequestBody::setSequence(const std::string& value)
{
    sequence_ = value;
    sequenceIsSet_ = true;
}

bool CreateDatakeyRequestBody::sequenceIsSet() const
{
    return sequenceIsSet_;
}

void CreateDatakeyRequestBody::unsetsequence()
{
    sequenceIsSet_ = false;
}

std::string CreateDatakeyRequestBody::getPin() const
{
    return pin_;
}

void CreateDatakeyRequestBody::setPin(const std::string& value)
{
    pin_ = value;
    pinIsSet_ = true;
}

bool CreateDatakeyRequestBody::pinIsSet() const
{
    return pinIsSet_;
}

void CreateDatakeyRequestBody::unsetpin()
{
    pinIsSet_ = false;
}

std::string CreateDatakeyRequestBody::getPinType() const
{
    return pinType_;
}

void CreateDatakeyRequestBody::setPinType(const std::string& value)
{
    pinType_ = value;
    pinTypeIsSet_ = true;
}

bool CreateDatakeyRequestBody::pinTypeIsSet() const
{
    return pinTypeIsSet_;
}

void CreateDatakeyRequestBody::unsetpinType()
{
    pinTypeIsSet_ = false;
}

}
}
}
}
}


