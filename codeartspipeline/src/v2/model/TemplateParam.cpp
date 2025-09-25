

#include "huaweicloud/codeartspipeline/v2/model/TemplateParam.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




TemplateParam::TemplateParam()
{
    required_ = "";
    requiredIsSet_ = false;
    visible_ = "";
    visibleIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    paramtype_ = "";
    paramtypeIsSet_ = false;
    displayType_ = "";
    displayTypeIsSet_ = false;
    displayName_ = "";
    displayNameIsSet_ = false;
    isStatic_ = false;
    isStaticIsSet_ = false;
    isDefault_ = false;
    isDefaultIsSet_ = false;
    limitsIsSet_ = false;
    constraintsIsSet_ = false;
}

TemplateParam::~TemplateParam() = default;

void TemplateParam::validate()
{
}

web::json::value TemplateParam::toJson() const
{
    web::json::value val = web::json::value::object();

    if(requiredIsSet_) {
        val[utility::conversions::to_string_t("required")] = ModelBase::toJson(required_);
    }
    if(visibleIsSet_) {
        val[utility::conversions::to_string_t("visible")] = ModelBase::toJson(visible_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(paramtypeIsSet_) {
        val[utility::conversions::to_string_t("paramtype")] = ModelBase::toJson(paramtype_);
    }
    if(displayTypeIsSet_) {
        val[utility::conversions::to_string_t("display_type")] = ModelBase::toJson(displayType_);
    }
    if(displayNameIsSet_) {
        val[utility::conversions::to_string_t("display_name")] = ModelBase::toJson(displayName_);
    }
    if(isStaticIsSet_) {
        val[utility::conversions::to_string_t("is_static")] = ModelBase::toJson(isStatic_);
    }
    if(isDefaultIsSet_) {
        val[utility::conversions::to_string_t("is_default")] = ModelBase::toJson(isDefault_);
    }
    if(limitsIsSet_) {
        val[utility::conversions::to_string_t("limits")] = ModelBase::toJson(limits_);
    }
    if(constraintsIsSet_) {
        val[utility::conversions::to_string_t("constraints")] = ModelBase::toJson(constraints_);
    }

    return val;
}
bool TemplateParam::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("required"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("required"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRequired(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("visible"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("visible"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVisible(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("paramtype"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("paramtype"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParamtype(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("display_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("display_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDisplayType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("display_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("display_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDisplayName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_static"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_static"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsStatic(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_default"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_default"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsDefault(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limits"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limits"));
        if(!fieldValue.is_null())
        {
            std::vector<ParamTypeLimits> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimits(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("constraints"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("constraints"));
        if(!fieldValue.is_null())
        {
            std::vector<Constraint> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConstraints(refVal);
        }
    }
    return ok;
}


std::string TemplateParam::getRequired() const
{
    return required_;
}

void TemplateParam::setRequired(const std::string& value)
{
    required_ = value;
    requiredIsSet_ = true;
}

bool TemplateParam::requiredIsSet() const
{
    return requiredIsSet_;
}

void TemplateParam::unsetrequired()
{
    requiredIsSet_ = false;
}

std::string TemplateParam::getVisible() const
{
    return visible_;
}

void TemplateParam::setVisible(const std::string& value)
{
    visible_ = value;
    visibleIsSet_ = true;
}

bool TemplateParam::visibleIsSet() const
{
    return visibleIsSet_;
}

void TemplateParam::unsetvisible()
{
    visibleIsSet_ = false;
}

std::string TemplateParam::getName() const
{
    return name_;
}

void TemplateParam::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool TemplateParam::nameIsSet() const
{
    return nameIsSet_;
}

void TemplateParam::unsetname()
{
    nameIsSet_ = false;
}

std::string TemplateParam::getValue() const
{
    return value_;
}

void TemplateParam::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool TemplateParam::valueIsSet() const
{
    return valueIsSet_;
}

void TemplateParam::unsetvalue()
{
    valueIsSet_ = false;
}

std::string TemplateParam::getDescription() const
{
    return description_;
}

void TemplateParam::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool TemplateParam::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void TemplateParam::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string TemplateParam::getParamtype() const
{
    return paramtype_;
}

void TemplateParam::setParamtype(const std::string& value)
{
    paramtype_ = value;
    paramtypeIsSet_ = true;
}

bool TemplateParam::paramtypeIsSet() const
{
    return paramtypeIsSet_;
}

void TemplateParam::unsetparamtype()
{
    paramtypeIsSet_ = false;
}

std::string TemplateParam::getDisplayType() const
{
    return displayType_;
}

void TemplateParam::setDisplayType(const std::string& value)
{
    displayType_ = value;
    displayTypeIsSet_ = true;
}

bool TemplateParam::displayTypeIsSet() const
{
    return displayTypeIsSet_;
}

void TemplateParam::unsetdisplayType()
{
    displayTypeIsSet_ = false;
}

std::string TemplateParam::getDisplayName() const
{
    return displayName_;
}

void TemplateParam::setDisplayName(const std::string& value)
{
    displayName_ = value;
    displayNameIsSet_ = true;
}

bool TemplateParam::displayNameIsSet() const
{
    return displayNameIsSet_;
}

void TemplateParam::unsetdisplayName()
{
    displayNameIsSet_ = false;
}

bool TemplateParam::isIsStatic() const
{
    return isStatic_;
}

void TemplateParam::setIsStatic(bool value)
{
    isStatic_ = value;
    isStaticIsSet_ = true;
}

bool TemplateParam::isStaticIsSet() const
{
    return isStaticIsSet_;
}

void TemplateParam::unsetisStatic()
{
    isStaticIsSet_ = false;
}

bool TemplateParam::isIsDefault() const
{
    return isDefault_;
}

void TemplateParam::setIsDefault(bool value)
{
    isDefault_ = value;
    isDefaultIsSet_ = true;
}

bool TemplateParam::isDefaultIsSet() const
{
    return isDefaultIsSet_;
}

void TemplateParam::unsetisDefault()
{
    isDefaultIsSet_ = false;
}

std::vector<ParamTypeLimits>& TemplateParam::getLimits()
{
    return limits_;
}

void TemplateParam::setLimits(const std::vector<ParamTypeLimits>& value)
{
    limits_ = value;
    limitsIsSet_ = true;
}

bool TemplateParam::limitsIsSet() const
{
    return limitsIsSet_;
}

void TemplateParam::unsetlimits()
{
    limitsIsSet_ = false;
}

std::vector<Constraint>& TemplateParam::getConstraints()
{
    return constraints_;
}

void TemplateParam::setConstraints(const std::vector<Constraint>& value)
{
    constraints_ = value;
    constraintsIsSet_ = true;
}

bool TemplateParam::constraintsIsSet() const
{
    return constraintsIsSet_;
}

void TemplateParam::unsetconstraints()
{
    constraintsIsSet_ = false;
}

}
}
}
}
}


