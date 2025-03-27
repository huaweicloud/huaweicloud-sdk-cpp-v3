

#include "huaweicloud/kms/v2/model/CreateRsaDatakeyPairRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




CreateRsaDatakeyPairRequestBody::CreateRsaDatakeyPairRequestBody()
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
}

CreateRsaDatakeyPairRequestBody::~CreateRsaDatakeyPairRequestBody() = default;

void CreateRsaDatakeyPairRequestBody::validate()
{
}

web::json::value CreateRsaDatakeyPairRequestBody::toJson() const
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

    return val;
}
bool CreateRsaDatakeyPairRequestBody::fromJson(const web::json::value& val)
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
    return ok;
}


std::string CreateRsaDatakeyPairRequestBody::getKeyId() const
{
    return keyId_;
}

void CreateRsaDatakeyPairRequestBody::setKeyId(const std::string& value)
{
    keyId_ = value;
    keyIdIsSet_ = true;
}

bool CreateRsaDatakeyPairRequestBody::keyIdIsSet() const
{
    return keyIdIsSet_;
}

void CreateRsaDatakeyPairRequestBody::unsetkeyId()
{
    keyIdIsSet_ = false;
}

std::string CreateRsaDatakeyPairRequestBody::getKeySpec() const
{
    return keySpec_;
}

void CreateRsaDatakeyPairRequestBody::setKeySpec(const std::string& value)
{
    keySpec_ = value;
    keySpecIsSet_ = true;
}

bool CreateRsaDatakeyPairRequestBody::keySpecIsSet() const
{
    return keySpecIsSet_;
}

void CreateRsaDatakeyPairRequestBody::unsetkeySpec()
{
    keySpecIsSet_ = false;
}

bool CreateRsaDatakeyPairRequestBody::isWithPlainText() const
{
    return withPlainText_;
}

void CreateRsaDatakeyPairRequestBody::setWithPlainText(bool value)
{
    withPlainText_ = value;
    withPlainTextIsSet_ = true;
}

bool CreateRsaDatakeyPairRequestBody::withPlainTextIsSet() const
{
    return withPlainTextIsSet_;
}

void CreateRsaDatakeyPairRequestBody::unsetwithPlainText()
{
    withPlainTextIsSet_ = false;
}

std::string CreateRsaDatakeyPairRequestBody::getAdditionalAuthenticatedData() const
{
    return additionalAuthenticatedData_;
}

void CreateRsaDatakeyPairRequestBody::setAdditionalAuthenticatedData(const std::string& value)
{
    additionalAuthenticatedData_ = value;
    additionalAuthenticatedDataIsSet_ = true;
}

bool CreateRsaDatakeyPairRequestBody::additionalAuthenticatedDataIsSet() const
{
    return additionalAuthenticatedDataIsSet_;
}

void CreateRsaDatakeyPairRequestBody::unsetadditionalAuthenticatedData()
{
    additionalAuthenticatedDataIsSet_ = false;
}

std::string CreateRsaDatakeyPairRequestBody::getSequence() const
{
    return sequence_;
}

void CreateRsaDatakeyPairRequestBody::setSequence(const std::string& value)
{
    sequence_ = value;
    sequenceIsSet_ = true;
}

bool CreateRsaDatakeyPairRequestBody::sequenceIsSet() const
{
    return sequenceIsSet_;
}

void CreateRsaDatakeyPairRequestBody::unsetsequence()
{
    sequenceIsSet_ = false;
}

}
}
}
}
}


