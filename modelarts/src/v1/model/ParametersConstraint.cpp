

#include "huaweicloud/modelarts/v1/model/ParametersConstraint.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ParametersConstraint::ParametersConstraint()
{
    type_ = "";
    typeIsSet_ = false;
    editable_ = false;
    editableIsSet_ = false;
    required_ = false;
    requiredIsSet_ = false;
    sensitive_ = false;
    sensitiveIsSet_ = false;
    validType_ = "";
    validTypeIsSet_ = false;
    validRangeIsSet_ = false;
}

ParametersConstraint::~ParametersConstraint() = default;

void ParametersConstraint::validate()
{
}

web::json::value ParametersConstraint::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(editableIsSet_) {
        val[utility::conversions::to_string_t("editable")] = ModelBase::toJson(editable_);
    }
    if(requiredIsSet_) {
        val[utility::conversions::to_string_t("required")] = ModelBase::toJson(required_);
    }
    if(sensitiveIsSet_) {
        val[utility::conversions::to_string_t("sensitive")] = ModelBase::toJson(sensitive_);
    }
    if(validTypeIsSet_) {
        val[utility::conversions::to_string_t("valid_type")] = ModelBase::toJson(validType_);
    }
    if(validRangeIsSet_) {
        val[utility::conversions::to_string_t("valid_range")] = ModelBase::toJson(validRange_);
    }

    return val;
}
bool ParametersConstraint::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("editable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("editable"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEditable(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("required"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("required"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRequired(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sensitive"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sensitive"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSensitive(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("valid_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("valid_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValidType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("valid_range"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("valid_range"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValidRange(refVal);
        }
    }
    return ok;
}


std::string ParametersConstraint::getType() const
{
    return type_;
}

void ParametersConstraint::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ParametersConstraint::typeIsSet() const
{
    return typeIsSet_;
}

void ParametersConstraint::unsettype()
{
    typeIsSet_ = false;
}

bool ParametersConstraint::isEditable() const
{
    return editable_;
}

void ParametersConstraint::setEditable(bool value)
{
    editable_ = value;
    editableIsSet_ = true;
}

bool ParametersConstraint::editableIsSet() const
{
    return editableIsSet_;
}

void ParametersConstraint::unseteditable()
{
    editableIsSet_ = false;
}

bool ParametersConstraint::isRequired() const
{
    return required_;
}

void ParametersConstraint::setRequired(bool value)
{
    required_ = value;
    requiredIsSet_ = true;
}

bool ParametersConstraint::requiredIsSet() const
{
    return requiredIsSet_;
}

void ParametersConstraint::unsetrequired()
{
    requiredIsSet_ = false;
}

bool ParametersConstraint::isSensitive() const
{
    return sensitive_;
}

void ParametersConstraint::setSensitive(bool value)
{
    sensitive_ = value;
    sensitiveIsSet_ = true;
}

bool ParametersConstraint::sensitiveIsSet() const
{
    return sensitiveIsSet_;
}

void ParametersConstraint::unsetsensitive()
{
    sensitiveIsSet_ = false;
}

std::string ParametersConstraint::getValidType() const
{
    return validType_;
}

void ParametersConstraint::setValidType(const std::string& value)
{
    validType_ = value;
    validTypeIsSet_ = true;
}

bool ParametersConstraint::validTypeIsSet() const
{
    return validTypeIsSet_;
}

void ParametersConstraint::unsetvalidType()
{
    validTypeIsSet_ = false;
}

std::vector<std::string>& ParametersConstraint::getValidRange()
{
    return validRange_;
}

void ParametersConstraint::setValidRange(const std::vector<std::string>& value)
{
    validRange_ = value;
    validRangeIsSet_ = true;
}

bool ParametersConstraint::validRangeIsSet() const
{
    return validRangeIsSet_;
}

void ParametersConstraint::unsetvalidRange()
{
    validRangeIsSet_ = false;
}

}
}
}
}
}


