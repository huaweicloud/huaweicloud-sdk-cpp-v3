

#include "huaweicloud/rds/v3/model/StartInstanceRestartActionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




StartInstanceRestartActionRequest::StartInstanceRestartActionRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

StartInstanceRestartActionRequest::~StartInstanceRestartActionRequest() = default;

void StartInstanceRestartActionRequest::validate()
{
}

web::json::value StartInstanceRestartActionRequest::toJson() const
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
bool StartInstanceRestartActionRequest::fromJson(const web::json::value& val)
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
            InstanceRestartRequsetBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string StartInstanceRestartActionRequest::getXLanguage() const
{
    return xLanguage_;
}

void StartInstanceRestartActionRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool StartInstanceRestartActionRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void StartInstanceRestartActionRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string StartInstanceRestartActionRequest::getInstanceId() const
{
    return instanceId_;
}

void StartInstanceRestartActionRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool StartInstanceRestartActionRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void StartInstanceRestartActionRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

InstanceRestartRequsetBody StartInstanceRestartActionRequest::getBody() const
{
    return body_;
}

void StartInstanceRestartActionRequest::setBody(const InstanceRestartRequsetBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool StartInstanceRestartActionRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void StartInstanceRestartActionRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


