

#include "huaweicloud/modelarts/v1/model/ShowOrderResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ShowOrderResponse::ShowOrderResponse()
{
    count_ = 0;
    countIsSet_ = false;
    itemsIsSet_ = false;
}

ShowOrderResponse::~ShowOrderResponse() = default;

void ShowOrderResponse::validate()
{
}

web::json::value ShowOrderResponse::toJson() const
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
bool ShowOrderResponse::fromJson(const web::json::value& val)
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
            std::vector<OrderDetailItem> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setItems(refVal);
        }
    }
    return ok;
}


int32_t ShowOrderResponse::getCount() const
{
    return count_;
}

void ShowOrderResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ShowOrderResponse::countIsSet() const
{
    return countIsSet_;
}

void ShowOrderResponse::unsetcount()
{
    countIsSet_ = false;
}

std::vector<OrderDetailItem>& ShowOrderResponse::getItems()
{
    return items_;
}

void ShowOrderResponse::setItems(const std::vector<OrderDetailItem>& value)
{
    items_ = value;
    itemsIsSet_ = true;
}

bool ShowOrderResponse::itemsIsSet() const
{
    return itemsIsSet_;
}

void ShowOrderResponse::unsetitems()
{
    itemsIsSet_ = false;
}

}
}
}
}
}


