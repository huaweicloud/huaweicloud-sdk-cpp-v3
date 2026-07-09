

#include "huaweicloud/dbss/v1/model/ListAuditInstancesLastRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




ListAuditInstancesLastRequest::ListAuditInstancesLastRequest()
{
    offset_ = "";
    offsetIsSet_ = false;
    limit_ = "";
    limitIsSet_ = false;
}

ListAuditInstancesLastRequest::~ListAuditInstancesLastRequest() = default;

void ListAuditInstancesLastRequest::validate()
{
}

web::json::value ListAuditInstancesLastRequest::toJson() const
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
bool ListAuditInstancesLastRequest::fromJson(const web::json::value& val)
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


std::string ListAuditInstancesLastRequest::getOffset() const
{
    return offset_;
}

void ListAuditInstancesLastRequest::setOffset(const std::string& value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListAuditInstancesLastRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListAuditInstancesLastRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ListAuditInstancesLastRequest::getLimit() const
{
    return limit_;
}

void ListAuditInstancesLastRequest::setLimit(const std::string& value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListAuditInstancesLastRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListAuditInstancesLastRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


