

#include "huaweicloud/cts/v3/model/UpdateNotificationRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cts {
namespace V3 {
namespace Model {




UpdateNotificationRequestBody::UpdateNotificationRequestBody()
{
    notificationName_ = "";
    notificationNameIsSet_ = false;
    operationType_ = "";
    operationTypeIsSet_ = false;
    operationsIsSet_ = false;
    notifyUserListIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    topicId_ = "";
    topicIdIsSet_ = false;
    notificationId_ = "";
    notificationIdIsSet_ = false;
    filterIsSet_ = false;
}

UpdateNotificationRequestBody::~UpdateNotificationRequestBody() = default;

void UpdateNotificationRequestBody::validate()
{
}

web::json::value UpdateNotificationRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(notificationNameIsSet_) {
        val[utility::conversions::to_string_t("notification_name")] = ModelBase::toJson(notificationName_);
    }
    if(operationTypeIsSet_) {
        val[utility::conversions::to_string_t("operation_type")] = ModelBase::toJson(operationType_);
    }
    if(operationsIsSet_) {
        val[utility::conversions::to_string_t("operations")] = ModelBase::toJson(operations_);
    }
    if(notifyUserListIsSet_) {
        val[utility::conversions::to_string_t("notify_user_list")] = ModelBase::toJson(notifyUserList_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(topicIdIsSet_) {
        val[utility::conversions::to_string_t("topic_id")] = ModelBase::toJson(topicId_);
    }
    if(notificationIdIsSet_) {
        val[utility::conversions::to_string_t("notification_id")] = ModelBase::toJson(notificationId_);
    }
    if(filterIsSet_) {
        val[utility::conversions::to_string_t("filter")] = ModelBase::toJson(filter_);
    }

    return val;
}

bool UpdateNotificationRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("notification_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("notification_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNotificationName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("operation_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("operation_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOperationType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("operations"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("operations"));
        if(!fieldValue.is_null())
        {
            std::vector<Operations> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOperations(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("notify_user_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("notify_user_list"));
        if(!fieldValue.is_null())
        {
            std::vector<NotificationUsers> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNotifyUserList(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("topic_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("topic_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTopicId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("notification_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("notification_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNotificationId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("filter"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("filter"));
        if(!fieldValue.is_null())
        {
            Filter refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFilter(refVal);
        }
    }
    return ok;
}


std::string UpdateNotificationRequestBody::getNotificationName() const
{
    return notificationName_;
}

void UpdateNotificationRequestBody::setNotificationName(const std::string& value)
{
    notificationName_ = value;
    notificationNameIsSet_ = true;
}

bool UpdateNotificationRequestBody::notificationNameIsSet() const
{
    return notificationNameIsSet_;
}

void UpdateNotificationRequestBody::unsetnotificationName()
{
    notificationNameIsSet_ = false;
}

std::string UpdateNotificationRequestBody::getOperationType() const
{
    return operationType_;
}

void UpdateNotificationRequestBody::setOperationType(const std::string& value)
{
    operationType_ = value;
    operationTypeIsSet_ = true;
}

bool UpdateNotificationRequestBody::operationTypeIsSet() const
{
    return operationTypeIsSet_;
}

void UpdateNotificationRequestBody::unsetoperationType()
{
    operationTypeIsSet_ = false;
}

std::vector<Operations>& UpdateNotificationRequestBody::getOperations()
{
    return operations_;
}

void UpdateNotificationRequestBody::setOperations(const std::vector<Operations>& value)
{
    operations_ = value;
    operationsIsSet_ = true;
}

bool UpdateNotificationRequestBody::operationsIsSet() const
{
    return operationsIsSet_;
}

void UpdateNotificationRequestBody::unsetoperations()
{
    operationsIsSet_ = false;
}

std::vector<NotificationUsers>& UpdateNotificationRequestBody::getNotifyUserList()
{
    return notifyUserList_;
}

void UpdateNotificationRequestBody::setNotifyUserList(const std::vector<NotificationUsers>& value)
{
    notifyUserList_ = value;
    notifyUserListIsSet_ = true;
}

bool UpdateNotificationRequestBody::notifyUserListIsSet() const
{
    return notifyUserListIsSet_;
}

void UpdateNotificationRequestBody::unsetnotifyUserList()
{
    notifyUserListIsSet_ = false;
}

std::string UpdateNotificationRequestBody::getStatus() const
{
    return status_;
}

void UpdateNotificationRequestBody::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool UpdateNotificationRequestBody::statusIsSet() const
{
    return statusIsSet_;
}

void UpdateNotificationRequestBody::unsetstatus()
{
    statusIsSet_ = false;
}

std::string UpdateNotificationRequestBody::getTopicId() const
{
    return topicId_;
}

void UpdateNotificationRequestBody::setTopicId(const std::string& value)
{
    topicId_ = value;
    topicIdIsSet_ = true;
}

bool UpdateNotificationRequestBody::topicIdIsSet() const
{
    return topicIdIsSet_;
}

void UpdateNotificationRequestBody::unsettopicId()
{
    topicIdIsSet_ = false;
}

std::string UpdateNotificationRequestBody::getNotificationId() const
{
    return notificationId_;
}

void UpdateNotificationRequestBody::setNotificationId(const std::string& value)
{
    notificationId_ = value;
    notificationIdIsSet_ = true;
}

bool UpdateNotificationRequestBody::notificationIdIsSet() const
{
    return notificationIdIsSet_;
}

void UpdateNotificationRequestBody::unsetnotificationId()
{
    notificationIdIsSet_ = false;
}

Filter UpdateNotificationRequestBody::getFilter() const
{
    return filter_;
}

void UpdateNotificationRequestBody::setFilter(const Filter& value)
{
    filter_ = value;
    filterIsSet_ = true;
}

bool UpdateNotificationRequestBody::filterIsSet() const
{
    return filterIsSet_;
}

void UpdateNotificationRequestBody::unsetfilter()
{
    filterIsSet_ = false;
}

}
}
}
}
}


