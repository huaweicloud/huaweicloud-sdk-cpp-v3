

#include "huaweicloud/dbss/v1/model/ListAuditSummaryInfosRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




ListAuditSummaryInfosRequest::ListAuditSummaryInfosRequest()
{
    offset_ = "";
    offsetIsSet_ = false;
    limit_ = "";
    limitIsSet_ = false;
}

ListAuditSummaryInfosRequest::~ListAuditSummaryInfosRequest() = default;

void ListAuditSummaryInfosRequest::validate()
{
}

web::json::value ListAuditSummaryInfosRequest::toJson() const
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
bool ListAuditSummaryInfosRequest::fromJson(const web::json::value& val)
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


std::string ListAuditSummaryInfosRequest::getOffset() const
{
    return offset_;
}

void ListAuditSummaryInfosRequest::setOffset(const std::string& value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListAuditSummaryInfosRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListAuditSummaryInfosRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ListAuditSummaryInfosRequest::getLimit() const
{
    return limit_;
}

void ListAuditSummaryInfosRequest::setLimit(const std::string& value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListAuditSummaryInfosRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListAuditSummaryInfosRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


