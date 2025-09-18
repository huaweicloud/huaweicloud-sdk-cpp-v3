

#include "huaweicloud/projectman/v4/model/ListIterationHistoriesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ListIterationHistoriesRequest::ListIterationHistoriesRequest()
{
    iterationId_ = 0;
    iterationIdIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListIterationHistoriesRequest::~ListIterationHistoriesRequest() = default;

void ListIterationHistoriesRequest::validate()
{
}

web::json::value ListIterationHistoriesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(iterationIdIsSet_) {
        val[utility::conversions::to_string_t("iteration_id")] = ModelBase::toJson(iterationId_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ListIterationHistoriesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("iteration_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("iteration_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIterationId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    return ok;
}


int32_t ListIterationHistoriesRequest::getIterationId() const
{
    return iterationId_;
}

void ListIterationHistoriesRequest::setIterationId(int32_t value)
{
    iterationId_ = value;
    iterationIdIsSet_ = true;
}

bool ListIterationHistoriesRequest::iterationIdIsSet() const
{
    return iterationIdIsSet_;
}

void ListIterationHistoriesRequest::unsetiterationId()
{
    iterationIdIsSet_ = false;
}

int32_t ListIterationHistoriesRequest::getOffset() const
{
    return offset_;
}

void ListIterationHistoriesRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListIterationHistoriesRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListIterationHistoriesRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListIterationHistoriesRequest::getLimit() const
{
    return limit_;
}

void ListIterationHistoriesRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListIterationHistoriesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListIterationHistoriesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


