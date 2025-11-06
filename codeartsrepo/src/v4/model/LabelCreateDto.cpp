

#include "huaweicloud/codeartsrepo/v4/model/LabelCreateDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




LabelCreateDto::LabelCreateDto()
{
    name_ = "";
    nameIsSet_ = false;
    color_ = "";
    colorIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    expiresAtIsSet_ = false;
}

LabelCreateDto::~LabelCreateDto() = default;

void LabelCreateDto::validate()
{
}

web::json::value LabelCreateDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(colorIsSet_) {
        val[utility::conversions::to_string_t("color")] = ModelBase::toJson(color_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(expiresAtIsSet_) {
        val[utility::conversions::to_string_t("expires_at")] = ModelBase::toJson(expiresAt_);
    }

    return val;
}
bool LabelCreateDto::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("expires_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("expires_at"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExpiresAt(refVal);
        }
    }
    return ok;
}


std::string LabelCreateDto::getName() const
{
    return name_;
}

void LabelCreateDto::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool LabelCreateDto::nameIsSet() const
{
    return nameIsSet_;
}

void LabelCreateDto::unsetname()
{
    nameIsSet_ = false;
}

std::string LabelCreateDto::getColor() const
{
    return color_;
}

void LabelCreateDto::setColor(const std::string& value)
{
    color_ = value;
    colorIsSet_ = true;
}

bool LabelCreateDto::colorIsSet() const
{
    return colorIsSet_;
}

void LabelCreateDto::unsetcolor()
{
    colorIsSet_ = false;
}

std::string LabelCreateDto::getDescription() const
{
    return description_;
}

void LabelCreateDto::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool LabelCreateDto::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void LabelCreateDto::unsetdescription()
{
    descriptionIsSet_ = false;
}

utility::datetime LabelCreateDto::getExpiresAt() const
{
    return expiresAt_;
}

void LabelCreateDto::setExpiresAt(const utility::datetime& value)
{
    expiresAt_ = value;
    expiresAtIsSet_ = true;
}

bool LabelCreateDto::expiresAtIsSet() const
{
    return expiresAtIsSet_;
}

void LabelCreateDto::unsetexpiresAt()
{
    expiresAtIsSet_ = false;
}

}
}
}
}
}


