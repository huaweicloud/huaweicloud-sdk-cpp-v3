

#include "huaweicloud/live/v1/model/ListSnapshotConfigsRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




ListSnapshotConfigsRequest::ListSnapshotConfigsRequest()
{
    domain_ = "";
    domainIsSet_ = false;
    appName_ = "";
    appNameIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
}

ListSnapshotConfigsRequest::~ListSnapshotConfigsRequest() = default;

void ListSnapshotConfigsRequest::validate()
{
}

web::json::value ListSnapshotConfigsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainIsSet_) {
        val[utility::conversions::to_string_t("domain")] = ModelBase::toJson(domain_);
    }
    if(appNameIsSet_) {
        val[utility::conversions::to_string_t("app_name")] = ModelBase::toJson(appName_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }

    return val;
}

bool ListSnapshotConfigsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("domain"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomain(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("app_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppName(refVal);
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

std::string ListSnapshotConfigsRequest::getDomain() const
{
    return domain_;
}

void ListSnapshotConfigsRequest::setDomain(const std::string& value)
{
    domain_ = value;
    domainIsSet_ = true;
}

bool ListSnapshotConfigsRequest::domainIsSet() const
{
    return domainIsSet_;
}

void ListSnapshotConfigsRequest::unsetdomain()
{
    domainIsSet_ = false;
}

std::string ListSnapshotConfigsRequest::getAppName() const
{
    return appName_;
}

void ListSnapshotConfigsRequest::setAppName(const std::string& value)
{
    appName_ = value;
    appNameIsSet_ = true;
}

bool ListSnapshotConfigsRequest::appNameIsSet() const
{
    return appNameIsSet_;
}

void ListSnapshotConfigsRequest::unsetappName()
{
    appNameIsSet_ = false;
}

int32_t ListSnapshotConfigsRequest::getLimit() const
{
    return limit_;
}

void ListSnapshotConfigsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListSnapshotConfigsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListSnapshotConfigsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListSnapshotConfigsRequest::getOffset() const
{
    return offset_;
}

void ListSnapshotConfigsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListSnapshotConfigsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListSnapshotConfigsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

}
}
}
}
}


