

#include "huaweicloud/gaussdbforopengauss/v3/model/SqlTypeRangeConfigResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




SqlTypeRangeConfigResult::SqlTypeRangeConfigResult()
{
    category_ = "";
    categoryIsSet_ = false;
    isPreset_ = false;
    isPresetIsSet_ = false;
}

SqlTypeRangeConfigResult::~SqlTypeRangeConfigResult() = default;

void SqlTypeRangeConfigResult::validate()
{
}

web::json::value SqlTypeRangeConfigResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(categoryIsSet_) {
        val[utility::conversions::to_string_t("category")] = ModelBase::toJson(category_);
    }
    if(isPresetIsSet_) {
        val[utility::conversions::to_string_t("is_preset")] = ModelBase::toJson(isPreset_);
    }

    return val;
}
bool SqlTypeRangeConfigResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("category"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("category"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCategory(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_preset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_preset"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsPreset(refVal);
        }
    }
    return ok;
}


std::string SqlTypeRangeConfigResult::getCategory() const
{
    return category_;
}

void SqlTypeRangeConfigResult::setCategory(const std::string& value)
{
    category_ = value;
    categoryIsSet_ = true;
}

bool SqlTypeRangeConfigResult::categoryIsSet() const
{
    return categoryIsSet_;
}

void SqlTypeRangeConfigResult::unsetcategory()
{
    categoryIsSet_ = false;
}

bool SqlTypeRangeConfigResult::isIsPreset() const
{
    return isPreset_;
}

void SqlTypeRangeConfigResult::setIsPreset(bool value)
{
    isPreset_ = value;
    isPresetIsSet_ = true;
}

bool SqlTypeRangeConfigResult::isPresetIsSet() const
{
    return isPresetIsSet_;
}

void SqlTypeRangeConfigResult::unsetisPreset()
{
    isPresetIsSet_ = false;
}

}
}
}
}
}


