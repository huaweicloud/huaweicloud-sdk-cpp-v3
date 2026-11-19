

#include "huaweicloud/gaussdbforopengauss/v3/model/InstallPluginRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




InstallPluginRequest::InstallPluginRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

InstallPluginRequest::~InstallPluginRequest() = default;

void InstallPluginRequest::validate()
{
}

web::json::value InstallPluginRequest::toJson() const
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
bool InstallPluginRequest::fromJson(const web::json::value& val)
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
            InstallPluginRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string InstallPluginRequest::getXLanguage() const
{
    return xLanguage_;
}

void InstallPluginRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool InstallPluginRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void InstallPluginRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string InstallPluginRequest::getInstanceId() const
{
    return instanceId_;
}

void InstallPluginRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool InstallPluginRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void InstallPluginRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

InstallPluginRequestBody InstallPluginRequest::getBody() const
{
    return body_;
}

void InstallPluginRequest::setBody(const InstallPluginRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool InstallPluginRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void InstallPluginRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


