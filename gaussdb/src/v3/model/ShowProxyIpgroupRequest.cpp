

#include "huaweicloud/gaussdb/v3/model/ShowProxyIpgroupRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ShowProxyIpgroupRequest::ShowProxyIpgroupRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    proxyId_ = "";
    proxyIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
}

ShowProxyIpgroupRequest::~ShowProxyIpgroupRequest() = default;

void ShowProxyIpgroupRequest::validate()
{
}

web::json::value ShowProxyIpgroupRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(proxyIdIsSet_) {
        val[utility::conversions::to_string_t("proxy_id")] = ModelBase::toJson(proxyId_);
    }
    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }

    return val;
}
bool ShowProxyIpgroupRequest::fromJson(const web::json::value& val)
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


std::string ShowProxyIpgroupRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowProxyIpgroupRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowProxyIpgroupRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowProxyIpgroupRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ShowProxyIpgroupRequest::getProxyId() const
{
    return proxyId_;
}

void ShowProxyIpgroupRequest::setProxyId(const std::string& value)
{
    proxyId_ = value;
    proxyIdIsSet_ = true;
}

bool ShowProxyIpgroupRequest::proxyIdIsSet() const
{
    return proxyIdIsSet_;
}

void ShowProxyIpgroupRequest::unsetproxyId()
{
    proxyIdIsSet_ = false;
}

std::string ShowProxyIpgroupRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowProxyIpgroupRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowProxyIpgroupRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowProxyIpgroupRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

}
}
}
}
}


