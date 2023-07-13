

#include "huaweicloud/sdrs/v1/model/ListFailureJobsRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




ListFailureJobsRequest::ListFailureJobsRequest()
{
    failureStatus_ = "";
    failureStatusIsSet_ = false;
    resourceName_ = "";
    resourceNameIsSet_ = false;
    serverGroupId_ = "";
    serverGroupIdIsSet_ = false;
    resourceType_ = "";
    resourceTypeIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
}

ListFailureJobsRequest::~ListFailureJobsRequest() = default;

void ListFailureJobsRequest::validate()
{
}

web::json::value ListFailureJobsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(failureStatusIsSet_) {
        val[utility::conversions::to_string_t("failure_status")] = ModelBase::toJson(failureStatus_);
    }
    if(resourceNameIsSet_) {
        val[utility::conversions::to_string_t("resource_name")] = ModelBase::toJson(resourceName_);
    }
    if(serverGroupIdIsSet_) {
        val[utility::conversions::to_string_t("server_group_id")] = ModelBase::toJson(serverGroupId_);
    }
    if(resourceTypeIsSet_) {
        val[utility::conversions::to_string_t("resource_type")] = ModelBase::toJson(resourceType_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }

    return val;
}

bool ListFailureJobsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("failure_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("failure_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFailureStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("server_group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("server_group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServerGroupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceType(refVal);
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

std::string ListFailureJobsRequest::getFailureStatus() const
{
    return failureStatus_;
}

void ListFailureJobsRequest::setFailureStatus(const std::string& value)
{
    failureStatus_ = value;
    failureStatusIsSet_ = true;
}

bool ListFailureJobsRequest::failureStatusIsSet() const
{
    return failureStatusIsSet_;
}

void ListFailureJobsRequest::unsetfailureStatus()
{
    failureStatusIsSet_ = false;
}

std::string ListFailureJobsRequest::getResourceName() const
{
    return resourceName_;
}

void ListFailureJobsRequest::setResourceName(const std::string& value)
{
    resourceName_ = value;
    resourceNameIsSet_ = true;
}

bool ListFailureJobsRequest::resourceNameIsSet() const
{
    return resourceNameIsSet_;
}

void ListFailureJobsRequest::unsetresourceName()
{
    resourceNameIsSet_ = false;
}

std::string ListFailureJobsRequest::getServerGroupId() const
{
    return serverGroupId_;
}

void ListFailureJobsRequest::setServerGroupId(const std::string& value)
{
    serverGroupId_ = value;
    serverGroupIdIsSet_ = true;
}

bool ListFailureJobsRequest::serverGroupIdIsSet() const
{
    return serverGroupIdIsSet_;
}

void ListFailureJobsRequest::unsetserverGroupId()
{
    serverGroupIdIsSet_ = false;
}

std::string ListFailureJobsRequest::getResourceType() const
{
    return resourceType_;
}

void ListFailureJobsRequest::setResourceType(const std::string& value)
{
    resourceType_ = value;
    resourceTypeIsSet_ = true;
}

bool ListFailureJobsRequest::resourceTypeIsSet() const
{
    return resourceTypeIsSet_;
}

void ListFailureJobsRequest::unsetresourceType()
{
    resourceTypeIsSet_ = false;
}

int32_t ListFailureJobsRequest::getLimit() const
{
    return limit_;
}

void ListFailureJobsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListFailureJobsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListFailureJobsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListFailureJobsRequest::getOffset() const
{
    return offset_;
}

void ListFailureJobsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListFailureJobsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListFailureJobsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

}
}
}
}
}


