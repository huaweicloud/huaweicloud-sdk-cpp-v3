

#include "huaweicloud/cloudtable/v2/model/ListClustersRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtable {
namespace V2 {
namespace Model {




ListClustersRequest::ListClustersRequest()
{
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListClustersRequest::~ListClustersRequest() = default;

void ListClustersRequest::validate()
{
}

web::json::value ListClustersRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}

bool ListClustersRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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


int32_t ListClustersRequest::getOffset() const
{
    return offset_;
}

void ListClustersRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListClustersRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListClustersRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListClustersRequest::getLimit() const
{
    return limit_;
}

void ListClustersRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListClustersRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListClustersRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


