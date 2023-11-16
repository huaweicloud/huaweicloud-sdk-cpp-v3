

#include "huaweicloud/aad/v1/model/ListInstanceResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V1 {
namespace Model {




ListInstanceResponse::ListInstanceResponse()
{
    count_ = 0;
    countIsSet_ = false;
    itemsIsSet_ = false;
}

ListInstanceResponse::~ListInstanceResponse() = default;

void ListInstanceResponse::validate()
{
}

web::json::value ListInstanceResponse::toJson() const
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
bool ListInstanceResponse::fromJson(const web::json::value& val)
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
            std::vector<InstanceInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setItems(refVal);
        }
    }
    return ok;
}


int32_t ListInstanceResponse::getCount() const
{
    return count_;
}

void ListInstanceResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ListInstanceResponse::countIsSet() const
{
    return countIsSet_;
}

void ListInstanceResponse::unsetcount()
{
    countIsSet_ = false;
}

std::vector<InstanceInfo>& ListInstanceResponse::getItems()
{
    return items_;
}

void ListInstanceResponse::setItems(const std::vector<InstanceInfo>& value)
{
    items_ = value;
    itemsIsSet_ = true;
}

bool ListInstanceResponse::itemsIsSet() const
{
    return itemsIsSet_;
}

void ListInstanceResponse::unsetitems()
{
    itemsIsSet_ = false;
}

}
}
}
}
}


