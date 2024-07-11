

#include "huaweicloud/gaussdbforopengauss/v3/model/SetKernelPluginLicenseRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




SetKernelPluginLicenseRequest::SetKernelPluginLicenseRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

SetKernelPluginLicenseRequest::~SetKernelPluginLicenseRequest() = default;

void SetKernelPluginLicenseRequest::validate()
{
}

web::json::value SetKernelPluginLicenseRequest::toJson() const
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
bool SetKernelPluginLicenseRequest::fromJson(const web::json::value& val)
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
            SetKernelPluginLicenseRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string SetKernelPluginLicenseRequest::getXLanguage() const
{
    return xLanguage_;
}

void SetKernelPluginLicenseRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool SetKernelPluginLicenseRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void SetKernelPluginLicenseRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string SetKernelPluginLicenseRequest::getInstanceId() const
{
    return instanceId_;
}

void SetKernelPluginLicenseRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool SetKernelPluginLicenseRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void SetKernelPluginLicenseRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

SetKernelPluginLicenseRequestBody SetKernelPluginLicenseRequest::getBody() const
{
    return body_;
}

void SetKernelPluginLicenseRequest::setBody(const SetKernelPluginLicenseRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SetKernelPluginLicenseRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void SetKernelPluginLicenseRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


