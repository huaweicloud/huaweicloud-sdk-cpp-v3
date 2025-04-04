

#include "huaweicloud/gaussdbforopengauss/v3/model/StopInstanceRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




StopInstanceRequest::StopInstanceRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

StopInstanceRequest::~StopInstanceRequest() = default;

void StopInstanceRequest::validate()
{
}

web::json::value StopInstanceRequest::toJson() const
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
bool StopInstanceRequest::fromJson(const web::json::value& val)
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
            StopInstanceRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string StopInstanceRequest::getXLanguage() const
{
    return xLanguage_;
}

void StopInstanceRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool StopInstanceRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void StopInstanceRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string StopInstanceRequest::getInstanceId() const
{
    return instanceId_;
}

void StopInstanceRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool StopInstanceRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void StopInstanceRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

StopInstanceRequestBody StopInstanceRequest::getBody() const
{
    return body_;
}

void StopInstanceRequest::setBody(const StopInstanceRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool StopInstanceRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void StopInstanceRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


