

#include "huaweicloud/gaussdbforopengauss/v3/model/RunInstanceActionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




RunInstanceActionRequest::RunInstanceActionRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

RunInstanceActionRequest::~RunInstanceActionRequest() = default;

void RunInstanceActionRequest::validate()
{
}

web::json::value RunInstanceActionRequest::toJson() const
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
bool RunInstanceActionRequest::fromJson(const web::json::value& val)
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
            OpenGaussInstanceActionRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string RunInstanceActionRequest::getXLanguage() const
{
    return xLanguage_;
}

void RunInstanceActionRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool RunInstanceActionRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void RunInstanceActionRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string RunInstanceActionRequest::getInstanceId() const
{
    return instanceId_;
}

void RunInstanceActionRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool RunInstanceActionRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void RunInstanceActionRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

OpenGaussInstanceActionRequest RunInstanceActionRequest::getBody() const
{
    return body_;
}

void RunInstanceActionRequest::setBody(const OpenGaussInstanceActionRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool RunInstanceActionRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void RunInstanceActionRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


