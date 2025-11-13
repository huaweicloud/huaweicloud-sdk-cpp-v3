

#include "huaweicloud/rds/v3/model/DeleteSubscriptionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




DeleteSubscriptionRequest::DeleteSubscriptionRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

DeleteSubscriptionRequest::~DeleteSubscriptionRequest() = default;

void DeleteSubscriptionRequest::validate()
{
}

web::json::value DeleteSubscriptionRequest::toJson() const
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
bool DeleteSubscriptionRequest::fromJson(const web::json::value& val)
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
            DeleteSubscriptionRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string DeleteSubscriptionRequest::getXLanguage() const
{
    return xLanguage_;
}

void DeleteSubscriptionRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool DeleteSubscriptionRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void DeleteSubscriptionRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string DeleteSubscriptionRequest::getInstanceId() const
{
    return instanceId_;
}

void DeleteSubscriptionRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool DeleteSubscriptionRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void DeleteSubscriptionRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

DeleteSubscriptionRequestBody DeleteSubscriptionRequest::getBody() const
{
    return body_;
}

void DeleteSubscriptionRequest::setBody(const DeleteSubscriptionRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteSubscriptionRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteSubscriptionRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


