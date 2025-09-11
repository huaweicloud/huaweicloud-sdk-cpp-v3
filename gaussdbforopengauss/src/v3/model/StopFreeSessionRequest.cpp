

#include "huaweicloud/gaussdbforopengauss/v3/model/StopFreeSessionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




StopFreeSessionRequest::StopFreeSessionRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

StopFreeSessionRequest::~StopFreeSessionRequest() = default;

void StopFreeSessionRequest::validate()
{
}

web::json::value StopFreeSessionRequest::toJson() const
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
bool StopFreeSessionRequest::fromJson(const web::json::value& val)
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
            BaseOpsKeyViewRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string StopFreeSessionRequest::getXLanguage() const
{
    return xLanguage_;
}

void StopFreeSessionRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool StopFreeSessionRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void StopFreeSessionRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string StopFreeSessionRequest::getInstanceId() const
{
    return instanceId_;
}

void StopFreeSessionRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool StopFreeSessionRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void StopFreeSessionRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

BaseOpsKeyViewRequestBody StopFreeSessionRequest::getBody() const
{
    return body_;
}

void StopFreeSessionRequest::setBody(const BaseOpsKeyViewRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool StopFreeSessionRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void StopFreeSessionRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


