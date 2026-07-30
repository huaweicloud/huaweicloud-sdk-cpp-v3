

#include "huaweicloud/modelarts/v1/model/ListPoolTagsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ListPoolTagsRequest::ListPoolTagsRequest()
{
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
}

ListPoolTagsRequest::~ListPoolTagsRequest() = default;

void ListPoolTagsRequest::validate()
{
}

web::json::value ListPoolTagsRequest::toJson() const
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
bool ListPoolTagsRequest::fromJson(const web::json::value& val)
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


int32_t ListPoolTagsRequest::getLimit() const
{
    return limit_;
}

void ListPoolTagsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListPoolTagsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListPoolTagsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListPoolTagsRequest::getOffset() const
{
    return offset_;
}

void ListPoolTagsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListPoolTagsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListPoolTagsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

}
}
}
}
}


