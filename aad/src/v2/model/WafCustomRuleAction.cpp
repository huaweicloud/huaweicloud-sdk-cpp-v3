

#include "huaweicloud/aad/v2/model/WafCustomRuleAction.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {
namespace Model {




WafCustomRuleAction::WafCustomRuleAction()
{
    category_ = "";
    categoryIsSet_ = false;
}

WafCustomRuleAction::~WafCustomRuleAction() = default;

void WafCustomRuleAction::validate()
{
}

web::json::value WafCustomRuleAction::toJson() const
{
    web::json::value val = web::json::value::object();

    if(categoryIsSet_) {
        val[utility::conversions::to_string_t("category")] = ModelBase::toJson(category_);
    }

    return val;
}
bool WafCustomRuleAction::fromJson(const web::json::value& val)
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
    return ok;
}


std::string WafCustomRuleAction::getCategory() const
{
    return category_;
}

void WafCustomRuleAction::setCategory(const std::string& value)
{
    category_ = value;
    categoryIsSet_ = true;
}

bool WafCustomRuleAction::categoryIsSet() const
{
    return categoryIsSet_;
}

void WafCustomRuleAction::unsetcategory()
{
    categoryIsSet_ = false;
}

}
}
}
}
}


