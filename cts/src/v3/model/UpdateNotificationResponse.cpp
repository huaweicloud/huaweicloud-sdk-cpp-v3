

#include "huaweicloud/cts/v3/model/UpdateNotificationResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cts {
namespace V3 {
namespace Model {




UpdateNotificationResponse::UpdateNotificationResponse()
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

UpdateNotificationResponse::~UpdateNotificationResponse() = default;

void UpdateNotificationResponse::validate()
{
}

web::json::value UpdateNotificationResponse::toJson() const
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

bool UpdateNotificationResponse::fromJson(const web::json::value& val)
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

std::string UpdateNotificationResponse::getNotificationName() const
{
    return notificationName_;
}

void UpdateNotificationResponse::setNotificationName(const std::string& value)
{
    notificationName_ = value;
    notificationNameIsSet_ = true;
}

bool UpdateNotificationResponse::notificationNameIsSet() const
{
    return notificationNameIsSet_;
}

void UpdateNotificationResponse::unsetnotificationName()
{
    notificationNameIsSet_ = false;
}

std::string UpdateNotificationResponse::getOperationType() const
{
    return operationType_;
}

void UpdateNotificationResponse::setOperationType(const std::string& value)
{
    operationType_ = value;
    operationTypeIsSet_ = true;
}

bool UpdateNotificationResponse::operationTypeIsSet() const
{
    return operationTypeIsSet_;
}

void UpdateNotificationResponse::unsetoperationType()
{
    operationTypeIsSet_ = false;
}

std::vector<Operations>& UpdateNotificationResponse::getOperations()
{
    return operations_;
}

void UpdateNotificationResponse::setOperations(const std::vector<Operations>& value)
{
    operations_ = value;
    operationsIsSet_ = true;
}

bool UpdateNotificationResponse::operationsIsSet() const
{
    return operationsIsSet_;
}

void UpdateNotificationResponse::unsetoperations()
{
    operationsIsSet_ = false;
}

std::vector<NotificationUsers>& UpdateNotificationResponse::getNotifyUserList()
{
    return notifyUserList_;
}

void UpdateNotificationResponse::setNotifyUserList(const std::vector<NotificationUsers>& value)
{
    notifyUserList_ = value;
    notifyUserListIsSet_ = true;
}

bool UpdateNotificationResponse::notifyUserListIsSet() const
{
    return notifyUserListIsSet_;
}

void UpdateNotificationResponse::unsetnotifyUserList()
{
    notifyUserListIsSet_ = false;
}

std::string UpdateNotificationResponse::getStatus() const
{
    return status_;
}

void UpdateNotificationResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool UpdateNotificationResponse::statusIsSet() const
{
    return statusIsSet_;
}

void UpdateNotificationResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string UpdateNotificationResponse::getTopicId() const
{
    return topicId_;
}

void UpdateNotificationResponse::setTopicId(const std::string& value)
{
    topicId_ = value;
    topicIdIsSet_ = true;
}

bool UpdateNotificationResponse::topicIdIsSet() const
{
    return topicIdIsSet_;
}

void UpdateNotificationResponse::unsettopicId()
{
    topicIdIsSet_ = false;
}

std::string UpdateNotificationResponse::getNotificationId() const
{
    return notificationId_;
}

void UpdateNotificationResponse::setNotificationId(const std::string& value)
{
    notificationId_ = value;
    notificationIdIsSet_ = true;
}

bool UpdateNotificationResponse::notificationIdIsSet() const
{
    return notificationIdIsSet_;
}

void UpdateNotificationResponse::unsetnotificationId()
{
    notificationIdIsSet_ = false;
}

std::string UpdateNotificationResponse::getNotificationType() const
{
    return notificationType_;
}

void UpdateNotificationResponse::setNotificationType(const std::string& value)
{
    notificationType_ = value;
    notificationTypeIsSet_ = true;
}

bool UpdateNotificationResponse::notificationTypeIsSet() const
{
    return notificationTypeIsSet_;
}

void UpdateNotificationResponse::unsetnotificationType()
{
    notificationTypeIsSet_ = false;
}

std::string UpdateNotificationResponse::getProjectId() const
{
    return projectId_;
}

void UpdateNotificationResponse::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool UpdateNotificationResponse::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void UpdateNotificationResponse::unsetprojectId()
{
    projectIdIsSet_ = false;
}

int64_t UpdateNotificationResponse::getCreateTime() const
{
    return createTime_;
}

void UpdateNotificationResponse::setCreateTime(int64_t value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool UpdateNotificationResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void UpdateNotificationResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

Filter UpdateNotificationResponse::getFilter() const
{
    return filter_;
}

void UpdateNotificationResponse::setFilter(const Filter& value)
{
    filter_ = value;
    filterIsSet_ = true;
}

bool UpdateNotificationResponse::filterIsSet() const
{
    return filterIsSet_;
}

void UpdateNotificationResponse::unsetfilter()
{
    filterIsSet_ = false;
}

}
}
}
}
}


