

#include "huaweicloud/modelarts/v1/model/TemplateParam.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




TemplateParam::TemplateParam()
{
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
    visible_ = "";
    visibleIsSet_ = false;
    regex_ = "";
    regexIsSet_ = false;
}

TemplateParam::~TemplateParam() = default;

void TemplateParam::validate()
{
}

web::json::value TemplateParam::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }
    if(visibleIsSet_) {
        val[utility::conversions::to_string_t("visible")] = ModelBase::toJson(visible_);
    }
    if(regexIsSet_) {
        val[utility::conversions::to_string_t("regex")] = ModelBase::toJson(regex_);
    }

    return val;
}
bool TemplateParam::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("value"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValue(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("regex"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("regex"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegex(refVal);
        }
    }
    return ok;
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

std::string TemplateParam::getRegex() const
{
    return regex_;
}

void TemplateParam::setRegex(const std::string& value)
{
    regex_ = value;
    regexIsSet_ = true;
}

bool TemplateParam::regexIsSet() const
{
    return regexIsSet_;
}

void TemplateParam::unsetregex()
{
    regexIsSet_ = false;
}

}
}
}
}
}


