

#include "huaweicloud/aad/v2/model/ListFrequencyControlRuleResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {
namespace Model {




ListFrequencyControlRuleResponse::ListFrequencyControlRuleResponse()
{
    total_ = 0;
    totalIsSet_ = false;
    itemsIsSet_ = false;
}

ListFrequencyControlRuleResponse::~ListFrequencyControlRuleResponse() = default;

void ListFrequencyControlRuleResponse::validate()
{
}

web::json::value ListFrequencyControlRuleResponse::toJson() const
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
bool ListFrequencyControlRuleResponse::fromJson(const web::json::value& val)
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
            std::vector<FrequencyControlRule> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setItems(refVal);
        }
    }
    return ok;
}


int32_t ListFrequencyControlRuleResponse::getTotal() const
{
    return total_;
}

void ListFrequencyControlRuleResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListFrequencyControlRuleResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListFrequencyControlRuleResponse::unsettotal()
{
    totalIsSet_ = false;
}

std::vector<FrequencyControlRule>& ListFrequencyControlRuleResponse::getItems()
{
    return items_;
}

void ListFrequencyControlRuleResponse::setItems(const std::vector<FrequencyControlRule>& value)
{
    items_ = value;
    itemsIsSet_ = true;
}

bool ListFrequencyControlRuleResponse::itemsIsSet() const
{
    return itemsIsSet_;
}

void ListFrequencyControlRuleResponse::unsetitems()
{
    itemsIsSet_ = false;
}

}
}
}
}
}


