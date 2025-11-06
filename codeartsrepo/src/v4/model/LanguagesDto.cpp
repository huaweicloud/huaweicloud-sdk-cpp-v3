

#include "huaweicloud/codeartsrepo/v4/model/LanguagesDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




LanguagesDto::LanguagesDto()
{
    color_ = "";
    colorIsSet_ = false;
    label_ = "";
    labelIsSet_ = false;
    value_ = 0.0;
    valueIsSet_ = false;
}

LanguagesDto::~LanguagesDto() = default;

void LanguagesDto::validate()
{
}

web::json::value LanguagesDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(colorIsSet_) {
        val[utility::conversions::to_string_t("color")] = ModelBase::toJson(color_);
    }
    if(labelIsSet_) {
        val[utility::conversions::to_string_t("label")] = ModelBase::toJson(label_);
    }
    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }

    return val;
}
bool LanguagesDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("color"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("color"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setColor(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("label"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("label"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLabel(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("value"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValue(refVal);
        }
    }
    return ok;
}


std::string LanguagesDto::getColor() const
{
    return color_;
}

void LanguagesDto::setColor(const std::string& value)
{
    color_ = value;
    colorIsSet_ = true;
}

bool LanguagesDto::colorIsSet() const
{
    return colorIsSet_;
}

void LanguagesDto::unsetcolor()
{
    colorIsSet_ = false;
}

std::string LanguagesDto::getLabel() const
{
    return label_;
}

void LanguagesDto::setLabel(const std::string& value)
{
    label_ = value;
    labelIsSet_ = true;
}

bool LanguagesDto::labelIsSet() const
{
    return labelIsSet_;
}

void LanguagesDto::unsetlabel()
{
    labelIsSet_ = false;
}

double LanguagesDto::getValue() const
{
    return value_;
}

void LanguagesDto::setValue(double value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool LanguagesDto::valueIsSet() const
{
    return valueIsSet_;
}

void LanguagesDto::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


