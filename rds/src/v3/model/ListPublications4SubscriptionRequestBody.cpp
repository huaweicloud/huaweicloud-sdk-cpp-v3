

#include "huaweicloud/rds/v3/model/ListPublications4SubscriptionRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListPublications4SubscriptionRequestBody::ListPublications4SubscriptionRequestBody()
{
    publicationInstanceId_ = "";
    publicationInstanceIdIsSet_ = false;
    publicationInstanceName_ = "";
    publicationInstanceNameIsSet_ = false;
    publicationName_ = "";
    publicationNameIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListPublications4SubscriptionRequestBody::~ListPublications4SubscriptionRequestBody() = default;

void ListPublications4SubscriptionRequestBody::validate()
{
}

web::json::value ListPublications4SubscriptionRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(publicationInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("publication_instance_id")] = ModelBase::toJson(publicationInstanceId_);
    }
    if(publicationInstanceNameIsSet_) {
        val[utility::conversions::to_string_t("publication_instance_name")] = ModelBase::toJson(publicationInstanceName_);
    }
    if(publicationNameIsSet_) {
        val[utility::conversions::to_string_t("publication_name")] = ModelBase::toJson(publicationName_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ListPublications4SubscriptionRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("publication_instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("publication_instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicationInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("publication_instance_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("publication_instance_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicationInstanceName(refVal);
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


std::string ListPublications4SubscriptionRequestBody::getPublicationInstanceId() const
{
    return publicationInstanceId_;
}

void ListPublications4SubscriptionRequestBody::setPublicationInstanceId(const std::string& value)
{
    publicationInstanceId_ = value;
    publicationInstanceIdIsSet_ = true;
}

bool ListPublications4SubscriptionRequestBody::publicationInstanceIdIsSet() const
{
    return publicationInstanceIdIsSet_;
}

void ListPublications4SubscriptionRequestBody::unsetpublicationInstanceId()
{
    publicationInstanceIdIsSet_ = false;
}

std::string ListPublications4SubscriptionRequestBody::getPublicationInstanceName() const
{
    return publicationInstanceName_;
}

void ListPublications4SubscriptionRequestBody::setPublicationInstanceName(const std::string& value)
{
    publicationInstanceName_ = value;
    publicationInstanceNameIsSet_ = true;
}

bool ListPublications4SubscriptionRequestBody::publicationInstanceNameIsSet() const
{
    return publicationInstanceNameIsSet_;
}

void ListPublications4SubscriptionRequestBody::unsetpublicationInstanceName()
{
    publicationInstanceNameIsSet_ = false;
}

std::string ListPublications4SubscriptionRequestBody::getPublicationName() const
{
    return publicationName_;
}

void ListPublications4SubscriptionRequestBody::setPublicationName(const std::string& value)
{
    publicationName_ = value;
    publicationNameIsSet_ = true;
}

bool ListPublications4SubscriptionRequestBody::publicationNameIsSet() const
{
    return publicationNameIsSet_;
}

void ListPublications4SubscriptionRequestBody::unsetpublicationName()
{
    publicationNameIsSet_ = false;
}

int32_t ListPublications4SubscriptionRequestBody::getOffset() const
{
    return offset_;
}

void ListPublications4SubscriptionRequestBody::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListPublications4SubscriptionRequestBody::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListPublications4SubscriptionRequestBody::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListPublications4SubscriptionRequestBody::getLimit() const
{
    return limit_;
}

void ListPublications4SubscriptionRequestBody::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListPublications4SubscriptionRequestBody::limitIsSet() const
{
    return limitIsSet_;
}

void ListPublications4SubscriptionRequestBody::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


