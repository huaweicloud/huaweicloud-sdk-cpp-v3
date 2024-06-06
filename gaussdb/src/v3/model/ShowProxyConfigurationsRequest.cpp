

#include "huaweicloud/gaussdb/v3/model/ShowProxyConfigurationsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ShowProxyConfigurationsRequest::ShowProxyConfigurationsRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    proxyId_ = "";
    proxyIdIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
}

ShowProxyConfigurationsRequest::~ShowProxyConfigurationsRequest() = default;

void ShowProxyConfigurationsRequest::validate()
{
}

web::json::value ShowProxyConfigurationsRequest::toJson() const
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
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }

    return val;
}
bool ShowProxyConfigurationsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    return ok;
}


std::string ShowProxyConfigurationsRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowProxyConfigurationsRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowProxyConfigurationsRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowProxyConfigurationsRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ShowProxyConfigurationsRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowProxyConfigurationsRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowProxyConfigurationsRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowProxyConfigurationsRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ShowProxyConfigurationsRequest::getProxyId() const
{
    return proxyId_;
}

void ShowProxyConfigurationsRequest::setProxyId(const std::string& value)
{
    proxyId_ = value;
    proxyIdIsSet_ = true;
}

bool ShowProxyConfigurationsRequest::proxyIdIsSet() const
{
    return proxyIdIsSet_;
}

void ShowProxyConfigurationsRequest::unsetproxyId()
{
    proxyIdIsSet_ = false;
}

int32_t ShowProxyConfigurationsRequest::getLimit() const
{
    return limit_;
}

void ShowProxyConfigurationsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ShowProxyConfigurationsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ShowProxyConfigurationsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ShowProxyConfigurationsRequest::getOffset() const
{
    return offset_;
}

void ShowProxyConfigurationsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ShowProxyConfigurationsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ShowProxyConfigurationsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ShowProxyConfigurationsRequest::getName() const
{
    return name_;
}

void ShowProxyConfigurationsRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ShowProxyConfigurationsRequest::nameIsSet() const
{
    return nameIsSet_;
}

void ShowProxyConfigurationsRequest::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


