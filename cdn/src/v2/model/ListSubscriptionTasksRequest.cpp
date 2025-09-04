

#include "huaweicloud/cdn/v2/model/ListSubscriptionTasksRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




ListSubscriptionTasksRequest::ListSubscriptionTasksRequest()
{
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
}

ListSubscriptionTasksRequest::~ListSubscriptionTasksRequest() = default;

void ListSubscriptionTasksRequest::validate()
{
}

web::json::value ListSubscriptionTasksRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }

    return val;
}
bool ListSubscriptionTasksRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    return ok;
}


int32_t ListSubscriptionTasksRequest::getLimit() const
{
    return limit_;
}

void ListSubscriptionTasksRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListSubscriptionTasksRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListSubscriptionTasksRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListSubscriptionTasksRequest::getOffset() const
{
    return offset_;
}

void ListSubscriptionTasksRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListSubscriptionTasksRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListSubscriptionTasksRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

}
}
}
}
}


