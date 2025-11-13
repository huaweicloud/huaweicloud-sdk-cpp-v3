

#include "huaweicloud/rds/v3/model/ListPublications4SubscriptionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListPublications4SubscriptionRequest::ListPublications4SubscriptionRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

ListPublications4SubscriptionRequest::~ListPublications4SubscriptionRequest() = default;

void ListPublications4SubscriptionRequest::validate()
{
}

web::json::value ListPublications4SubscriptionRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListPublications4SubscriptionRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ListPublications4SubscriptionRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ListPublications4SubscriptionRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListPublications4SubscriptionRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListPublications4SubscriptionRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListPublications4SubscriptionRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ListPublications4SubscriptionRequest::getInstanceId() const
{
    return instanceId_;
}

void ListPublications4SubscriptionRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListPublications4SubscriptionRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListPublications4SubscriptionRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

ListPublications4SubscriptionRequestBody ListPublications4SubscriptionRequest::getBody() const
{
    return body_;
}

void ListPublications4SubscriptionRequest::setBody(const ListPublications4SubscriptionRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListPublications4SubscriptionRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListPublications4SubscriptionRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


