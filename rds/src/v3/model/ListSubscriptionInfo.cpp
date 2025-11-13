

#include "huaweicloud/rds/v3/model/ListSubscriptionInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListSubscriptionInfo::ListSubscriptionInfo()
{
    id_ = "";
    idIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    publicationId_ = "";
    publicationIdIsSet_ = false;
    publicationName_ = "";
    publicationNameIsSet_ = false;
    isCloud_ = false;
    isCloudIsSet_ = false;
    subscriptionDatabase_ = "";
    subscriptionDatabaseIsSet_ = false;
    subscriptionType_ = "";
    subscriptionTypeIsSet_ = false;
    publicationSubscriptionIsSet_ = false;
    localSubscriptionIsSet_ = false;
    jobScheduleIsSet_ = false;
}

ListSubscriptionInfo::~ListSubscriptionInfo() = default;

void ListSubscriptionInfo::validate()
{
}

web::json::value ListSubscriptionInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(publicationIdIsSet_) {
        val[utility::conversions::to_string_t("publication_id")] = ModelBase::toJson(publicationId_);
    }
    if(publicationNameIsSet_) {
        val[utility::conversions::to_string_t("publication_name")] = ModelBase::toJson(publicationName_);
    }
    if(isCloudIsSet_) {
        val[utility::conversions::to_string_t("is_cloud")] = ModelBase::toJson(isCloud_);
    }
    if(subscriptionDatabaseIsSet_) {
        val[utility::conversions::to_string_t("subscription_database")] = ModelBase::toJson(subscriptionDatabase_);
    }
    if(subscriptionTypeIsSet_) {
        val[utility::conversions::to_string_t("subscription_type")] = ModelBase::toJson(subscriptionType_);
    }
    if(publicationSubscriptionIsSet_) {
        val[utility::conversions::to_string_t("publication_subscription")] = ModelBase::toJson(publicationSubscription_);
    }
    if(localSubscriptionIsSet_) {
        val[utility::conversions::to_string_t("local_subscription")] = ModelBase::toJson(localSubscription_);
    }
    if(jobScheduleIsSet_) {
        val[utility::conversions::to_string_t("job_schedule")] = ModelBase::toJson(jobSchedule_);
    }

    return val;
}
bool ListSubscriptionInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("publication_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("publication_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicationId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("publication_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("publication_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicationName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_cloud"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_cloud"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsCloud(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("subscription_database"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subscription_database"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubscriptionDatabase(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("subscription_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subscription_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubscriptionType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("publication_subscription"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("publication_subscription"));
        if(!fieldValue.is_null())
        {
            Subscription4PublicationInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicationSubscription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("local_subscription"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("local_subscription"));
        if(!fieldValue.is_null())
        {
            Subscription4InstanceInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLocalSubscription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("job_schedule"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_schedule"));
        if(!fieldValue.is_null())
        {
            UsedJobSchedule refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobSchedule(refVal);
        }
    }
    return ok;
}


std::string ListSubscriptionInfo::getId() const
{
    return id_;
}

void ListSubscriptionInfo::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ListSubscriptionInfo::idIsSet() const
{
    return idIsSet_;
}

void ListSubscriptionInfo::unsetid()
{
    idIsSet_ = false;
}

std::string ListSubscriptionInfo::getStatus() const
{
    return status_;
}

void ListSubscriptionInfo::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListSubscriptionInfo::statusIsSet() const
{
    return statusIsSet_;
}

void ListSubscriptionInfo::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ListSubscriptionInfo::getPublicationId() const
{
    return publicationId_;
}

void ListSubscriptionInfo::setPublicationId(const std::string& value)
{
    publicationId_ = value;
    publicationIdIsSet_ = true;
}

bool ListSubscriptionInfo::publicationIdIsSet() const
{
    return publicationIdIsSet_;
}

void ListSubscriptionInfo::unsetpublicationId()
{
    publicationIdIsSet_ = false;
}

std::string ListSubscriptionInfo::getPublicationName() const
{
    return publicationName_;
}

void ListSubscriptionInfo::setPublicationName(const std::string& value)
{
    publicationName_ = value;
    publicationNameIsSet_ = true;
}

bool ListSubscriptionInfo::publicationNameIsSet() const
{
    return publicationNameIsSet_;
}

void ListSubscriptionInfo::unsetpublicationName()
{
    publicationNameIsSet_ = false;
}

bool ListSubscriptionInfo::isIsCloud() const
{
    return isCloud_;
}

void ListSubscriptionInfo::setIsCloud(bool value)
{
    isCloud_ = value;
    isCloudIsSet_ = true;
}

bool ListSubscriptionInfo::isCloudIsSet() const
{
    return isCloudIsSet_;
}

void ListSubscriptionInfo::unsetisCloud()
{
    isCloudIsSet_ = false;
}

std::string ListSubscriptionInfo::getSubscriptionDatabase() const
{
    return subscriptionDatabase_;
}

void ListSubscriptionInfo::setSubscriptionDatabase(const std::string& value)
{
    subscriptionDatabase_ = value;
    subscriptionDatabaseIsSet_ = true;
}

bool ListSubscriptionInfo::subscriptionDatabaseIsSet() const
{
    return subscriptionDatabaseIsSet_;
}

void ListSubscriptionInfo::unsetsubscriptionDatabase()
{
    subscriptionDatabaseIsSet_ = false;
}

std::string ListSubscriptionInfo::getSubscriptionType() const
{
    return subscriptionType_;
}

void ListSubscriptionInfo::setSubscriptionType(const std::string& value)
{
    subscriptionType_ = value;
    subscriptionTypeIsSet_ = true;
}

bool ListSubscriptionInfo::subscriptionTypeIsSet() const
{
    return subscriptionTypeIsSet_;
}

void ListSubscriptionInfo::unsetsubscriptionType()
{
    subscriptionTypeIsSet_ = false;
}

Subscription4PublicationInfo ListSubscriptionInfo::getPublicationSubscription() const
{
    return publicationSubscription_;
}

void ListSubscriptionInfo::setPublicationSubscription(const Subscription4PublicationInfo& value)
{
    publicationSubscription_ = value;
    publicationSubscriptionIsSet_ = true;
}

bool ListSubscriptionInfo::publicationSubscriptionIsSet() const
{
    return publicationSubscriptionIsSet_;
}

void ListSubscriptionInfo::unsetpublicationSubscription()
{
    publicationSubscriptionIsSet_ = false;
}

Subscription4InstanceInfo ListSubscriptionInfo::getLocalSubscription() const
{
    return localSubscription_;
}

void ListSubscriptionInfo::setLocalSubscription(const Subscription4InstanceInfo& value)
{
    localSubscription_ = value;
    localSubscriptionIsSet_ = true;
}

bool ListSubscriptionInfo::localSubscriptionIsSet() const
{
    return localSubscriptionIsSet_;
}

void ListSubscriptionInfo::unsetlocalSubscription()
{
    localSubscriptionIsSet_ = false;
}

UsedJobSchedule ListSubscriptionInfo::getJobSchedule() const
{
    return jobSchedule_;
}

void ListSubscriptionInfo::setJobSchedule(const UsedJobSchedule& value)
{
    jobSchedule_ = value;
    jobScheduleIsSet_ = true;
}

bool ListSubscriptionInfo::jobScheduleIsSet() const
{
    return jobScheduleIsSet_;
}

void ListSubscriptionInfo::unsetjobSchedule()
{
    jobScheduleIsSet_ = false;
}

}
}
}
}
}


