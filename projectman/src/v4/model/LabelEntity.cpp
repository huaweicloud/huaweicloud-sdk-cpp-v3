

#include "huaweicloud/projectman/v4/model/LabelEntity.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




LabelEntity::LabelEntity()
{
    id_ = "";
    idIsSet_ = false;
    labelType_ = "";
    labelTypeIsSet_ = false;
    color_ = "";
    colorIsSet_ = false;
    title_ = "";
    titleIsSet_ = false;
}

LabelEntity::~LabelEntity() = default;

void LabelEntity::validate()
{
}

web::json::value LabelEntity::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(labelTypeIsSet_) {
        val[utility::conversions::to_string_t("label_type")] = ModelBase::toJson(labelType_);
    }
    if(colorIsSet_) {
        val[utility::conversions::to_string_t("color")] = ModelBase::toJson(color_);
    }
    if(titleIsSet_) {
        val[utility::conversions::to_string_t("title")] = ModelBase::toJson(title_);
    }

    return val;
}
bool LabelEntity::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("label_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("label_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLabelType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("title"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("title"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTitle(refVal);
        }
    }
    return ok;
}


std::string LabelEntity::getId() const
{
    return id_;
}

void LabelEntity::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool LabelEntity::idIsSet() const
{
    return idIsSet_;
}

void LabelEntity::unsetid()
{
    idIsSet_ = false;
}

std::string LabelEntity::getLabelType() const
{
    return labelType_;
}

void LabelEntity::setLabelType(const std::string& value)
{
    labelType_ = value;
    labelTypeIsSet_ = true;
}

bool LabelEntity::labelTypeIsSet() const
{
    return labelTypeIsSet_;
}

void LabelEntity::unsetlabelType()
{
    labelTypeIsSet_ = false;
}

std::string LabelEntity::getColor() const
{
    return color_;
}

void LabelEntity::setColor(const std::string& value)
{
    color_ = value;
    colorIsSet_ = true;
}

bool LabelEntity::colorIsSet() const
{
    return colorIsSet_;
}

void LabelEntity::unsetcolor()
{
    colorIsSet_ = false;
}

std::string LabelEntity::getTitle() const
{
    return title_;
}

void LabelEntity::setTitle(const std::string& value)
{
    title_ = value;
    titleIsSet_ = true;
}

bool LabelEntity::titleIsSet() const
{
    return titleIsSet_;
}

void LabelEntity::unsettitle()
{
    titleIsSet_ = false;
}

}
}
}
}
}


