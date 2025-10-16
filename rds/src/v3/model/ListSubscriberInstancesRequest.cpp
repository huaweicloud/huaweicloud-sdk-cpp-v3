

#include "huaweicloud/rds/v3/model/ListSubscriberInstancesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListSubscriberInstancesRequest::ListSubscriberInstancesRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    subscriberInstanceId_ = "";
    subscriberInstanceIdIsSet_ = false;
    subscriberInstanceName_ = "";
    subscriberInstanceNameIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListSubscriberInstancesRequest::~ListSubscriberInstancesRequest() = default;

void ListSubscriberInstancesRequest::validate()
{
}

web::json::value ListSubscriberInstancesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(subscriberInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("subscriber_instance_id")] = ModelBase::toJson(subscriberInstanceId_);
    }
    if(subscriberInstanceNameIsSet_) {
        val[utility::conversions::to_string_t("subscriber_instance_name")] = ModelBase::toJson(subscriberInstanceName_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ListSubscriberInstancesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("subscriber_instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subscriber_instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubscriberInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("subscriber_instance_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subscriber_instance_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubscriberInstanceName(refVal);
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


std::string ListSubscriberInstancesRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListSubscriberInstancesRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListSubscriberInstancesRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListSubscriberInstancesRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ListSubscriberInstancesRequest::getInstanceId() const
{
    return instanceId_;
}

void ListSubscriberInstancesRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListSubscriberInstancesRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListSubscriberInstancesRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListSubscriberInstancesRequest::getSubscriberInstanceId() const
{
    return subscriberInstanceId_;
}

void ListSubscriberInstancesRequest::setSubscriberInstanceId(const std::string& value)
{
    subscriberInstanceId_ = value;
    subscriberInstanceIdIsSet_ = true;
}

bool ListSubscriberInstancesRequest::subscriberInstanceIdIsSet() const
{
    return subscriberInstanceIdIsSet_;
}

void ListSubscriberInstancesRequest::unsetsubscriberInstanceId()
{
    subscriberInstanceIdIsSet_ = false;
}

std::string ListSubscriberInstancesRequest::getSubscriberInstanceName() const
{
    return subscriberInstanceName_;
}

void ListSubscriberInstancesRequest::setSubscriberInstanceName(const std::string& value)
{
    subscriberInstanceName_ = value;
    subscriberInstanceNameIsSet_ = true;
}

bool ListSubscriberInstancesRequest::subscriberInstanceNameIsSet() const
{
    return subscriberInstanceNameIsSet_;
}

void ListSubscriberInstancesRequest::unsetsubscriberInstanceName()
{
    subscriberInstanceNameIsSet_ = false;
}

int32_t ListSubscriberInstancesRequest::getOffset() const
{
    return offset_;
}

void ListSubscriberInstancesRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListSubscriberInstancesRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListSubscriberInstancesRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListSubscriberInstancesRequest::getLimit() const
{
    return limit_;
}

void ListSubscriberInstancesRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListSubscriberInstancesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListSubscriberInstancesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


