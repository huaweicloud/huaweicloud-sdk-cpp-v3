

#include "huaweicloud/modelarts/v1/model/Parameter_constraint.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




Parameter_constraint::Parameter_constraint()
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

Parameter_constraint::~Parameter_constraint() = default;

void Parameter_constraint::validate()
{
}

web::json::value Parameter_constraint::toJson() const
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
bool Parameter_constraint::fromJson(const web::json::value& val)
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


std::string Parameter_constraint::getType() const
{
    return type_;
}

void Parameter_constraint::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool Parameter_constraint::typeIsSet() const
{
    return typeIsSet_;
}

void Parameter_constraint::unsettype()
{
    typeIsSet_ = false;
}

bool Parameter_constraint::isEditable() const
{
    return editable_;
}

void Parameter_constraint::setEditable(bool value)
{
    editable_ = value;
    editableIsSet_ = true;
}

bool Parameter_constraint::editableIsSet() const
{
    return editableIsSet_;
}

void Parameter_constraint::unseteditable()
{
    editableIsSet_ = false;
}

bool Parameter_constraint::isRequired() const
{
    return required_;
}

void Parameter_constraint::setRequired(bool value)
{
    required_ = value;
    requiredIsSet_ = true;
}

bool Parameter_constraint::requiredIsSet() const
{
    return requiredIsSet_;
}

void Parameter_constraint::unsetrequired()
{
    requiredIsSet_ = false;
}

bool Parameter_constraint::isSensitive() const
{
    return sensitive_;
}

void Parameter_constraint::setSensitive(bool value)
{
    sensitive_ = value;
    sensitiveIsSet_ = true;
}

bool Parameter_constraint::sensitiveIsSet() const
{
    return sensitiveIsSet_;
}

void Parameter_constraint::unsetsensitive()
{
    sensitiveIsSet_ = false;
}

std::string Parameter_constraint::getValidType() const
{
    return validType_;
}

void Parameter_constraint::setValidType(const std::string& value)
{
    validType_ = value;
    validTypeIsSet_ = true;
}

bool Parameter_constraint::validTypeIsSet() const
{
    return validTypeIsSet_;
}

void Parameter_constraint::unsetvalidType()
{
    validTypeIsSet_ = false;
}

std::vector<std::string>& Parameter_constraint::getValidRange()
{
    return validRange_;
}

void Parameter_constraint::setValidRange(const std::vector<std::string>& value)
{
    validRange_ = value;
    validRangeIsSet_ = true;
}

bool Parameter_constraint::validRangeIsSet() const
{
    return validRangeIsSet_;
}

void Parameter_constraint::unsetvalidRange()
{
    validRangeIsSet_ = false;
}

}
}
}
}
}


