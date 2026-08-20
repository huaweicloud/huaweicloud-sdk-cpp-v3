

#include "huaweicloud/codeartspipeline/v2/model/ExtensionParameterValidation.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




ExtensionParameterValidation::ExtensionParameterValidation()
{
    isRequired_ = false;
    isRequiredIsSet_ = false;
    pattern_ = "";
    patternIsSet_ = false;
    patternDescription_ = "";
    patternDescriptionIsSet_ = false;
}

ExtensionParameterValidation::~ExtensionParameterValidation() = default;

void ExtensionParameterValidation::validate()
{
}

web::json::value ExtensionParameterValidation::toJson() const
{
    web::json::value val = web::json::value::object();

    if(isRequiredIsSet_) {
        val[utility::conversions::to_string_t("isRequired")] = ModelBase::toJson(isRequired_);
    }
    if(patternIsSet_) {
        val[utility::conversions::to_string_t("pattern")] = ModelBase::toJson(pattern_);
    }
    if(patternDescriptionIsSet_) {
        val[utility::conversions::to_string_t("patternDescription")] = ModelBase::toJson(patternDescription_);
    }

    return val;
}
bool ExtensionParameterValidation::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("isRequired"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("isRequired"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsRequired(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pattern"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pattern"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPattern(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("patternDescription"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("patternDescription"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPatternDescription(refVal);
        }
    }
    return ok;
}


bool ExtensionParameterValidation::isIsRequired() const
{
    return isRequired_;
}

void ExtensionParameterValidation::setIsRequired(bool value)
{
    isRequired_ = value;
    isRequiredIsSet_ = true;
}

bool ExtensionParameterValidation::isRequiredIsSet() const
{
    return isRequiredIsSet_;
}

void ExtensionParameterValidation::unsetisRequired()
{
    isRequiredIsSet_ = false;
}

std::string ExtensionParameterValidation::getPattern() const
{
    return pattern_;
}

void ExtensionParameterValidation::setPattern(const std::string& value)
{
    pattern_ = value;
    patternIsSet_ = true;
}

bool ExtensionParameterValidation::patternIsSet() const
{
    return patternIsSet_;
}

void ExtensionParameterValidation::unsetpattern()
{
    patternIsSet_ = false;
}

std::string ExtensionParameterValidation::getPatternDescription() const
{
    return patternDescription_;
}

void ExtensionParameterValidation::setPatternDescription(const std::string& value)
{
    patternDescription_ = value;
    patternDescriptionIsSet_ = true;
}

bool ExtensionParameterValidation::patternDescriptionIsSet() const
{
    return patternDescriptionIsSet_;
}

void ExtensionParameterValidation::unsetpatternDescription()
{
    patternDescriptionIsSet_ = false;
}

}
}
}
}
}


