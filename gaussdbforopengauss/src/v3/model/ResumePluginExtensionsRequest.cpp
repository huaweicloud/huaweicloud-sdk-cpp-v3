

#include "huaweicloud/gaussdbforopengauss/v3/model/ResumePluginExtensionsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ResumePluginExtensionsRequest::ResumePluginExtensionsRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

ResumePluginExtensionsRequest::~ResumePluginExtensionsRequest() = default;

void ResumePluginExtensionsRequest::validate()
{
}

web::json::value ResumePluginExtensionsRequest::toJson() const
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
bool ResumePluginExtensionsRequest::fromJson(const web::json::value& val)
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
            ResumePluginExtensionsRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ResumePluginExtensionsRequest::getXLanguage() const
{
    return xLanguage_;
}

void ResumePluginExtensionsRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ResumePluginExtensionsRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ResumePluginExtensionsRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ResumePluginExtensionsRequest::getInstanceId() const
{
    return instanceId_;
}

void ResumePluginExtensionsRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ResumePluginExtensionsRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ResumePluginExtensionsRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

ResumePluginExtensionsRequestBody ResumePluginExtensionsRequest::getBody() const
{
    return body_;
}

void ResumePluginExtensionsRequest::setBody(const ResumePluginExtensionsRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ResumePluginExtensionsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ResumePluginExtensionsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


