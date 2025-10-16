

#include "huaweicloud/rds/v3/model/ListPublicationsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListPublicationsRequest::ListPublicationsRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    publicationName_ = "";
    publicationNameIsSet_ = false;
    publicationDbName_ = "";
    publicationDbNameIsSet_ = false;
    subscriberInstanceId_ = "";
    subscriberInstanceIdIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListPublicationsRequest::~ListPublicationsRequest() = default;

void ListPublicationsRequest::validate()
{
}

web::json::value ListPublicationsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(publicationNameIsSet_) {
        val[utility::conversions::to_string_t("publication_name")] = ModelBase::toJson(publicationName_);
    }
    if(publicationDbNameIsSet_) {
        val[utility::conversions::to_string_t("publication_db_name")] = ModelBase::toJson(publicationDbName_);
    }
    if(subscriberInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("subscriber_instance_id")] = ModelBase::toJson(subscriberInstanceId_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ListPublicationsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("publication_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("publication_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicationName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("publication_db_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("publication_db_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicationDbName(refVal);
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


std::string ListPublicationsRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListPublicationsRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListPublicationsRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListPublicationsRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ListPublicationsRequest::getInstanceId() const
{
    return instanceId_;
}

void ListPublicationsRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListPublicationsRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListPublicationsRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListPublicationsRequest::getPublicationName() const
{
    return publicationName_;
}

void ListPublicationsRequest::setPublicationName(const std::string& value)
{
    publicationName_ = value;
    publicationNameIsSet_ = true;
}

bool ListPublicationsRequest::publicationNameIsSet() const
{
    return publicationNameIsSet_;
}

void ListPublicationsRequest::unsetpublicationName()
{
    publicationNameIsSet_ = false;
}

std::string ListPublicationsRequest::getPublicationDbName() const
{
    return publicationDbName_;
}

void ListPublicationsRequest::setPublicationDbName(const std::string& value)
{
    publicationDbName_ = value;
    publicationDbNameIsSet_ = true;
}

bool ListPublicationsRequest::publicationDbNameIsSet() const
{
    return publicationDbNameIsSet_;
}

void ListPublicationsRequest::unsetpublicationDbName()
{
    publicationDbNameIsSet_ = false;
}

std::string ListPublicationsRequest::getSubscriberInstanceId() const
{
    return subscriberInstanceId_;
}

void ListPublicationsRequest::setSubscriberInstanceId(const std::string& value)
{
    subscriberInstanceId_ = value;
    subscriberInstanceIdIsSet_ = true;
}

bool ListPublicationsRequest::subscriberInstanceIdIsSet() const
{
    return subscriberInstanceIdIsSet_;
}

void ListPublicationsRequest::unsetsubscriberInstanceId()
{
    subscriberInstanceIdIsSet_ = false;
}

int32_t ListPublicationsRequest::getOffset() const
{
    return offset_;
}

void ListPublicationsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListPublicationsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListPublicationsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListPublicationsRequest::getLimit() const
{
    return limit_;
}

void ListPublicationsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListPublicationsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListPublicationsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


