

#include "huaweicloud/cdn/v2/model/ListSubscriptionTasksResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




ListSubscriptionTasksResponse::ListSubscriptionTasksResponse()
{
    total_ = 0;
    totalIsSet_ = false;
    dataIsSet_ = false;
}

ListSubscriptionTasksResponse::~ListSubscriptionTasksResponse() = default;

void ListSubscriptionTasksResponse::validate()
{
}

web::json::value ListSubscriptionTasksResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool ListSubscriptionTasksResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            std::vector<SubscriptionTask> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


int32_t ListSubscriptionTasksResponse::getTotal() const
{
    return total_;
}

void ListSubscriptionTasksResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListSubscriptionTasksResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListSubscriptionTasksResponse::unsettotal()
{
    totalIsSet_ = false;
}

std::vector<SubscriptionTask>& ListSubscriptionTasksResponse::getData()
{
    return data_;
}

void ListSubscriptionTasksResponse::setData(const std::vector<SubscriptionTask>& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ListSubscriptionTasksResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ListSubscriptionTasksResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


