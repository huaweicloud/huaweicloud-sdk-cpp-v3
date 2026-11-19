

#include "huaweicloud/gaussdbforopengauss/v3/model/UninstallPluginRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




UninstallPluginRequest::UninstallPluginRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

UninstallPluginRequest::~UninstallPluginRequest() = default;

void UninstallPluginRequest::validate()
{
}

web::json::value UninstallPluginRequest::toJson() const
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
bool UninstallPluginRequest::fromJson(const web::json::value& val)
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
            UninstallPluginRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UninstallPluginRequest::getXLanguage() const
{
    return xLanguage_;
}

void UninstallPluginRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool UninstallPluginRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void UninstallPluginRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string UninstallPluginRequest::getInstanceId() const
{
    return instanceId_;
}

void UninstallPluginRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UninstallPluginRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UninstallPluginRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

UninstallPluginRequestBody UninstallPluginRequest::getBody() const
{
    return body_;
}

void UninstallPluginRequest::setBody(const UninstallPluginRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UninstallPluginRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UninstallPluginRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


