

#include "huaweicloud/rds/v3/model/CreateSubscriptionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




CreateSubscriptionRequest::CreateSubscriptionRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateSubscriptionRequest::~CreateSubscriptionRequest() = default;

void CreateSubscriptionRequest::validate()
{
}

web::json::value CreateSubscriptionRequest::toJson() const
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
bool CreateSubscriptionRequest::fromJson(const web::json::value& val)
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
            CreateSubscriptionRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateSubscriptionRequest::getXLanguage() const
{
    return xLanguage_;
}

void CreateSubscriptionRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool CreateSubscriptionRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void CreateSubscriptionRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string CreateSubscriptionRequest::getInstanceId() const
{
    return instanceId_;
}

void CreateSubscriptionRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool CreateSubscriptionRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void CreateSubscriptionRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

CreateSubscriptionRequestBody CreateSubscriptionRequest::getBody() const
{
    return body_;
}

void CreateSubscriptionRequest::setBody(const CreateSubscriptionRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateSubscriptionRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateSubscriptionRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


