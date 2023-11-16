

#include "huaweicloud/aad/v1/model/ListProtectedIpResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V1 {
namespace Model {




ListProtectedIpResponse::ListProtectedIpResponse()
{
    total_ = 0;
    totalIsSet_ = false;
    itemsIsSet_ = false;
}

ListProtectedIpResponse::~ListProtectedIpResponse() = default;

void ListProtectedIpResponse::validate()
{
}

web::json::value ListProtectedIpResponse::toJson() const
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
bool ListProtectedIpResponse::fromJson(const web::json::value& val)
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
            std::vector<ProtectedIpResponse> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setItems(refVal);
        }
    }
    return ok;
}


int32_t ListProtectedIpResponse::getTotal() const
{
    return total_;
}

void ListProtectedIpResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListProtectedIpResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListProtectedIpResponse::unsettotal()
{
    totalIsSet_ = false;
}

std::vector<ProtectedIpResponse>& ListProtectedIpResponse::getItems()
{
    return items_;
}

void ListProtectedIpResponse::setItems(const std::vector<ProtectedIpResponse>& value)
{
    items_ = value;
    itemsIsSet_ = true;
}

bool ListProtectedIpResponse::itemsIsSet() const
{
    return itemsIsSet_;
}

void ListProtectedIpResponse::unsetitems()
{
    itemsIsSet_ = false;
}

}
}
}
}
}


