

#include "huaweicloud/gaussdbforopengauss/v3/model/SqlTypeInfoResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




SqlTypeInfoResult::SqlTypeInfoResult()
{
    category_ = "";
    categoryIsSet_ = false;
    prefixesIsSet_ = false;
    isPreset_ = false;
    isPresetIsSet_ = false;
}

SqlTypeInfoResult::~SqlTypeInfoResult() = default;

void SqlTypeInfoResult::validate()
{
}

web::json::value SqlTypeInfoResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(categoryIsSet_) {
        val[utility::conversions::to_string_t("category")] = ModelBase::toJson(category_);
    }
    if(prefixesIsSet_) {
        val[utility::conversions::to_string_t("prefixes")] = ModelBase::toJson(prefixes_);
    }
    if(isPresetIsSet_) {
        val[utility::conversions::to_string_t("is_preset")] = ModelBase::toJson(isPreset_);
    }

    return val;
}
bool SqlTypeInfoResult::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("prefixes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("prefixes"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPrefixes(refVal);
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


std::string SqlTypeInfoResult::getCategory() const
{
    return category_;
}

void SqlTypeInfoResult::setCategory(const std::string& value)
{
    category_ = value;
    categoryIsSet_ = true;
}

bool SqlTypeInfoResult::categoryIsSet() const
{
    return categoryIsSet_;
}

void SqlTypeInfoResult::unsetcategory()
{
    categoryIsSet_ = false;
}

std::vector<std::string>& SqlTypeInfoResult::getPrefixes()
{
    return prefixes_;
}

void SqlTypeInfoResult::setPrefixes(const std::vector<std::string>& value)
{
    prefixes_ = value;
    prefixesIsSet_ = true;
}

bool SqlTypeInfoResult::prefixesIsSet() const
{
    return prefixesIsSet_;
}

void SqlTypeInfoResult::unsetprefixes()
{
    prefixesIsSet_ = false;
}

bool SqlTypeInfoResult::isIsPreset() const
{
    return isPreset_;
}

void SqlTypeInfoResult::setIsPreset(bool value)
{
    isPreset_ = value;
    isPresetIsSet_ = true;
}

bool SqlTypeInfoResult::isPresetIsSet() const
{
    return isPresetIsSet_;
}

void SqlTypeInfoResult::unsetisPreset()
{
    isPresetIsSet_ = false;
}

}
}
}
}
}


