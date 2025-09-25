

#include "huaweicloud/codeartspipeline/v2/model/ExtensionValidation.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




ExtensionValidation::ExtensionValidation()
{
    requiredMessage_ = "";
    requiredMessageIsSet_ = false;
    regex_ = "";
    regexIsSet_ = false;
    regexMessage_ = "";
    regexMessageIsSet_ = false;
    maxLength_ = 0;
    maxLengthIsSet_ = false;
    minLength_ = 0;
    minLengthIsSet_ = false;
}

ExtensionValidation::~ExtensionValidation() = default;

void ExtensionValidation::validate()
{
}

web::json::value ExtensionValidation::toJson() const
{
    web::json::value val = web::json::value::object();

    if(requiredMessageIsSet_) {
        val[utility::conversions::to_string_t("required_message")] = ModelBase::toJson(requiredMessage_);
    }
    if(regexIsSet_) {
        val[utility::conversions::to_string_t("regex")] = ModelBase::toJson(regex_);
    }
    if(regexMessageIsSet_) {
        val[utility::conversions::to_string_t("regex_message")] = ModelBase::toJson(regexMessage_);
    }
    if(maxLengthIsSet_) {
        val[utility::conversions::to_string_t("max_length")] = ModelBase::toJson(maxLength_);
    }
    if(minLengthIsSet_) {
        val[utility::conversions::to_string_t("min_length")] = ModelBase::toJson(minLength_);
    }

    return val;
}
bool ExtensionValidation::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("required_message"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("required_message"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRequiredMessage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("regex"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("regex"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegex(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("regex_message"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("regex_message"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegexMessage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("max_length"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("max_length"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxLength(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("min_length"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("min_length"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMinLength(refVal);
        }
    }
    return ok;
}


std::string ExtensionValidation::getRequiredMessage() const
{
    return requiredMessage_;
}

void ExtensionValidation::setRequiredMessage(const std::string& value)
{
    requiredMessage_ = value;
    requiredMessageIsSet_ = true;
}

bool ExtensionValidation::requiredMessageIsSet() const
{
    return requiredMessageIsSet_;
}

void ExtensionValidation::unsetrequiredMessage()
{
    requiredMessageIsSet_ = false;
}

std::string ExtensionValidation::getRegex() const
{
    return regex_;
}

void ExtensionValidation::setRegex(const std::string& value)
{
    regex_ = value;
    regexIsSet_ = true;
}

bool ExtensionValidation::regexIsSet() const
{
    return regexIsSet_;
}

void ExtensionValidation::unsetregex()
{
    regexIsSet_ = false;
}

std::string ExtensionValidation::getRegexMessage() const
{
    return regexMessage_;
}

void ExtensionValidation::setRegexMessage(const std::string& value)
{
    regexMessage_ = value;
    regexMessageIsSet_ = true;
}

bool ExtensionValidation::regexMessageIsSet() const
{
    return regexMessageIsSet_;
}

void ExtensionValidation::unsetregexMessage()
{
    regexMessageIsSet_ = false;
}

int32_t ExtensionValidation::getMaxLength() const
{
    return maxLength_;
}

void ExtensionValidation::setMaxLength(int32_t value)
{
    maxLength_ = value;
    maxLengthIsSet_ = true;
}

bool ExtensionValidation::maxLengthIsSet() const
{
    return maxLengthIsSet_;
}

void ExtensionValidation::unsetmaxLength()
{
    maxLengthIsSet_ = false;
}

int32_t ExtensionValidation::getMinLength() const
{
    return minLength_;
}

void ExtensionValidation::setMinLength(int32_t value)
{
    minLength_ = value;
    minLengthIsSet_ = true;
}

bool ExtensionValidation::minLengthIsSet() const
{
    return minLengthIsSet_;
}

void ExtensionValidation::unsetminLength()
{
    minLengthIsSet_ = false;
}

}
}
}
}
}


