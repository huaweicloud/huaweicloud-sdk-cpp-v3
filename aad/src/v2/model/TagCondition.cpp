

#include "huaweicloud/aad/v2/model/TagCondition.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {
namespace Model {




TagCondition::TagCondition()
{
    category_ = "";
    categoryIsSet_ = false;
    contentsIsSet_ = false;
}

TagCondition::~TagCondition() = default;

void TagCondition::validate()
{
}

web::json::value TagCondition::toJson() const
{
    web::json::value val = web::json::value::object();

    if(categoryIsSet_) {
        val[utility::conversions::to_string_t("category")] = ModelBase::toJson(category_);
    }
    if(contentsIsSet_) {
        val[utility::conversions::to_string_t("contents")] = ModelBase::toJson(contents_);
    }

    return val;
}
bool TagCondition::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("contents"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("contents"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContents(refVal);
        }
    }
    return ok;
}


std::string TagCondition::getCategory() const
{
    return category_;
}

void TagCondition::setCategory(const std::string& value)
{
    category_ = value;
    categoryIsSet_ = true;
}

bool TagCondition::categoryIsSet() const
{
    return categoryIsSet_;
}

void TagCondition::unsetcategory()
{
    categoryIsSet_ = false;
}

std::vector<std::string>& TagCondition::getContents()
{
    return contents_;
}

void TagCondition::setContents(const std::vector<std::string>& value)
{
    contents_ = value;
    contentsIsSet_ = true;
}

bool TagCondition::contentsIsSet() const
{
    return contentsIsSet_;
}

void TagCondition::unsetcontents()
{
    contentsIsSet_ = false;
}

}
}
}
}
}


