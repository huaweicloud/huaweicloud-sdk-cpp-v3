

#include "huaweicloud/gaussdb/v3/model/ShowProxyVersionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ShowProxyVersionRequest::ShowProxyVersionRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    engineName_ = "";
    engineNameIsSet_ = false;
    proxyId_ = "";
    proxyIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
}

ShowProxyVersionRequest::~ShowProxyVersionRequest() = default;

void ShowProxyVersionRequest::validate()
{
}

web::json::value ShowProxyVersionRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(engineNameIsSet_) {
        val[utility::conversions::to_string_t("engine_name")] = ModelBase::toJson(engineName_);
    }
    if(proxyIdIsSet_) {
        val[utility::conversions::to_string_t("proxy_id")] = ModelBase::toJson(proxyId_);
    }
    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }

    return val;
}
bool ShowProxyVersionRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("engine_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("engine_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEngineName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    return ok;
}


std::string ShowProxyVersionRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowProxyVersionRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowProxyVersionRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowProxyVersionRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ShowProxyVersionRequest::getEngineName() const
{
    return engineName_;
}

void ShowProxyVersionRequest::setEngineName(const std::string& value)
{
    engineName_ = value;
    engineNameIsSet_ = true;
}

bool ShowProxyVersionRequest::engineNameIsSet() const
{
    return engineNameIsSet_;
}

void ShowProxyVersionRequest::unsetengineName()
{
    engineNameIsSet_ = false;
}

std::string ShowProxyVersionRequest::getProxyId() const
{
    return proxyId_;
}

void ShowProxyVersionRequest::setProxyId(const std::string& value)
{
    proxyId_ = value;
    proxyIdIsSet_ = true;
}

bool ShowProxyVersionRequest::proxyIdIsSet() const
{
    return proxyIdIsSet_;
}

void ShowProxyVersionRequest::unsetproxyId()
{
    proxyIdIsSet_ = false;
}

std::string ShowProxyVersionRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowProxyVersionRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowProxyVersionRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowProxyVersionRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

}
}
}
}
}


