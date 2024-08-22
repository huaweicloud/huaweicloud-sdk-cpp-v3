

#include "huaweicloud/drs/v5/model/ListUserJdbcDriversResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ListUserJdbcDriversResponse::ListUserJdbcDriversResponse()
{
    count_ = 0;
    countIsSet_ = false;
    itemsIsSet_ = false;
}

ListUserJdbcDriversResponse::~ListUserJdbcDriversResponse() = default;

void ListUserJdbcDriversResponse::validate()
{
}

web::json::value ListUserJdbcDriversResponse::toJson() const
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
bool ListUserJdbcDriversResponse::fromJson(const web::json::value& val)
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
            std::vector<DriverInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setItems(refVal);
        }
    }
    return ok;
}


int32_t ListUserJdbcDriversResponse::getCount() const
{
    return count_;
}

void ListUserJdbcDriversResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ListUserJdbcDriversResponse::countIsSet() const
{
    return countIsSet_;
}

void ListUserJdbcDriversResponse::unsetcount()
{
    countIsSet_ = false;
}

std::vector<DriverInfo>& ListUserJdbcDriversResponse::getItems()
{
    return items_;
}

void ListUserJdbcDriversResponse::setItems(const std::vector<DriverInfo>& value)
{
    items_ = value;
    itemsIsSet_ = true;
}

bool ListUserJdbcDriversResponse::itemsIsSet() const
{
    return itemsIsSet_;
}

void ListUserJdbcDriversResponse::unsetitems()
{
    itemsIsSet_ = false;
}

}
}
}
}
}


