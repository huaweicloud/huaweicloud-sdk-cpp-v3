

#include "huaweicloud/rds/v3/model/StartFailoverRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




StartFailoverRequest::StartFailoverRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

StartFailoverRequest::~StartFailoverRequest() = default;

void StartFailoverRequest::validate()
{
}

web::json::value StartFailoverRequest::toJson() const
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
bool StartFailoverRequest::fromJson(const web::json::value& val)
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
            FailoverRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string StartFailoverRequest::getXLanguage() const
{
    return xLanguage_;
}

void StartFailoverRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool StartFailoverRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void StartFailoverRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string StartFailoverRequest::getInstanceId() const
{
    return instanceId_;
}

void StartFailoverRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool StartFailoverRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void StartFailoverRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

FailoverRequest StartFailoverRequest::getBody() const
{
    return body_;
}

void StartFailoverRequest::setBody(const FailoverRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool StartFailoverRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void StartFailoverRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


