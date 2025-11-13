

#include "huaweicloud/rds/v3/model/ListSubscriptionsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListSubscriptionsRequest::ListSubscriptionsRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    publicationId_ = "";
    publicationIdIsSet_ = false;
    isCloud_ = false;
    isCloudIsSet_ = false;
    publicationName_ = "";
    publicationNameIsSet_ = false;
    subscriptionDbName_ = "";
    subscriptionDbNameIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListSubscriptionsRequest::~ListSubscriptionsRequest() = default;

void ListSubscriptionsRequest::validate()
{
}

web::json::value ListSubscriptionsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(publicationIdIsSet_) {
        val[utility::conversions::to_string_t("publication_id")] = ModelBase::toJson(publicationId_);
    }
    if(isCloudIsSet_) {
        val[utility::conversions::to_string_t("is_cloud")] = ModelBase::toJson(isCloud_);
    }
    if(publicationNameIsSet_) {
        val[utility::conversions::to_string_t("publication_name")] = ModelBase::toJson(publicationName_);
    }
    if(subscriptionDbNameIsSet_) {
        val[utility::conversions::to_string_t("subscription_db_name")] = ModelBase::toJson(subscriptionDbName_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ListSubscriptionsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("publication_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("publication_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicationId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("publication_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("publication_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicationName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("subscription_db_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subscription_db_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubscriptionDbName(refVal);
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


std::string ListSubscriptionsRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListSubscriptionsRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListSubscriptionsRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListSubscriptionsRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ListSubscriptionsRequest::getInstanceId() const
{
    return instanceId_;
}

void ListSubscriptionsRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListSubscriptionsRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListSubscriptionsRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListSubscriptionsRequest::getPublicationId() const
{
    return publicationId_;
}

void ListSubscriptionsRequest::setPublicationId(const std::string& value)
{
    publicationId_ = value;
    publicationIdIsSet_ = true;
}

bool ListSubscriptionsRequest::publicationIdIsSet() const
{
    return publicationIdIsSet_;
}

void ListSubscriptionsRequest::unsetpublicationId()
{
    publicationIdIsSet_ = false;
}

bool ListSubscriptionsRequest::isIsCloud() const
{
    return isCloud_;
}

void ListSubscriptionsRequest::setIsCloud(bool value)
{
    isCloud_ = value;
    isCloudIsSet_ = true;
}

bool ListSubscriptionsRequest::isCloudIsSet() const
{
    return isCloudIsSet_;
}

void ListSubscriptionsRequest::unsetisCloud()
{
    isCloudIsSet_ = false;
}

std::string ListSubscriptionsRequest::getPublicationName() const
{
    return publicationName_;
}

void ListSubscriptionsRequest::setPublicationName(const std::string& value)
{
    publicationName_ = value;
    publicationNameIsSet_ = true;
}

bool ListSubscriptionsRequest::publicationNameIsSet() const
{
    return publicationNameIsSet_;
}

void ListSubscriptionsRequest::unsetpublicationName()
{
    publicationNameIsSet_ = false;
}

std::string ListSubscriptionsRequest::getSubscriptionDbName() const
{
    return subscriptionDbName_;
}

void ListSubscriptionsRequest::setSubscriptionDbName(const std::string& value)
{
    subscriptionDbName_ = value;
    subscriptionDbNameIsSet_ = true;
}

bool ListSubscriptionsRequest::subscriptionDbNameIsSet() const
{
    return subscriptionDbNameIsSet_;
}

void ListSubscriptionsRequest::unsetsubscriptionDbName()
{
    subscriptionDbNameIsSet_ = false;
}

int32_t ListSubscriptionsRequest::getOffset() const
{
    return offset_;
}

void ListSubscriptionsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListSubscriptionsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListSubscriptionsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListSubscriptionsRequest::getLimit() const
{
    return limit_;
}

void ListSubscriptionsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListSubscriptionsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListSubscriptionsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


