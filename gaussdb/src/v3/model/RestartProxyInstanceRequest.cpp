

#include "huaweicloud/gaussdb/v3/model/RestartProxyInstanceRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




RestartProxyInstanceRequest::RestartProxyInstanceRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    proxyId_ = "";
    proxyIdIsSet_ = false;
}

RestartProxyInstanceRequest::~RestartProxyInstanceRequest() = default;

void RestartProxyInstanceRequest::validate()
{
}

web::json::value RestartProxyInstanceRequest::toJson() const
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

    return val;
}
bool RestartProxyInstanceRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string RestartProxyInstanceRequest::getXLanguage() const
{
    return xLanguage_;
}

void RestartProxyInstanceRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool RestartProxyInstanceRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void RestartProxyInstanceRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string RestartProxyInstanceRequest::getInstanceId() const
{
    return instanceId_;
}

void RestartProxyInstanceRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool RestartProxyInstanceRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void RestartProxyInstanceRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string RestartProxyInstanceRequest::getProxyId() const
{
    return proxyId_;
}

void RestartProxyInstanceRequest::setProxyId(const std::string& value)
{
    proxyId_ = value;
    proxyIdIsSet_ = true;
}

bool RestartProxyInstanceRequest::proxyIdIsSet() const
{
    return proxyIdIsSet_;
}

void RestartProxyInstanceRequest::unsetproxyId()
{
    proxyIdIsSet_ = false;
}

}
}
}
}
}


