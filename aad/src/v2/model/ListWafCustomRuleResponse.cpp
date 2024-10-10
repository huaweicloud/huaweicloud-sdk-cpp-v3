

#include "huaweicloud/aad/v2/model/ListWafCustomRuleResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {
namespace Model {




ListWafCustomRuleResponse::ListWafCustomRuleResponse()
{
    total_ = 0;
    totalIsSet_ = false;
    itemsIsSet_ = false;
}

ListWafCustomRuleResponse::~ListWafCustomRuleResponse() = default;

void ListWafCustomRuleResponse::validate()
{
}

web::json::value ListWafCustomRuleResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(itemsIsSet_) {
        val[utility::conversions::to_string_t("items")] = ModelBase::toJson(items_);
    }

    return val;
}
bool ListWafCustomRuleResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("items"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("items"));
        if(!fieldValue.is_null())
        {
            std::vector<WafCustomRule> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setItems(refVal);
        }
    }
    return ok;
}


int32_t ListWafCustomRuleResponse::getTotal() const
{
    return total_;
}

void ListWafCustomRuleResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListWafCustomRuleResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListWafCustomRuleResponse::unsettotal()
{
    totalIsSet_ = false;
}

std::vector<WafCustomRule>& ListWafCustomRuleResponse::getItems()
{
    return items_;
}

void ListWafCustomRuleResponse::setItems(const std::vector<WafCustomRule>& value)
{
    items_ = value;
    itemsIsSet_ = true;
}

bool ListWafCustomRuleResponse::itemsIsSet() const
{
    return itemsIsSet_;
}

void ListWafCustomRuleResponse::unsetitems()
{
    itemsIsSet_ = false;
}

}
}
}
}
}


