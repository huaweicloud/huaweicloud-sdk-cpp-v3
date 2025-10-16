

#include "huaweicloud/rds/v3/model/CreateSubscriptionInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




CreateSubscriptionInfo::CreateSubscriptionInfo()
{
    subscriptionDatabase_ = "";
    subscriptionDatabaseIsSet_ = false;
    subscriptionType_ = "";
    subscriptionTypeIsSet_ = false;
    initializeAt_ = "";
    initializeAtIsSet_ = false;
    initializeInfoIsSet_ = false;
    independentAgent_ = false;
    independentAgentIsSet_ = false;
    jobScheduleIsSet_ = false;
    bakFileName_ = "";
    bakFileNameIsSet_ = false;
    bakBucketName_ = "";
    bakBucketNameIsSet_ = false;
    publicationSubscriptionIsSet_ = false;
    localSubscriptionIsSet_ = false;
}

CreateSubscriptionInfo::~CreateSubscriptionInfo() = default;

void CreateSubscriptionInfo::validate()
{
}

web::json::value CreateSubscriptionInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(subscriptionDatabaseIsSet_) {
        val[utility::conversions::to_string_t("subscription_database")] = ModelBase::toJson(subscriptionDatabase_);
    }
    if(subscriptionTypeIsSet_) {
        val[utility::conversions::to_string_t("subscription_type")] = ModelBase::toJson(subscriptionType_);
    }
    if(initializeAtIsSet_) {
        val[utility::conversions::to_string_t("initialize_at")] = ModelBase::toJson(initializeAt_);
    }
    if(initializeInfoIsSet_) {
        val[utility::conversions::to_string_t("initialize_info")] = ModelBase::toJson(initializeInfo_);
    }
    if(independentAgentIsSet_) {
        val[utility::conversions::to_string_t("independent_agent")] = ModelBase::toJson(independentAgent_);
    }
    if(jobScheduleIsSet_) {
        val[utility::conversions::to_string_t("job_schedule")] = ModelBase::toJson(jobSchedule_);
    }
    if(bakFileNameIsSet_) {
        val[utility::conversions::to_string_t("bak_file_name")] = ModelBase::toJson(bakFileName_);
    }
    if(bakBucketNameIsSet_) {
        val[utility::conversions::to_string_t("bak_bucket_name")] = ModelBase::toJson(bakBucketName_);
    }
    if(publicationSubscriptionIsSet_) {
        val[utility::conversions::to_string_t("publication_subscription")] = ModelBase::toJson(publicationSubscription_);
    }
    if(localSubscriptionIsSet_) {
        val[utility::conversions::to_string_t("local_subscription")] = ModelBase::toJson(localSubscription_);
    }

    return val;
}
bool CreateSubscriptionInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("initialize_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("initialize_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInitializeAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("initialize_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("initialize_info"));
        if(!fieldValue.is_null())
        {
            CreateSubscriptionInfo_initialize_info refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInitializeInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("independent_agent"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("independent_agent"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIndependentAgent(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("job_schedule"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_schedule"));
        if(!fieldValue.is_null())
        {
            OperateUsedJobSchedule refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobSchedule(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("bak_file_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bak_file_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBakFileName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("bak_bucket_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bak_bucket_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBakBucketName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("publication_subscription"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("publication_subscription"));
        if(!fieldValue.is_null())
        {
            CreateSubscription4PublicationInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicationSubscription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("local_subscription"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("local_subscription"));
        if(!fieldValue.is_null())
        {
            CreateSubscription4InstanceInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLocalSubscription(refVal);
        }
    }
    return ok;
}


std::string CreateSubscriptionInfo::getSubscriptionDatabase() const
{
    return subscriptionDatabase_;
}

void CreateSubscriptionInfo::setSubscriptionDatabase(const std::string& value)
{
    subscriptionDatabase_ = value;
    subscriptionDatabaseIsSet_ = true;
}

bool CreateSubscriptionInfo::subscriptionDatabaseIsSet() const
{
    return subscriptionDatabaseIsSet_;
}

void CreateSubscriptionInfo::unsetsubscriptionDatabase()
{
    subscriptionDatabaseIsSet_ = false;
}

std::string CreateSubscriptionInfo::getSubscriptionType() const
{
    return subscriptionType_;
}

void CreateSubscriptionInfo::setSubscriptionType(const std::string& value)
{
    subscriptionType_ = value;
    subscriptionTypeIsSet_ = true;
}

bool CreateSubscriptionInfo::subscriptionTypeIsSet() const
{
    return subscriptionTypeIsSet_;
}

void CreateSubscriptionInfo::unsetsubscriptionType()
{
    subscriptionTypeIsSet_ = false;
}

std::string CreateSubscriptionInfo::getInitializeAt() const
{
    return initializeAt_;
}

void CreateSubscriptionInfo::setInitializeAt(const std::string& value)
{
    initializeAt_ = value;
    initializeAtIsSet_ = true;
}

bool CreateSubscriptionInfo::initializeAtIsSet() const
{
    return initializeAtIsSet_;
}

void CreateSubscriptionInfo::unsetinitializeAt()
{
    initializeAtIsSet_ = false;
}

CreateSubscriptionInfo_initialize_info CreateSubscriptionInfo::getInitializeInfo() const
{
    return initializeInfo_;
}

void CreateSubscriptionInfo::setInitializeInfo(const CreateSubscriptionInfo_initialize_info& value)
{
    initializeInfo_ = value;
    initializeInfoIsSet_ = true;
}

bool CreateSubscriptionInfo::initializeInfoIsSet() const
{
    return initializeInfoIsSet_;
}

void CreateSubscriptionInfo::unsetinitializeInfo()
{
    initializeInfoIsSet_ = false;
}

bool CreateSubscriptionInfo::isIndependentAgent() const
{
    return independentAgent_;
}

void CreateSubscriptionInfo::setIndependentAgent(bool value)
{
    independentAgent_ = value;
    independentAgentIsSet_ = true;
}

bool CreateSubscriptionInfo::independentAgentIsSet() const
{
    return independentAgentIsSet_;
}

void CreateSubscriptionInfo::unsetindependentAgent()
{
    independentAgentIsSet_ = false;
}

OperateUsedJobSchedule CreateSubscriptionInfo::getJobSchedule() const
{
    return jobSchedule_;
}

void CreateSubscriptionInfo::setJobSchedule(const OperateUsedJobSchedule& value)
{
    jobSchedule_ = value;
    jobScheduleIsSet_ = true;
}

bool CreateSubscriptionInfo::jobScheduleIsSet() const
{
    return jobScheduleIsSet_;
}

void CreateSubscriptionInfo::unsetjobSchedule()
{
    jobScheduleIsSet_ = false;
}

std::string CreateSubscriptionInfo::getBakFileName() const
{
    return bakFileName_;
}

void CreateSubscriptionInfo::setBakFileName(const std::string& value)
{
    bakFileName_ = value;
    bakFileNameIsSet_ = true;
}

bool CreateSubscriptionInfo::bakFileNameIsSet() const
{
    return bakFileNameIsSet_;
}

void CreateSubscriptionInfo::unsetbakFileName()
{
    bakFileNameIsSet_ = false;
}

std::string CreateSubscriptionInfo::getBakBucketName() const
{
    return bakBucketName_;
}

void CreateSubscriptionInfo::setBakBucketName(const std::string& value)
{
    bakBucketName_ = value;
    bakBucketNameIsSet_ = true;
}

bool CreateSubscriptionInfo::bakBucketNameIsSet() const
{
    return bakBucketNameIsSet_;
}

void CreateSubscriptionInfo::unsetbakBucketName()
{
    bakBucketNameIsSet_ = false;
}

CreateSubscription4PublicationInfo CreateSubscriptionInfo::getPublicationSubscription() const
{
    return publicationSubscription_;
}

void CreateSubscriptionInfo::setPublicationSubscription(const CreateSubscription4PublicationInfo& value)
{
    publicationSubscription_ = value;
    publicationSubscriptionIsSet_ = true;
}

bool CreateSubscriptionInfo::publicationSubscriptionIsSet() const
{
    return publicationSubscriptionIsSet_;
}

void CreateSubscriptionInfo::unsetpublicationSubscription()
{
    publicationSubscriptionIsSet_ = false;
}

CreateSubscription4InstanceInfo CreateSubscriptionInfo::getLocalSubscription() const
{
    return localSubscription_;
}

void CreateSubscriptionInfo::setLocalSubscription(const CreateSubscription4InstanceInfo& value)
{
    localSubscription_ = value;
    localSubscriptionIsSet_ = true;
}

bool CreateSubscriptionInfo::localSubscriptionIsSet() const
{
    return localSubscriptionIsSet_;
}

void CreateSubscriptionInfo::unsetlocalSubscription()
{
    localSubscriptionIsSet_ = false;
}

}
}
}
}
}


