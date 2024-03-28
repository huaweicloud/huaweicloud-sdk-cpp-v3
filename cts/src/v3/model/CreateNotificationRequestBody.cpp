

#include "huaweicloud/cts/v3/model/CreateNotificationRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cts {
namespace V3 {
namespace Model {




CreateNotificationRequestBody::CreateNotificationRequestBody()
{
    notificationName_ = "";
    notificationNameIsSet_ = false;
    operationType_ = "";
    operationTypeIsSet_ = false;
    agencyName_ = "";
    agencyNameIsSet_ = false;
    operationsIsSet_ = false;
    notifyUserListIsSet_ = false;
    topicId_ = "";
    topicIdIsSet_ = false;
    filterIsSet_ = false;
}

CreateNotificationRequestBody::~CreateNotificationRequestBody() = default;

void CreateNotificationRequestBody::validate()
{
}

web::json::value CreateNotificationRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(notificationNameIsSet_) {
        val[utility::conversions::to_string_t("notification_name")] = ModelBase::toJson(notificationName_);
    }
    if(operationTypeIsSet_) {
        val[utility::conversions::to_string_t("operation_type")] = ModelBase::toJson(operationType_);
    }
    if(agencyNameIsSet_) {
        val[utility::conversions::to_string_t("agency_name")] = ModelBase::toJson(agencyName_);
    }
    if(operationsIsSet_) {
        val[utility::conversions::to_string_t("operations")] = ModelBase::toJson(operations_);
    }
    if(notifyUserListIsSet_) {
        val[utility::conversions::to_string_t("notify_user_list")] = ModelBase::toJson(notifyUserList_);
    }
    if(topicIdIsSet_) {
        val[utility::conversions::to_string_t("topic_id")] = ModelBase::toJson(topicId_);
    }
    if(filterIsSet_) {
        val[utility::conversions::to_string_t("filter")] = ModelBase::toJson(filter_);
    }

    return val;
}
bool CreateNotificationRequestBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("agency_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("agency_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAgencyName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("topic_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("topic_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTopicId(refVal);
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


std::string CreateNotificationRequestBody::getNotificationName() const
{
    return notificationName_;
}

void CreateNotificationRequestBody::setNotificationName(const std::string& value)
{
    notificationName_ = value;
    notificationNameIsSet_ = true;
}

bool CreateNotificationRequestBody::notificationNameIsSet() const
{
    return notificationNameIsSet_;
}

void CreateNotificationRequestBody::unsetnotificationName()
{
    notificationNameIsSet_ = false;
}

std::string CreateNotificationRequestBody::getOperationType() const
{
    return operationType_;
}

void CreateNotificationRequestBody::setOperationType(const std::string& value)
{
    operationType_ = value;
    operationTypeIsSet_ = true;
}

bool CreateNotificationRequestBody::operationTypeIsSet() const
{
    return operationTypeIsSet_;
}

void CreateNotificationRequestBody::unsetoperationType()
{
    operationTypeIsSet_ = false;
}

std::string CreateNotificationRequestBody::getAgencyName() const
{
    return agencyName_;
}

void CreateNotificationRequestBody::setAgencyName(const std::string& value)
{
    agencyName_ = value;
    agencyNameIsSet_ = true;
}

bool CreateNotificationRequestBody::agencyNameIsSet() const
{
    return agencyNameIsSet_;
}

void CreateNotificationRequestBody::unsetagencyName()
{
    agencyNameIsSet_ = false;
}

std::vector<Operations>& CreateNotificationRequestBody::getOperations()
{
    return operations_;
}

void CreateNotificationRequestBody::setOperations(const std::vector<Operations>& value)
{
    operations_ = value;
    operationsIsSet_ = true;
}

bool CreateNotificationRequestBody::operationsIsSet() const
{
    return operationsIsSet_;
}

void CreateNotificationRequestBody::unsetoperations()
{
    operationsIsSet_ = false;
}

std::vector<NotificationUsers>& CreateNotificationRequestBody::getNotifyUserList()
{
    return notifyUserList_;
}

void CreateNotificationRequestBody::setNotifyUserList(const std::vector<NotificationUsers>& value)
{
    notifyUserList_ = value;
    notifyUserListIsSet_ = true;
}

bool CreateNotificationRequestBody::notifyUserListIsSet() const
{
    return notifyUserListIsSet_;
}

void CreateNotificationRequestBody::unsetnotifyUserList()
{
    notifyUserListIsSet_ = false;
}

std::string CreateNotificationRequestBody::getTopicId() const
{
    return topicId_;
}

void CreateNotificationRequestBody::setTopicId(const std::string& value)
{
    topicId_ = value;
    topicIdIsSet_ = true;
}

bool CreateNotificationRequestBody::topicIdIsSet() const
{
    return topicIdIsSet_;
}

void CreateNotificationRequestBody::unsettopicId()
{
    topicIdIsSet_ = false;
}

Filter CreateNotificationRequestBody::getFilter() const
{
    return filter_;
}

void CreateNotificationRequestBody::setFilter(const Filter& value)
{
    filter_ = value;
    filterIsSet_ = true;
}

bool CreateNotificationRequestBody::filterIsSet() const
{
    return filterIsSet_;
}

void CreateNotificationRequestBody::unsetfilter()
{
    filterIsSet_ = false;
}

}
}
}
}
}


