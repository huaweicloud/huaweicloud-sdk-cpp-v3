

#include "huaweicloud/cts/v3/model/NotificationsResponseBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cts {
namespace V3 {
namespace Model {




NotificationsResponseBody::NotificationsResponseBody()
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
    notificationType_ = "";
    notificationTypeIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    createTime_ = 0L;
    createTimeIsSet_ = false;
    filterIsSet_ = false;
}

NotificationsResponseBody::~NotificationsResponseBody() = default;

void NotificationsResponseBody::validate()
{
}

web::json::value NotificationsResponseBody::toJson() const
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
    if(notificationTypeIsSet_) {
        val[utility::conversions::to_string_t("notification_type")] = ModelBase::toJson(notificationType_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(filterIsSet_) {
        val[utility::conversions::to_string_t("filter")] = ModelBase::toJson(filter_);
    }

    return val;
}

bool NotificationsResponseBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("notification_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("notification_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNotificationType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
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

std::string NotificationsResponseBody::getNotificationName() const
{
    return notificationName_;
}

void NotificationsResponseBody::setNotificationName(const std::string& value)
{
    notificationName_ = value;
    notificationNameIsSet_ = true;
}

bool NotificationsResponseBody::notificationNameIsSet() const
{
    return notificationNameIsSet_;
}

void NotificationsResponseBody::unsetnotificationName()
{
    notificationNameIsSet_ = false;
}

std::string NotificationsResponseBody::getOperationType() const
{
    return operationType_;
}

void NotificationsResponseBody::setOperationType(const std::string& value)
{
    operationType_ = value;
    operationTypeIsSet_ = true;
}

bool NotificationsResponseBody::operationTypeIsSet() const
{
    return operationTypeIsSet_;
}

void NotificationsResponseBody::unsetoperationType()
{
    operationTypeIsSet_ = false;
}

std::vector<Operations>& NotificationsResponseBody::getOperations()
{
    return operations_;
}

void NotificationsResponseBody::setOperations(const std::vector<Operations>& value)
{
    operations_ = value;
    operationsIsSet_ = true;
}

bool NotificationsResponseBody::operationsIsSet() const
{
    return operationsIsSet_;
}

void NotificationsResponseBody::unsetoperations()
{
    operationsIsSet_ = false;
}

std::vector<NotificationUsers>& NotificationsResponseBody::getNotifyUserList()
{
    return notifyUserList_;
}

void NotificationsResponseBody::setNotifyUserList(const std::vector<NotificationUsers>& value)
{
    notifyUserList_ = value;
    notifyUserListIsSet_ = true;
}

bool NotificationsResponseBody::notifyUserListIsSet() const
{
    return notifyUserListIsSet_;
}

void NotificationsResponseBody::unsetnotifyUserList()
{
    notifyUserListIsSet_ = false;
}

std::string NotificationsResponseBody::getStatus() const
{
    return status_;
}

void NotificationsResponseBody::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool NotificationsResponseBody::statusIsSet() const
{
    return statusIsSet_;
}

void NotificationsResponseBody::unsetstatus()
{
    statusIsSet_ = false;
}

std::string NotificationsResponseBody::getTopicId() const
{
    return topicId_;
}

void NotificationsResponseBody::setTopicId(const std::string& value)
{
    topicId_ = value;
    topicIdIsSet_ = true;
}

bool NotificationsResponseBody::topicIdIsSet() const
{
    return topicIdIsSet_;
}

void NotificationsResponseBody::unsettopicId()
{
    topicIdIsSet_ = false;
}

std::string NotificationsResponseBody::getNotificationId() const
{
    return notificationId_;
}

void NotificationsResponseBody::setNotificationId(const std::string& value)
{
    notificationId_ = value;
    notificationIdIsSet_ = true;
}

bool NotificationsResponseBody::notificationIdIsSet() const
{
    return notificationIdIsSet_;
}

void NotificationsResponseBody::unsetnotificationId()
{
    notificationIdIsSet_ = false;
}

std::string NotificationsResponseBody::getNotificationType() const
{
    return notificationType_;
}

void NotificationsResponseBody::setNotificationType(const std::string& value)
{
    notificationType_ = value;
    notificationTypeIsSet_ = true;
}

bool NotificationsResponseBody::notificationTypeIsSet() const
{
    return notificationTypeIsSet_;
}

void NotificationsResponseBody::unsetnotificationType()
{
    notificationTypeIsSet_ = false;
}

std::string NotificationsResponseBody::getProjectId() const
{
    return projectId_;
}

void NotificationsResponseBody::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool NotificationsResponseBody::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void NotificationsResponseBody::unsetprojectId()
{
    projectIdIsSet_ = false;
}

int64_t NotificationsResponseBody::getCreateTime() const
{
    return createTime_;
}

void NotificationsResponseBody::setCreateTime(int64_t value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool NotificationsResponseBody::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void NotificationsResponseBody::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

Filter NotificationsResponseBody::getFilter() const
{
    return filter_;
}

void NotificationsResponseBody::setFilter(const Filter& value)
{
    filter_ = value;
    filterIsSet_ = true;
}

bool NotificationsResponseBody::filterIsSet() const
{
    return filterIsSet_;
}

void NotificationsResponseBody::unsetfilter()
{
    filterIsSet_ = false;
}

}
}
}
}
}


