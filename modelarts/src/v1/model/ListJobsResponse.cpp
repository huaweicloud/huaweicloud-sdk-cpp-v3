

#include "huaweicloud/modelarts/v1/model/ListJobsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ListJobsResponse::ListJobsResponse()
{
    count_ = 0;
    countIsSet_ = false;
    itemsIsSet_ = false;
}

ListJobsResponse::~ListJobsResponse() = default;

void ListJobsResponse::validate()
{
}

web::json::value ListJobsResponse::toJson() const
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
bool ListJobsResponse::fromJson(const web::json::value& val)
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
            std::vector<PoolJob> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setItems(refVal);
        }
    }
    return ok;
}


int32_t ListJobsResponse::getCount() const
{
    return count_;
}

void ListJobsResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ListJobsResponse::countIsSet() const
{
    return countIsSet_;
}

void ListJobsResponse::unsetcount()
{
    countIsSet_ = false;
}

std::vector<PoolJob>& ListJobsResponse::getItems()
{
    return items_;
}

void ListJobsResponse::setItems(const std::vector<PoolJob>& value)
{
    items_ = value;
    itemsIsSet_ = true;
}

bool ListJobsResponse::itemsIsSet() const
{
    return itemsIsSet_;
}

void ListJobsResponse::unsetitems()
{
    itemsIsSet_ = false;
}

}
}
}
}
}


