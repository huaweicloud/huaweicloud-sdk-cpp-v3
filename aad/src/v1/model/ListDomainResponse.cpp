

#include "huaweicloud/aad/v1/model/ListDomainResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V1 {
namespace Model {




ListDomainResponse::ListDomainResponse()
{
    count_ = 0;
    countIsSet_ = false;
    itemsIsSet_ = false;
}

ListDomainResponse::~ListDomainResponse() = default;

void ListDomainResponse::validate()
{
}

web::json::value ListDomainResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }
    if(itemsIsSet_) {
        val[utility::conversions::to_string_t("items")] = ModelBase::toJson(items_);
    }

    return val;
}
bool ListDomainResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("items"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("items"));
        if(!fieldValue.is_null())
        {
            std::vector<DomainInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setItems(refVal);
        }
    }
    return ok;
}


int32_t ListDomainResponse::getCount() const
{
    return count_;
}

void ListDomainResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ListDomainResponse::countIsSet() const
{
    return countIsSet_;
}

void ListDomainResponse::unsetcount()
{
    countIsSet_ = false;
}

std::vector<DomainInfo>& ListDomainResponse::getItems()
{
    return items_;
}

void ListDomainResponse::setItems(const std::vector<DomainInfo>& value)
{
    items_ = value;
    itemsIsSet_ = true;
}

bool ListDomainResponse::itemsIsSet() const
{
    return itemsIsSet_;
}

void ListDomainResponse::unsetitems()
{
    itemsIsSet_ = false;
}

}
}
}
}
}


