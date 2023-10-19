

#include "huaweicloud/gaussdb/v3/model/UpdateProxyNewConfigurationsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




UpdateProxyNewConfigurationsRequest::UpdateProxyNewConfigurationsRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    proxyId_ = "";
    proxyIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateProxyNewConfigurationsRequest::~UpdateProxyNewConfigurationsRequest() = default;

void UpdateProxyNewConfigurationsRequest::validate()
{
}

web::json::value UpdateProxyNewConfigurationsRequest::toJson() const
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
bool UpdateProxyNewConfigurationsRequest::fromJson(const web::json::value& val)
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
            UpdateProxyNewConfigRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateProxyNewConfigurationsRequest::getXLanguage() const
{
    return xLanguage_;
}

void UpdateProxyNewConfigurationsRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool UpdateProxyNewConfigurationsRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void UpdateProxyNewConfigurationsRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string UpdateProxyNewConfigurationsRequest::getInstanceId() const
{
    return instanceId_;
}

void UpdateProxyNewConfigurationsRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UpdateProxyNewConfigurationsRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UpdateProxyNewConfigurationsRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string UpdateProxyNewConfigurationsRequest::getProxyId() const
{
    return proxyId_;
}

void UpdateProxyNewConfigurationsRequest::setProxyId(const std::string& value)
{
    proxyId_ = value;
    proxyIdIsSet_ = true;
}

bool UpdateProxyNewConfigurationsRequest::proxyIdIsSet() const
{
    return proxyIdIsSet_;
}

void UpdateProxyNewConfigurationsRequest::unsetproxyId()
{
    proxyIdIsSet_ = false;
}

UpdateProxyNewConfigRequestBody UpdateProxyNewConfigurationsRequest::getBody() const
{
    return body_;
}

void UpdateProxyNewConfigurationsRequest::setBody(const UpdateProxyNewConfigRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateProxyNewConfigurationsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateProxyNewConfigurationsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


