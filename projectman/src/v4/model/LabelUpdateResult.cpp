

#include "huaweicloud/projectman/v4/model/LabelUpdateResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




LabelUpdateResult::LabelUpdateResult()
{
    categoryTypesIsSet_ = false;
    color_ = "";
    colorIsSet_ = false;
    title_ = "";
    titleIsSet_ = false;
}

LabelUpdateResult::~LabelUpdateResult() = default;

void LabelUpdateResult::validate()
{
}

web::json::value LabelUpdateResult::toJson() const
{
    web::json::value val = web::json::value::object();

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
bool LabelUpdateResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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


std::vector<std::string>& LabelUpdateResult::getCategoryTypes()
{
    return categoryTypes_;
}

void LabelUpdateResult::setCategoryTypes(const std::vector<std::string>& value)
{
    categoryTypes_ = value;
    categoryTypesIsSet_ = true;
}

bool LabelUpdateResult::categoryTypesIsSet() const
{
    return categoryTypesIsSet_;
}

void LabelUpdateResult::unsetcategoryTypes()
{
    categoryTypesIsSet_ = false;
}

std::string LabelUpdateResult::getColor() const
{
    return color_;
}

void LabelUpdateResult::setColor(const std::string& value)
{
    color_ = value;
    colorIsSet_ = true;
}

bool LabelUpdateResult::colorIsSet() const
{
    return colorIsSet_;
}

void LabelUpdateResult::unsetcolor()
{
    colorIsSet_ = false;
}

std::string LabelUpdateResult::getTitle() const
{
    return title_;
}

void LabelUpdateResult::setTitle(const std::string& value)
{
    title_ = value;
    titleIsSet_ = true;
}

bool LabelUpdateResult::titleIsSet() const
{
    return titleIsSet_;
}

void LabelUpdateResult::unsettitle()
{
    titleIsSet_ = false;
}

}
}
}
}
}


