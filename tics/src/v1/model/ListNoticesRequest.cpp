

#include "huaweicloud/tics/v1/model/ListNoticesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Tics {
namespace V1 {
namespace Model {




ListNoticesRequest::ListNoticesRequest()
{
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
}

ListNoticesRequest::~ListNoticesRequest() = default;

void ListNoticesRequest::validate()
{
}

web::json::value ListNoticesRequest::toJson() const
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
bool ListNoticesRequest::fromJson(const web::json::value& val)
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


int32_t ListNoticesRequest::getLimit() const
{
    return limit_;
}

void ListNoticesRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListNoticesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListNoticesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListNoticesRequest::getOffset() const
{
    return offset_;
}

void ListNoticesRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListNoticesRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListNoticesRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

}
}
}
}
}


