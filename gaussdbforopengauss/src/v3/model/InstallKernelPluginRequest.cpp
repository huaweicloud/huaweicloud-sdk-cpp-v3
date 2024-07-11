

#include "huaweicloud/gaussdbforopengauss/v3/model/InstallKernelPluginRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




InstallKernelPluginRequest::InstallKernelPluginRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

InstallKernelPluginRequest::~InstallKernelPluginRequest() = default;

void InstallKernelPluginRequest::validate()
{
}

web::json::value InstallKernelPluginRequest::toJson() const
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
bool InstallKernelPluginRequest::fromJson(const web::json::value& val)
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
            InstallKernelPluginRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string InstallKernelPluginRequest::getXLanguage() const
{
    return xLanguage_;
}

void InstallKernelPluginRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool InstallKernelPluginRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void InstallKernelPluginRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string InstallKernelPluginRequest::getInstanceId() const
{
    return instanceId_;
}

void InstallKernelPluginRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool InstallKernelPluginRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void InstallKernelPluginRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

InstallKernelPluginRequestBody InstallKernelPluginRequest::getBody() const
{
    return body_;
}

void InstallKernelPluginRequest::setBody(const InstallKernelPluginRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool InstallKernelPluginRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void InstallKernelPluginRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


