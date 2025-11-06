

#include "huaweicloud/codeartsrepo/v4/model/LabelSimpleDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




LabelSimpleDto::LabelSimpleDto()
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
    expiresAt_ = "";
    expiresAtIsSet_ = false;
    isExpired_ = false;
    isExpiredIsSet_ = false;
}

LabelSimpleDto::~LabelSimpleDto() = default;

void LabelSimpleDto::validate()
{
}

web::json::value LabelSimpleDto::toJson() const
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
    if(expiresAtIsSet_) {
        val[utility::conversions::to_string_t("expires_at")] = ModelBase::toJson(expiresAt_);
    }
    if(isExpiredIsSet_) {
        val[utility::conversions::to_string_t("is_expired")] = ModelBase::toJson(isExpired_);
    }

    return val;
}
bool LabelSimpleDto::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("expires_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("expires_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExpiresAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_expired"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_expired"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsExpired(refVal);
        }
    }
    return ok;
}


int32_t LabelSimpleDto::getId() const
{
    return id_;
}

void LabelSimpleDto::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool LabelSimpleDto::idIsSet() const
{
    return idIsSet_;
}

void LabelSimpleDto::unsetid()
{
    idIsSet_ = false;
}

std::string LabelSimpleDto::getName() const
{
    return name_;
}

void LabelSimpleDto::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool LabelSimpleDto::nameIsSet() const
{
    return nameIsSet_;
}

void LabelSimpleDto::unsetname()
{
    nameIsSet_ = false;
}

std::string LabelSimpleDto::getColor() const
{
    return color_;
}

void LabelSimpleDto::setColor(const std::string& value)
{
    color_ = value;
    colorIsSet_ = true;
}

bool LabelSimpleDto::colorIsSet() const
{
    return colorIsSet_;
}

void LabelSimpleDto::unsetcolor()
{
    colorIsSet_ = false;
}

std::string LabelSimpleDto::getDescription() const
{
    return description_;
}

void LabelSimpleDto::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool LabelSimpleDto::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void LabelSimpleDto::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string LabelSimpleDto::getTextColor() const
{
    return textColor_;
}

void LabelSimpleDto::setTextColor(const std::string& value)
{
    textColor_ = value;
    textColorIsSet_ = true;
}

bool LabelSimpleDto::textColorIsSet() const
{
    return textColorIsSet_;
}

void LabelSimpleDto::unsettextColor()
{
    textColorIsSet_ = false;
}

std::string LabelSimpleDto::getExpiresAt() const
{
    return expiresAt_;
}

void LabelSimpleDto::setExpiresAt(const std::string& value)
{
    expiresAt_ = value;
    expiresAtIsSet_ = true;
}

bool LabelSimpleDto::expiresAtIsSet() const
{
    return expiresAtIsSet_;
}

void LabelSimpleDto::unsetexpiresAt()
{
    expiresAtIsSet_ = false;
}

bool LabelSimpleDto::isIsExpired() const
{
    return isExpired_;
}

void LabelSimpleDto::setIsExpired(bool value)
{
    isExpired_ = value;
    isExpiredIsSet_ = true;
}

bool LabelSimpleDto::isExpiredIsSet() const
{
    return isExpiredIsSet_;
}

void LabelSimpleDto::unsetisExpired()
{
    isExpiredIsSet_ = false;
}

}
}
}
}
}


