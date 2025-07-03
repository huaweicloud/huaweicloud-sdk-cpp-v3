

#include "huaweicloud/live/v1/model/ListFlowsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




ListFlowsRequest::ListFlowsRequest()
{
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
}

ListFlowsRequest::~ListFlowsRequest() = default;

void ListFlowsRequest::validate()
{
}

web::json::value ListFlowsRequest::toJson() const
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
bool ListFlowsRequest::fromJson(const web::json::value& val)
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


int32_t ListFlowsRequest::getLimit() const
{
    return limit_;
}

void ListFlowsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListFlowsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListFlowsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListFlowsRequest::getOffset() const
{
    return offset_;
}

void ListFlowsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListFlowsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListFlowsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

}
}
}
}
}


