

#include "huaweicloud/sdrs/v1/model/ListReplicationsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




ListReplicationsRequest::ListReplicationsRequest()
{
    serverGroupId_ = "";
    serverGroupIdIsSet_ = false;
    serverGroupIds_ = "";
    serverGroupIdsIsSet_ = false;
    protectedInstanceId_ = "";
    protectedInstanceIdIsSet_ = false;
    protectedInstanceIds_ = "";
    protectedInstanceIdsIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    queryType_ = "";
    queryTypeIsSet_ = false;
    availabilityZone_ = "";
    availabilityZoneIsSet_ = false;
}

ListReplicationsRequest::~ListReplicationsRequest() = default;

void ListReplicationsRequest::validate()
{
}

web::json::value ListReplicationsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serverGroupIdIsSet_) {
        val[utility::conversions::to_string_t("server_group_id")] = ModelBase::toJson(serverGroupId_);
    }
    if(serverGroupIdsIsSet_) {
        val[utility::conversions::to_string_t("server_group_ids")] = ModelBase::toJson(serverGroupIds_);
    }
    if(protectedInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("protected_instance_id")] = ModelBase::toJson(protectedInstanceId_);
    }
    if(protectedInstanceIdsIsSet_) {
        val[utility::conversions::to_string_t("protected_instance_ids")] = ModelBase::toJson(protectedInstanceIds_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(queryTypeIsSet_) {
        val[utility::conversions::to_string_t("query_type")] = ModelBase::toJson(queryType_);
    }
    if(availabilityZoneIsSet_) {
        val[utility::conversions::to_string_t("availability_zone")] = ModelBase::toJson(availabilityZone_);
    }

    return val;
}
bool ListReplicationsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("protected_instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("protected_instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProtectedInstanceId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
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


std::string ListReplicationsRequest::getServerGroupId() const
{
    return serverGroupId_;
}

void ListReplicationsRequest::setServerGroupId(const std::string& value)
{
    serverGroupId_ = value;
    serverGroupIdIsSet_ = true;
}

bool ListReplicationsRequest::serverGroupIdIsSet() const
{
    return serverGroupIdIsSet_;
}

void ListReplicationsRequest::unsetserverGroupId()
{
    serverGroupIdIsSet_ = false;
}

std::string ListReplicationsRequest::getServerGroupIds() const
{
    return serverGroupIds_;
}

void ListReplicationsRequest::setServerGroupIds(const std::string& value)
{
    serverGroupIds_ = value;
    serverGroupIdsIsSet_ = true;
}

bool ListReplicationsRequest::serverGroupIdsIsSet() const
{
    return serverGroupIdsIsSet_;
}

void ListReplicationsRequest::unsetserverGroupIds()
{
    serverGroupIdsIsSet_ = false;
}

std::string ListReplicationsRequest::getProtectedInstanceId() const
{
    return protectedInstanceId_;
}

void ListReplicationsRequest::setProtectedInstanceId(const std::string& value)
{
    protectedInstanceId_ = value;
    protectedInstanceIdIsSet_ = true;
}

bool ListReplicationsRequest::protectedInstanceIdIsSet() const
{
    return protectedInstanceIdIsSet_;
}

void ListReplicationsRequest::unsetprotectedInstanceId()
{
    protectedInstanceIdIsSet_ = false;
}

std::string ListReplicationsRequest::getProtectedInstanceIds() const
{
    return protectedInstanceIds_;
}

void ListReplicationsRequest::setProtectedInstanceIds(const std::string& value)
{
    protectedInstanceIds_ = value;
    protectedInstanceIdsIsSet_ = true;
}

bool ListReplicationsRequest::protectedInstanceIdsIsSet() const
{
    return protectedInstanceIdsIsSet_;
}

void ListReplicationsRequest::unsetprotectedInstanceIds()
{
    protectedInstanceIdsIsSet_ = false;
}

std::string ListReplicationsRequest::getName() const
{
    return name_;
}

void ListReplicationsRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListReplicationsRequest::nameIsSet() const
{
    return nameIsSet_;
}

void ListReplicationsRequest::unsetname()
{
    nameIsSet_ = false;
}

std::string ListReplicationsRequest::getStatus() const
{
    return status_;
}

void ListReplicationsRequest::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListReplicationsRequest::statusIsSet() const
{
    return statusIsSet_;
}

void ListReplicationsRequest::unsetstatus()
{
    statusIsSet_ = false;
}

int32_t ListReplicationsRequest::getLimit() const
{
    return limit_;
}

void ListReplicationsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListReplicationsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListReplicationsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListReplicationsRequest::getOffset() const
{
    return offset_;
}

void ListReplicationsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListReplicationsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListReplicationsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ListReplicationsRequest::getQueryType() const
{
    return queryType_;
}

void ListReplicationsRequest::setQueryType(const std::string& value)
{
    queryType_ = value;
    queryTypeIsSet_ = true;
}

bool ListReplicationsRequest::queryTypeIsSet() const
{
    return queryTypeIsSet_;
}

void ListReplicationsRequest::unsetqueryType()
{
    queryTypeIsSet_ = false;
}

std::string ListReplicationsRequest::getAvailabilityZone() const
{
    return availabilityZone_;
}

void ListReplicationsRequest::setAvailabilityZone(const std::string& value)
{
    availabilityZone_ = value;
    availabilityZoneIsSet_ = true;
}

bool ListReplicationsRequest::availabilityZoneIsSet() const
{
    return availabilityZoneIsSet_;
}

void ListReplicationsRequest::unsetavailabilityZone()
{
    availabilityZoneIsSet_ = false;
}

}
}
}
}
}


