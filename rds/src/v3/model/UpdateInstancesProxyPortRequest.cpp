

#include "huaweicloud/rds/v3/model/UpdateInstancesProxyPortRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




UpdateInstancesProxyPortRequest::UpdateInstancesProxyPortRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    proxyId_ = "";
    proxyIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateInstancesProxyPortRequest::~UpdateInstancesProxyPortRequest() = default;

void UpdateInstancesProxyPortRequest::validate()
{
}

web::json::value UpdateInstancesProxyPortRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(proxyIdIsSet_) {
        val[utility::conversions::to_string_t("proxy_id")] = ModelBase::toJson(proxyId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateInstancesProxyPortRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("proxy_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("proxy_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProxyId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateInstancesProxyPortRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateInstancesProxyPortRequest::getXLanguage() const
{
    return xLanguage_;
}

void UpdateInstancesProxyPortRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool UpdateInstancesProxyPortRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void UpdateInstancesProxyPortRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string UpdateInstancesProxyPortRequest::getInstanceId() const
{
    return instanceId_;
}

void UpdateInstancesProxyPortRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UpdateInstancesProxyPortRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UpdateInstancesProxyPortRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string UpdateInstancesProxyPortRequest::getProxyId() const
{
    return proxyId_;
}

void UpdateInstancesProxyPortRequest::setProxyId(const std::string& value)
{
    proxyId_ = value;
    proxyIdIsSet_ = true;
}

bool UpdateInstancesProxyPortRequest::proxyIdIsSet() const
{
    return proxyIdIsSet_;
}

void UpdateInstancesProxyPortRequest::unsetproxyId()
{
    proxyIdIsSet_ = false;
}

UpdateInstancesProxyPortRequestBody UpdateInstancesProxyPortRequest::getBody() const
{
    return body_;
}

void UpdateInstancesProxyPortRequest::setBody(const UpdateInstancesProxyPortRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateInstancesProxyPortRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateInstancesProxyPortRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


