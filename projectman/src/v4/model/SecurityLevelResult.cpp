

#include "huaweicloud/projectman/v4/model/SecurityLevelResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




SecurityLevelResult::SecurityLevelResult()
{
    id_ = "";
    idIsSet_ = false;
    displayValue_ = "";
    displayValueIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
    code_ = "";
    codeIsSet_ = false;
    sequence_ = 0.0;
    sequenceIsSet_ = false;
}

SecurityLevelResult::~SecurityLevelResult() = default;

void SecurityLevelResult::validate()
{
}

web::json::value SecurityLevelResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(displayValueIsSet_) {
        val[utility::conversions::to_string_t("display_value")] = ModelBase::toJson(displayValue_);
    }
    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }
    if(codeIsSet_) {
        val[utility::conversions::to_string_t("code")] = ModelBase::toJson(code_);
    }
    if(sequenceIsSet_) {
        val[utility::conversions::to_string_t("sequence")] = ModelBase::toJson(sequence_);
    }

    return val;
}
bool SecurityLevelResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("display_value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("display_value"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDisplayValue(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("value"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValue(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sequence"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sequence"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSequence(refVal);
        }
    }
    return ok;
}


std::string SecurityLevelResult::getId() const
{
    return id_;
}

void SecurityLevelResult::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool SecurityLevelResult::idIsSet() const
{
    return idIsSet_;
}

void SecurityLevelResult::unsetid()
{
    idIsSet_ = false;
}

std::string SecurityLevelResult::getDisplayValue() const
{
    return displayValue_;
}

void SecurityLevelResult::setDisplayValue(const std::string& value)
{
    displayValue_ = value;
    displayValueIsSet_ = true;
}

bool SecurityLevelResult::displayValueIsSet() const
{
    return displayValueIsSet_;
}

void SecurityLevelResult::unsetdisplayValue()
{
    displayValueIsSet_ = false;
}

std::string SecurityLevelResult::getValue() const
{
    return value_;
}

void SecurityLevelResult::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool SecurityLevelResult::valueIsSet() const
{
    return valueIsSet_;
}

void SecurityLevelResult::unsetvalue()
{
    valueIsSet_ = false;
}

std::string SecurityLevelResult::getCode() const
{
    return code_;
}

void SecurityLevelResult::setCode(const std::string& value)
{
    code_ = value;
    codeIsSet_ = true;
}

bool SecurityLevelResult::codeIsSet() const
{
    return codeIsSet_;
}

void SecurityLevelResult::unsetcode()
{
    codeIsSet_ = false;
}

double SecurityLevelResult::getSequence() const
{
    return sequence_;
}

void SecurityLevelResult::setSequence(double value)
{
    sequence_ = value;
    sequenceIsSet_ = true;
}

bool SecurityLevelResult::sequenceIsSet() const
{
    return sequenceIsSet_;
}

void SecurityLevelResult::unsetsequence()
{
    sequenceIsSet_ = false;
}

}
}
}
}
}


