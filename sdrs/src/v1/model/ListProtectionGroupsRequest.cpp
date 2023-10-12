

#include "huaweicloud/sdrs/v1/model/ListProtectionGroupsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




ListProtectionGroupsRequest::ListProtectionGroupsRequest()
{
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    queryType_ = "";
    queryTypeIsSet_ = false;
    availabilityZone_ = "";
    availabilityZoneIsSet_ = false;
}

ListProtectionGroupsRequest::~ListProtectionGroupsRequest() = default;

void ListProtectionGroupsRequest::validate()
{
}

web::json::value ListProtectionGroupsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(queryTypeIsSet_) {
        val[utility::conversions::to_string_t("query_type")] = ModelBase::toJson(queryType_);
    }
    if(availabilityZoneIsSet_) {
        val[utility::conversions::to_string_t("availability_zone")] = ModelBase::toJson(availabilityZone_);
    }

    return val;
}
bool ListProtectionGroupsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("query_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("query_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQueryType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("availability_zone"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("availability_zone"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvailabilityZone(refVal);
        }
    }
    return ok;
}


int32_t ListProtectionGroupsRequest::getLimit() const
{
    return limit_;
}

void ListProtectionGroupsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListProtectionGroupsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListProtectionGroupsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListProtectionGroupsRequest::getOffset() const
{
    return offset_;
}

void ListProtectionGroupsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListProtectionGroupsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListProtectionGroupsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ListProtectionGroupsRequest::getStatus() const
{
    return status_;
}

void ListProtectionGroupsRequest::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListProtectionGroupsRequest::statusIsSet() const
{
    return statusIsSet_;
}

void ListProtectionGroupsRequest::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ListProtectionGroupsRequest::getName() const
{
    return name_;
}

void ListProtectionGroupsRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListProtectionGroupsRequest::nameIsSet() const
{
    return nameIsSet_;
}

void ListProtectionGroupsRequest::unsetname()
{
    nameIsSet_ = false;
}

std::string ListProtectionGroupsRequest::getQueryType() const
{
    return queryType_;
}

void ListProtectionGroupsRequest::setQueryType(const std::string& value)
{
    queryType_ = value;
    queryTypeIsSet_ = true;
}

bool ListProtectionGroupsRequest::queryTypeIsSet() const
{
    return queryTypeIsSet_;
}

void ListProtectionGroupsRequest::unsetqueryType()
{
    queryTypeIsSet_ = false;
}

std::string ListProtectionGroupsRequest::getAvailabilityZone() const
{
    return availabilityZone_;
}

void ListProtectionGroupsRequest::setAvailabilityZone(const std::string& value)
{
    availabilityZone_ = value;
    availabilityZoneIsSet_ = true;
}

bool ListProtectionGroupsRequest::availabilityZoneIsSet() const
{
    return availabilityZoneIsSet_;
}

void ListProtectionGroupsRequest::unsetavailabilityZone()
{
    availabilityZoneIsSet_ = false;
}

}
}
}
}
}


