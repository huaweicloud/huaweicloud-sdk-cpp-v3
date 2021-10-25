

#include "huaweicloud/sdrs/v1/model/ListProtectedInstancesRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




ListProtectedInstancesRequest::ListProtectedInstancesRequest()
{
    serverGroupId_ = "";
    serverGroupIdIsSet_ = false;
    serverGroupIds_ = "";
    serverGroupIdsIsSet_ = false;
    protectedInstanceIds_ = "";
    protectedInstanceIdsIsSet_ = false;
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

ListProtectedInstancesRequest::~ListProtectedInstancesRequest() = default;

void ListProtectedInstancesRequest::validate()
{
}

web::json::value ListProtectedInstancesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serverGroupIdIsSet_) {
        val[utility::conversions::to_string_t("server_group_id")] = ModelBase::toJson(serverGroupId_);
    }
    if(serverGroupIdsIsSet_) {
        val[utility::conversions::to_string_t("server_group_ids")] = ModelBase::toJson(serverGroupIds_);
    }
    if(protectedInstanceIdsIsSet_) {
        val[utility::conversions::to_string_t("protected_instance_ids")] = ModelBase::toJson(protectedInstanceIds_);
    }
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

bool ListProtectedInstancesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("server_group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("server_group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServerGroupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("server_group_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("server_group_ids"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServerGroupIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("protected_instance_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("protected_instance_ids"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProtectedInstanceIds(refVal);
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


std::string ListProtectedInstancesRequest::getServerGroupId() const
{
    return serverGroupId_;
}

void ListProtectedInstancesRequest::setServerGroupId(const std::string& value)
{
    serverGroupId_ = value;
    serverGroupIdIsSet_ = true;
}

bool ListProtectedInstancesRequest::serverGroupIdIsSet() const
{
    return serverGroupIdIsSet_;
}

void ListProtectedInstancesRequest::unsetserverGroupId()
{
    serverGroupIdIsSet_ = false;
}

std::string ListProtectedInstancesRequest::getServerGroupIds() const
{
    return serverGroupIds_;
}

void ListProtectedInstancesRequest::setServerGroupIds(const std::string& value)
{
    serverGroupIds_ = value;
    serverGroupIdsIsSet_ = true;
}

bool ListProtectedInstancesRequest::serverGroupIdsIsSet() const
{
    return serverGroupIdsIsSet_;
}

void ListProtectedInstancesRequest::unsetserverGroupIds()
{
    serverGroupIdsIsSet_ = false;
}

std::string ListProtectedInstancesRequest::getProtectedInstanceIds() const
{
    return protectedInstanceIds_;
}

void ListProtectedInstancesRequest::setProtectedInstanceIds(const std::string& value)
{
    protectedInstanceIds_ = value;
    protectedInstanceIdsIsSet_ = true;
}

bool ListProtectedInstancesRequest::protectedInstanceIdsIsSet() const
{
    return protectedInstanceIdsIsSet_;
}

void ListProtectedInstancesRequest::unsetprotectedInstanceIds()
{
    protectedInstanceIdsIsSet_ = false;
}

int32_t ListProtectedInstancesRequest::getLimit() const
{
    return limit_;
}

void ListProtectedInstancesRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListProtectedInstancesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListProtectedInstancesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListProtectedInstancesRequest::getOffset() const
{
    return offset_;
}

void ListProtectedInstancesRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListProtectedInstancesRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListProtectedInstancesRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ListProtectedInstancesRequest::getStatus() const
{
    return status_;
}

void ListProtectedInstancesRequest::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListProtectedInstancesRequest::statusIsSet() const
{
    return statusIsSet_;
}

void ListProtectedInstancesRequest::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ListProtectedInstancesRequest::getName() const
{
    return name_;
}

void ListProtectedInstancesRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListProtectedInstancesRequest::nameIsSet() const
{
    return nameIsSet_;
}

void ListProtectedInstancesRequest::unsetname()
{
    nameIsSet_ = false;
}

std::string ListProtectedInstancesRequest::getQueryType() const
{
    return queryType_;
}

void ListProtectedInstancesRequest::setQueryType(const std::string& value)
{
    queryType_ = value;
    queryTypeIsSet_ = true;
}

bool ListProtectedInstancesRequest::queryTypeIsSet() const
{
    return queryTypeIsSet_;
}

void ListProtectedInstancesRequest::unsetqueryType()
{
    queryTypeIsSet_ = false;
}

std::string ListProtectedInstancesRequest::getAvailabilityZone() const
{
    return availabilityZone_;
}

void ListProtectedInstancesRequest::setAvailabilityZone(const std::string& value)
{
    availabilityZone_ = value;
    availabilityZoneIsSet_ = true;
}

bool ListProtectedInstancesRequest::availabilityZoneIsSet() const
{
    return availabilityZoneIsSet_;
}

void ListProtectedInstancesRequest::unsetavailabilityZone()
{
    availabilityZoneIsSet_ = false;
}

}
}
}
}
}


