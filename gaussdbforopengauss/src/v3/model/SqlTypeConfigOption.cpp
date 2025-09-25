

#include "huaweicloud/gaussdbforopengauss/v3/model/SqlTypeConfigOption.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




SqlTypeConfigOption::SqlTypeConfigOption()
{
    category_ = "";
    categoryIsSet_ = false;
    prefixesIsSet_ = false;
}

SqlTypeConfigOption::~SqlTypeConfigOption() = default;

void SqlTypeConfigOption::validate()
{
}

web::json::value SqlTypeConfigOption::toJson() const
{
    web::json::value val = web::json::value::object();

    if(categoryIsSet_) {
        val[utility::conversions::to_string_t("category")] = ModelBase::toJson(category_);
    }
    if(prefixesIsSet_) {
        val[utility::conversions::to_string_t("prefixes")] = ModelBase::toJson(prefixes_);
    }

    return val;
}
bool SqlTypeConfigOption::fromJson(const web::json::value& val)
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
    return ok;
}


std::string SqlTypeConfigOption::getCategory() const
{
    return category_;
}

void SqlTypeConfigOption::setCategory(const std::string& value)
{
    category_ = value;
    categoryIsSet_ = true;
}

bool SqlTypeConfigOption::categoryIsSet() const
{
    return categoryIsSet_;
}

void SqlTypeConfigOption::unsetcategory()
{
    categoryIsSet_ = false;
}

std::vector<std::string>& SqlTypeConfigOption::getPrefixes()
{
    return prefixes_;
}

void SqlTypeConfigOption::setPrefixes(const std::vector<std::string>& value)
{
    prefixes_ = value;
    prefixesIsSet_ = true;
}

bool SqlTypeConfigOption::prefixesIsSet() const
{
    return prefixesIsSet_;
}

void SqlTypeConfigOption::unsetprefixes()
{
    prefixesIsSet_ = false;
}

}
}
}
}
}


