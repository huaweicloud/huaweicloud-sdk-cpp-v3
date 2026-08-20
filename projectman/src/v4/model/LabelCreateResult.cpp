

#include "huaweicloud/projectman/v4/model/LabelCreateResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




LabelCreateResult::LabelCreateResult()
{
    id_ = "";
    idIsSet_ = false;
    categoryTypesIsSet_ = false;
    color_ = "";
    colorIsSet_ = false;
    title_ = "";
    titleIsSet_ = false;
}

LabelCreateResult::~LabelCreateResult() = default;

void LabelCreateResult::validate()
{
}

web::json::value LabelCreateResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(categoryTypesIsSet_) {
        val[utility::conversions::to_string_t("category_types")] = ModelBase::toJson(categoryTypes_);
    }
    if(colorIsSet_) {
        val[utility::conversions::to_string_t("color")] = ModelBase::toJson(color_);
    }
    if(titleIsSet_) {
        val[utility::conversions::to_string_t("title")] = ModelBase::toJson(title_);
    }

    return val;
}
bool LabelCreateResult::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("category_types"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("category_types"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCategoryTypes(refVal);
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


std::string LabelCreateResult::getId() const
{
    return id_;
}

void LabelCreateResult::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool LabelCreateResult::idIsSet() const
{
    return idIsSet_;
}

void LabelCreateResult::unsetid()
{
    idIsSet_ = false;
}

std::vector<std::string>& LabelCreateResult::getCategoryTypes()
{
    return categoryTypes_;
}

void LabelCreateResult::setCategoryTypes(const std::vector<std::string>& value)
{
    categoryTypes_ = value;
    categoryTypesIsSet_ = true;
}

bool LabelCreateResult::categoryTypesIsSet() const
{
    return categoryTypesIsSet_;
}

void LabelCreateResult::unsetcategoryTypes()
{
    categoryTypesIsSet_ = false;
}

std::string LabelCreateResult::getColor() const
{
    return color_;
}

void LabelCreateResult::setColor(const std::string& value)
{
    color_ = value;
    colorIsSet_ = true;
}

bool LabelCreateResult::colorIsSet() const
{
    return colorIsSet_;
}

void LabelCreateResult::unsetcolor()
{
    colorIsSet_ = false;
}

std::string LabelCreateResult::getTitle() const
{
    return title_;
}

void LabelCreateResult::setTitle(const std::string& value)
{
    title_ = value;
    titleIsSet_ = true;
}

bool LabelCreateResult::titleIsSet() const
{
    return titleIsSet_;
}

void LabelCreateResult::unsettitle()
{
    titleIsSet_ = false;
}

}
}
}
}
}


