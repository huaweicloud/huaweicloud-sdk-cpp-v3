

#include "huaweicloud/aad/v2/model/ListDDoSBlackHoleEventResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {
namespace Model {




ListDDoSBlackHoleEventResponse::ListDDoSBlackHoleEventResponse()
{
    itemsIsSet_ = false;
}

ListDDoSBlackHoleEventResponse::~ListDDoSBlackHoleEventResponse() = default;

void ListDDoSBlackHoleEventResponse::validate()
{
}

web::json::value ListDDoSBlackHoleEventResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(itemsIsSet_) {
        val[utility::conversions::to_string_t("items")] = ModelBase::toJson(items_);
    }

    return val;
}
bool ListDDoSBlackHoleEventResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("items"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("items"));
        if(!fieldValue.is_null())
        {
            std::vector<ListBlackHoleEventRecordItem> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setItems(refVal);
        }
    }
    return ok;
}


std::vector<ListBlackHoleEventRecordItem>& ListDDoSBlackHoleEventResponse::getItems()
{
    return items_;
}

void ListDDoSBlackHoleEventResponse::setItems(const std::vector<ListBlackHoleEventRecordItem>& value)
{
    items_ = value;
    itemsIsSet_ = true;
}

bool ListDDoSBlackHoleEventResponse::itemsIsSet() const
{
    return itemsIsSet_;
}

void ListDDoSBlackHoleEventResponse::unsetitems()
{
    itemsIsSet_ = false;
}

}
}
}
}
}


