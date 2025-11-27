

#include "huaweicloud/rds/v3/model/ListReplicationErrorsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListReplicationErrorsRequest::ListReplicationErrorsRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    subscriptionId_ = "";
    subscriptionIdIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListReplicationErrorsRequest::~ListReplicationErrorsRequest() = default;

void ListReplicationErrorsRequest::validate()
{
}

web::json::value ListReplicationErrorsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(subscriptionIdIsSet_) {
        val[utility::conversions::to_string_t("subscription_id")] = ModelBase::toJson(subscriptionId_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ListReplicationErrorsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("subscription_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subscription_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubscriptionId(refVal);
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


std::string ListReplicationErrorsRequest::getInstanceId() const
{
    return instanceId_;
}

void ListReplicationErrorsRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListReplicationErrorsRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListReplicationErrorsRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListReplicationErrorsRequest::getSubscriptionId() const
{
    return subscriptionId_;
}

void ListReplicationErrorsRequest::setSubscriptionId(const std::string& value)
{
    subscriptionId_ = value;
    subscriptionIdIsSet_ = true;
}

bool ListReplicationErrorsRequest::subscriptionIdIsSet() const
{
    return subscriptionIdIsSet_;
}

void ListReplicationErrorsRequest::unsetsubscriptionId()
{
    subscriptionIdIsSet_ = false;
}

int32_t ListReplicationErrorsRequest::getOffset() const
{
    return offset_;
}

void ListReplicationErrorsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListReplicationErrorsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListReplicationErrorsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListReplicationErrorsRequest::getLimit() const
{
    return limit_;
}

void ListReplicationErrorsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListReplicationErrorsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListReplicationErrorsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


