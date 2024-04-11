

#include "huaweicloud/gaussdbforopengauss/v3/model/StartInstanceRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




StartInstanceRequest::StartInstanceRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

StartInstanceRequest::~StartInstanceRequest() = default;

void StartInstanceRequest::validate()
{
}

web::json::value StartInstanceRequest::toJson() const
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
bool StartInstanceRequest::fromJson(const web::json::value& val)
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
            StartInstanceRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string StartInstanceRequest::getXLanguage() const
{
    return xLanguage_;
}

void StartInstanceRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool StartInstanceRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void StartInstanceRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string StartInstanceRequest::getInstanceId() const
{
    return instanceId_;
}

void StartInstanceRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool StartInstanceRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void StartInstanceRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

StartInstanceRequestBody StartInstanceRequest::getBody() const
{
    return body_;
}

void StartInstanceRequest::setBody(const StartInstanceRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool StartInstanceRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void StartInstanceRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


