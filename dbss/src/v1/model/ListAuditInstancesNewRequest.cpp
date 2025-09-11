

#include "huaweicloud/dbss/v1/model/ListAuditInstancesNewRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




ListAuditInstancesNewRequest::ListAuditInstancesNewRequest()
{
    offset_ = "";
    offsetIsSet_ = false;
    limit_ = "";
    limitIsSet_ = false;
}

ListAuditInstancesNewRequest::~ListAuditInstancesNewRequest() = default;

void ListAuditInstancesNewRequest::validate()
{
}

web::json::value ListAuditInstancesNewRequest::toJson() const
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
bool ListAuditInstancesNewRequest::fromJson(const web::json::value& val)
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


std::string ListAuditInstancesNewRequest::getOffset() const
{
    return offset_;
}

void ListAuditInstancesNewRequest::setOffset(const std::string& value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListAuditInstancesNewRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListAuditInstancesNewRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ListAuditInstancesNewRequest::getLimit() const
{
    return limit_;
}

void ListAuditInstancesNewRequest::setLimit(const std::string& value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListAuditInstancesNewRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListAuditInstancesNewRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


