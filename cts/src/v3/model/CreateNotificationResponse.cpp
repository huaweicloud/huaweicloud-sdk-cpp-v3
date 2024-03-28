

#include "huaweicloud/cts/v3/model/CreateNotificationResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cts {
namespace V3 {
namespace Model {




CreateNotificationResponse::CreateNotificationResponse()
{
    notificationName_ = "";
    notificationNameIsSet_ = false;
    operationType_ = "";
    operationTypeIsSet_ = false;
    operationsIsSet_ = false;
    notifyUserListIsSet_ = false;
    agencyName_ = "";
    agencyNameIsSet_ = false;
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

CreateNotificationResponse::~CreateNotificationResponse() = default;

void CreateNotificationResponse::validate()
{
}

web::json::value CreateNotificationResponse::toJson() const
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
    if(agencyNameIsSet_) {
        val[utility::conversions::to_string_t("agency_name")] = ModelBase::toJson(agencyName_);
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
bool CreateNotificationResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("agency_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("agency_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAgencyName(refVal);
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


std::string CreateNotificationResponse::getNotificationName() const
{
    return notificationName_;
}

void CreateNotificationResponse::setNotificationName(const std::string& value)
{
    notificationName_ = value;
    notificationNameIsSet_ = true;
}

bool CreateNotificationResponse::notificationNameIsSet() const
{
    return notificationNameIsSet_;
}

void CreateNotificationResponse::unsetnotificationName()
{
    notificationNameIsSet_ = false;
}

std::string CreateNotificationResponse::getOperationType() const
{
    return operationType_;
}

void CreateNotificationResponse::setOperationType(const std::string& value)
{
    operationType_ = value;
    operationTypeIsSet_ = true;
}

bool CreateNotificationResponse::operationTypeIsSet() const
{
    return operationTypeIsSet_;
}

void CreateNotificationResponse::unsetoperationType()
{
    operationTypeIsSet_ = false;
}

std::vector<Operations>& CreateNotificationResponse::getOperations()
{
    return operations_;
}

void CreateNotificationResponse::setOperations(const std::vector<Operations>& value)
{
    operations_ = value;
    operationsIsSet_ = true;
}

bool CreateNotificationResponse::operationsIsSet() const
{
    return operationsIsSet_;
}

void CreateNotificationResponse::unsetoperations()
{
    operationsIsSet_ = false;
}

std::vector<NotificationUsers>& CreateNotificationResponse::getNotifyUserList()
{
    return notifyUserList_;
}

void CreateNotificationResponse::setNotifyUserList(const std::vector<NotificationUsers>& value)
{
    notifyUserList_ = value;
    notifyUserListIsSet_ = true;
}

bool CreateNotificationResponse::notifyUserListIsSet() const
{
    return notifyUserListIsSet_;
}

void CreateNotificationResponse::unsetnotifyUserList()
{
    notifyUserListIsSet_ = false;
}

std::string CreateNotificationResponse::getAgencyName() const
{
    return agencyName_;
}

void CreateNotificationResponse::setAgencyName(const std::string& value)
{
    agencyName_ = value;
    agencyNameIsSet_ = true;
}

bool CreateNotificationResponse::agencyNameIsSet() const
{
    return agencyNameIsSet_;
}

void CreateNotificationResponse::unsetagencyName()
{
    agencyNameIsSet_ = false;
}

std::string CreateNotificationResponse::getStatus() const
{
    return status_;
}

void CreateNotificationResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool CreateNotificationResponse::statusIsSet() const
{
    return statusIsSet_;
}

void CreateNotificationResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string CreateNotificationResponse::getTopicId() const
{
    return topicId_;
}

void CreateNotificationResponse::setTopicId(const std::string& value)
{
    topicId_ = value;
    topicIdIsSet_ = true;
}

bool CreateNotificationResponse::topicIdIsSet() const
{
    return topicIdIsSet_;
}

void CreateNotificationResponse::unsettopicId()
{
    topicIdIsSet_ = false;
}

std::string CreateNotificationResponse::getNotificationId() const
{
    return notificationId_;
}

void CreateNotificationResponse::setNotificationId(const std::string& value)
{
    notificationId_ = value;
    notificationIdIsSet_ = true;
}

bool CreateNotificationResponse::notificationIdIsSet() const
{
    return notificationIdIsSet_;
}

void CreateNotificationResponse::unsetnotificationId()
{
    notificationIdIsSet_ = false;
}

std::string CreateNotificationResponse::getNotificationType() const
{
    return notificationType_;
}

void CreateNotificationResponse::setNotificationType(const std::string& value)
{
    notificationType_ = value;
    notificationTypeIsSet_ = true;
}

bool CreateNotificationResponse::notificationTypeIsSet() const
{
    return notificationTypeIsSet_;
}

void CreateNotificationResponse::unsetnotificationType()
{
    notificationTypeIsSet_ = false;
}

std::string CreateNotificationResponse::getProjectId() const
{
    return projectId_;
}

void CreateNotificationResponse::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool CreateNotificationResponse::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void CreateNotificationResponse::unsetprojectId()
{
    projectIdIsSet_ = false;
}

int64_t CreateNotificationResponse::getCreateTime() const
{
    return createTime_;
}

void CreateNotificationResponse::setCreateTime(int64_t value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool CreateNotificationResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void CreateNotificationResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

Filter CreateNotificationResponse::getFilter() const
{
    return filter_;
}

void CreateNotificationResponse::setFilter(const Filter& value)
{
    filter_ = value;
    filterIsSet_ = true;
}

bool CreateNotificationResponse::filterIsSet() const
{
    return filterIsSet_;
}

void CreateNotificationResponse::unsetfilter()
{
    filterIsSet_ = false;
}

}
}
}
}
}


