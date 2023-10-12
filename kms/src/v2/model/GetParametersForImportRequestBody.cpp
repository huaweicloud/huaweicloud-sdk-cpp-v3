

#include "huaweicloud/kms/v2/model/GetParametersForImportRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




GetParametersForImportRequestBody::GetParametersForImportRequestBody()
{
    keyId_ = "";
    keyIdIsSet_ = false;
    wrappingAlgorithm_ = "";
    wrappingAlgorithmIsSet_ = false;
    sequence_ = "";
    sequenceIsSet_ = false;
}

GetParametersForImportRequestBody::~GetParametersForImportRequestBody() = default;

void GetParametersForImportRequestBody::validate()
{
}

web::json::value GetParametersForImportRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keyIdIsSet_) {
        val[utility::conversions::to_string_t("key_id")] = ModelBase::toJson(keyId_);
    }
    if(wrappingAlgorithmIsSet_) {
        val[utility::conversions::to_string_t("wrapping_algorithm")] = ModelBase::toJson(wrappingAlgorithm_);
    }
    if(sequenceIsSet_) {
        val[utility::conversions::to_string_t("sequence")] = ModelBase::toJson(sequence_);
    }

    return val;
}
bool GetParametersForImportRequestBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("wrapping_algorithm"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("wrapping_algorithm"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWrappingAlgorithm(refVal);
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


std::string GetParametersForImportRequestBody::getKeyId() const
{
    return keyId_;
}

void GetParametersForImportRequestBody::setKeyId(const std::string& value)
{
    keyId_ = value;
    keyIdIsSet_ = true;
}

bool GetParametersForImportRequestBody::keyIdIsSet() const
{
    return keyIdIsSet_;
}

void GetParametersForImportRequestBody::unsetkeyId()
{
    keyIdIsSet_ = false;
}

std::string GetParametersForImportRequestBody::getWrappingAlgorithm() const
{
    return wrappingAlgorithm_;
}

void GetParametersForImportRequestBody::setWrappingAlgorithm(const std::string& value)
{
    wrappingAlgorithm_ = value;
    wrappingAlgorithmIsSet_ = true;
}

bool GetParametersForImportRequestBody::wrappingAlgorithmIsSet() const
{
    return wrappingAlgorithmIsSet_;
}

void GetParametersForImportRequestBody::unsetwrappingAlgorithm()
{
    wrappingAlgorithmIsSet_ = false;
}

std::string GetParametersForImportRequestBody::getSequence() const
{
    return sequence_;
}

void GetParametersForImportRequestBody::setSequence(const std::string& value)
{
    sequence_ = value;
    sequenceIsSet_ = true;
}

bool GetParametersForImportRequestBody::sequenceIsSet() const
{
    return sequenceIsSet_;
}

void GetParametersForImportRequestBody::unsetsequence()
{
    sequenceIsSet_ = false;
}

}
}
}
}
}


