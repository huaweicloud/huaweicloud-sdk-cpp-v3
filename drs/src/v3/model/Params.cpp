

#include "huaweicloud/drs/v3/model/Params.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




Params::Params()
{
    compareResult_ = "";
    compareResultIsSet_ = false;
    dataType_ = "";
    dataTypeIsSet_ = false;
    group_ = "";
    groupIsSet_ = false;
    key_ = "";
    keyIsSet_ = false;
    needRestart_ = "";
    needRestartIsSet_ = false;
    sourceValue_ = "";
    sourceValueIsSet_ = false;
    targetValue_ = "";
    targetValueIsSet_ = false;
    valueRange_ = "";
    valueRangeIsSet_ = false;
    errorCode_ = "";
    errorCodeIsSet_ = false;
    errorMessage_ = "";
    errorMessageIsSet_ = false;
}

Params::~Params() = default;

void Params::validate()
{
}

web::json::value Params::toJson() const
{
    web::json::value val = web::json::value::object();

    if(compareResultIsSet_) {
        val[utility::conversions::to_string_t("compare_result")] = ModelBase::toJson(compareResult_);
    }
    if(dataTypeIsSet_) {
        val[utility::conversions::to_string_t("data_type")] = ModelBase::toJson(dataType_);
    }
    if(groupIsSet_) {
        val[utility::conversions::to_string_t("group")] = ModelBase::toJson(group_);
    }
    if(keyIsSet_) {
        val[utility::conversions::to_string_t("key")] = ModelBase::toJson(key_);
    }
    if(needRestartIsSet_) {
        val[utility::conversions::to_string_t("need_restart")] = ModelBase::toJson(needRestart_);
    }
    if(sourceValueIsSet_) {
        val[utility::conversions::to_string_t("source_value")] = ModelBase::toJson(sourceValue_);
    }
    if(targetValueIsSet_) {
        val[utility::conversions::to_string_t("target_value")] = ModelBase::toJson(targetValue_);
    }
    if(valueRangeIsSet_) {
        val[utility::conversions::to_string_t("value_range")] = ModelBase::toJson(valueRange_);
    }
    if(errorCodeIsSet_) {
        val[utility::conversions::to_string_t("error_code")] = ModelBase::toJson(errorCode_);
    }
    if(errorMessageIsSet_) {
        val[utility::conversions::to_string_t("error_message")] = ModelBase::toJson(errorMessage_);
    }

    return val;
}
bool Params::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("compare_result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("compare_result"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCompareResult(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("data_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDataType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("group"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroup(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("need_restart"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("need_restart"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNeedRestart(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source_value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_value"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceValue(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target_value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_value"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetValue(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("value_range"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("value_range"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValueRange(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("error_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("error_message"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_message"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorMessage(refVal);
        }
    }
    return ok;
}


std::string Params::getCompareResult() const
{
    return compareResult_;
}

void Params::setCompareResult(const std::string& value)
{
    compareResult_ = value;
    compareResultIsSet_ = true;
}

bool Params::compareResultIsSet() const
{
    return compareResultIsSet_;
}

void Params::unsetcompareResult()
{
    compareResultIsSet_ = false;
}

std::string Params::getDataType() const
{
    return dataType_;
}

void Params::setDataType(const std::string& value)
{
    dataType_ = value;
    dataTypeIsSet_ = true;
}

bool Params::dataTypeIsSet() const
{
    return dataTypeIsSet_;
}

void Params::unsetdataType()
{
    dataTypeIsSet_ = false;
}

std::string Params::getGroup() const
{
    return group_;
}

void Params::setGroup(const std::string& value)
{
    group_ = value;
    groupIsSet_ = true;
}

bool Params::groupIsSet() const
{
    return groupIsSet_;
}

void Params::unsetgroup()
{
    groupIsSet_ = false;
}

std::string Params::getKey() const
{
    return key_;
}

void Params::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool Params::keyIsSet() const
{
    return keyIsSet_;
}

void Params::unsetkey()
{
    keyIsSet_ = false;
}

std::string Params::getNeedRestart() const
{
    return needRestart_;
}

void Params::setNeedRestart(const std::string& value)
{
    needRestart_ = value;
    needRestartIsSet_ = true;
}

bool Params::needRestartIsSet() const
{
    return needRestartIsSet_;
}

void Params::unsetneedRestart()
{
    needRestartIsSet_ = false;
}

std::string Params::getSourceValue() const
{
    return sourceValue_;
}

void Params::setSourceValue(const std::string& value)
{
    sourceValue_ = value;
    sourceValueIsSet_ = true;
}

bool Params::sourceValueIsSet() const
{
    return sourceValueIsSet_;
}

void Params::unsetsourceValue()
{
    sourceValueIsSet_ = false;
}

std::string Params::getTargetValue() const
{
    return targetValue_;
}

void Params::setTargetValue(const std::string& value)
{
    targetValue_ = value;
    targetValueIsSet_ = true;
}

bool Params::targetValueIsSet() const
{
    return targetValueIsSet_;
}

void Params::unsettargetValue()
{
    targetValueIsSet_ = false;
}

std::string Params::getValueRange() const
{
    return valueRange_;
}

void Params::setValueRange(const std::string& value)
{
    valueRange_ = value;
    valueRangeIsSet_ = true;
}

bool Params::valueRangeIsSet() const
{
    return valueRangeIsSet_;
}

void Params::unsetvalueRange()
{
    valueRangeIsSet_ = false;
}

std::string Params::getErrorCode() const
{
    return errorCode_;
}

void Params::setErrorCode(const std::string& value)
{
    errorCode_ = value;
    errorCodeIsSet_ = true;
}

bool Params::errorCodeIsSet() const
{
    return errorCodeIsSet_;
}

void Params::unseterrorCode()
{
    errorCodeIsSet_ = false;
}

std::string Params::getErrorMessage() const
{
    return errorMessage_;
}

void Params::setErrorMessage(const std::string& value)
{
    errorMessage_ = value;
    errorMessageIsSet_ = true;
}

bool Params::errorMessageIsSet() const
{
    return errorMessageIsSet_;
}

void Params::unseterrorMessage()
{
    errorMessageIsSet_ = false;
}

}
}
}
}
}


