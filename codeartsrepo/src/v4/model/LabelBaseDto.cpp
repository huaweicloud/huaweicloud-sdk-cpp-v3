

#include "huaweicloud/codeartsrepo/v4/model/LabelBaseDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




LabelBaseDto::LabelBaseDto()
{
    id_ = 0;
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    color_ = "";
    colorIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    textColor_ = "";
    textColorIsSet_ = false;
}

LabelBaseDto::~LabelBaseDto() = default;

void LabelBaseDto::validate()
{
}

web::json::value LabelBaseDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(colorIsSet_) {
        val[utility::conversions::to_string_t("color")] = ModelBase::toJson(color_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(textColorIsSet_) {
        val[utility::conversions::to_string_t("text_color")] = ModelBase::toJson(textColor_);
    }

    return val;
}
bool LabelBaseDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("color"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("color"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setColor(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("text_color"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("text_color"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTextColor(refVal);
        }
    }
    return ok;
}


int32_t LabelBaseDto::getId() const
{
    return id_;
}

void LabelBaseDto::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool LabelBaseDto::idIsSet() const
{
    return idIsSet_;
}

void LabelBaseDto::unsetid()
{
    idIsSet_ = false;
}

std::string LabelBaseDto::getName() const
{
    return name_;
}

void LabelBaseDto::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool LabelBaseDto::nameIsSet() const
{
    return nameIsSet_;
}

void LabelBaseDto::unsetname()
{
    nameIsSet_ = false;
}

std::string LabelBaseDto::getColor() const
{
    return color_;
}

void LabelBaseDto::setColor(const std::string& value)
{
    color_ = value;
    colorIsSet_ = true;
}

bool LabelBaseDto::colorIsSet() const
{
    return colorIsSet_;
}

void LabelBaseDto::unsetcolor()
{
    colorIsSet_ = false;
}

std::string LabelBaseDto::getDescription() const
{
    return description_;
}

void LabelBaseDto::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool LabelBaseDto::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void LabelBaseDto::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string LabelBaseDto::getTextColor() const
{
    return textColor_;
}

void LabelBaseDto::setTextColor(const std::string& value)
{
    textColor_ = value;
    textColorIsSet_ = true;
}

bool LabelBaseDto::textColorIsSet() const
{
    return textColorIsSet_;
}

void LabelBaseDto::unsettextColor()
{
    textColorIsSet_ = false;
}

}
}
}
}
}


