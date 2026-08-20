

#include "huaweicloud/projectman/v4/model/LabelParam.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




LabelParam::LabelParam()
{
    labelType_ = "";
    labelTypeIsSet_ = false;
    color_ = "";
    colorIsSet_ = false;
    title_ = "";
    titleIsSet_ = false;
    categoryTypesIsSet_ = false;
}

LabelParam::~LabelParam() = default;

void LabelParam::validate()
{
}

web::json::value LabelParam::toJson() const
{
    web::json::value val = web::json::value::object();

    if(labelTypeIsSet_) {
        val[utility::conversions::to_string_t("label_type")] = ModelBase::toJson(labelType_);
    }
    if(colorIsSet_) {
        val[utility::conversions::to_string_t("color")] = ModelBase::toJson(color_);
    }
    if(titleIsSet_) {
        val[utility::conversions::to_string_t("title")] = ModelBase::toJson(title_);
    }
    if(categoryTypesIsSet_) {
        val[utility::conversions::to_string_t("category_types")] = ModelBase::toJson(categoryTypes_);
    }

    return val;
}
bool LabelParam::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("category_types"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("category_types"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCategoryTypes(refVal);
        }
    }
    return ok;
}


std::string LabelParam::getLabelType() const
{
    return labelType_;
}

void LabelParam::setLabelType(const std::string& value)
{
    labelType_ = value;
    labelTypeIsSet_ = true;
}

bool LabelParam::labelTypeIsSet() const
{
    return labelTypeIsSet_;
}

void LabelParam::unsetlabelType()
{
    labelTypeIsSet_ = false;
}

std::string LabelParam::getColor() const
{
    return color_;
}

void LabelParam::setColor(const std::string& value)
{
    color_ = value;
    colorIsSet_ = true;
}

bool LabelParam::colorIsSet() const
{
    return colorIsSet_;
}

void LabelParam::unsetcolor()
{
    colorIsSet_ = false;
}

std::string LabelParam::getTitle() const
{
    return title_;
}

void LabelParam::setTitle(const std::string& value)
{
    title_ = value;
    titleIsSet_ = true;
}

bool LabelParam::titleIsSet() const
{
    return titleIsSet_;
}

void LabelParam::unsettitle()
{
    titleIsSet_ = false;
}

std::vector<std::string>& LabelParam::getCategoryTypes()
{
    return categoryTypes_;
}

void LabelParam::setCategoryTypes(const std::vector<std::string>& value)
{
    categoryTypes_ = value;
    categoryTypesIsSet_ = true;
}

bool LabelParam::categoryTypesIsSet() const
{
    return categoryTypesIsSet_;
}

void LabelParam::unsetcategoryTypes()
{
    categoryTypesIsSet_ = false;
}

}
}
}
}
}


