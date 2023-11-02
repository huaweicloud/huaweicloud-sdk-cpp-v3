

#include "huaweicloud/dbss/v1/model/ListAuditInstancesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




ListAuditInstancesRequest::ListAuditInstancesRequest()
{
    offset_ = "";
    offsetIsSet_ = false;
    limit_ = "";
    limitIsSet_ = false;
}

ListAuditInstancesRequest::~ListAuditInstancesRequest() = default;

void ListAuditInstancesRequest::validate()
{
}

web::json::value ListAuditInstancesRequest::toJson() const
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
bool ListAuditInstancesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    return ok;
}


std::string ListAuditInstancesRequest::getOffset() const
{
    return offset_;
}

void ListAuditInstancesRequest::setOffset(const std::string& value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListAuditInstancesRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListAuditInstancesRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ListAuditInstancesRequest::getLimit() const
{
    return limit_;
}

void ListAuditInstancesRequest::setLimit(const std::string& value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListAuditInstancesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListAuditInstancesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


