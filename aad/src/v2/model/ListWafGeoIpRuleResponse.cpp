

#include "huaweicloud/aad/v2/model/ListWafGeoIpRuleResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {
namespace Model {




ListWafGeoIpRuleResponse::ListWafGeoIpRuleResponse()
{
    total_ = 0;
    totalIsSet_ = false;
    itemsIsSet_ = false;
}

ListWafGeoIpRuleResponse::~ListWafGeoIpRuleResponse() = default;

void ListWafGeoIpRuleResponse::validate()
{
}

web::json::value ListWafGeoIpRuleResponse::toJson() const
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
bool ListWafGeoIpRuleResponse::fromJson(const web::json::value& val)
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
            std::vector<WafGeoIpRule> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setItems(refVal);
        }
    }
    return ok;
}


int32_t ListWafGeoIpRuleResponse::getTotal() const
{
    return total_;
}

void ListWafGeoIpRuleResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListWafGeoIpRuleResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListWafGeoIpRuleResponse::unsettotal()
{
    totalIsSet_ = false;
}

std::vector<WafGeoIpRule>& ListWafGeoIpRuleResponse::getItems()
{
    return items_;
}

void ListWafGeoIpRuleResponse::setItems(const std::vector<WafGeoIpRule>& value)
{
    items_ = value;
    itemsIsSet_ = true;
}

bool ListWafGeoIpRuleResponse::itemsIsSet() const
{
    return itemsIsSet_;
}

void ListWafGeoIpRuleResponse::unsetitems()
{
    itemsIsSet_ = false;
}

}
}
}
}
}


