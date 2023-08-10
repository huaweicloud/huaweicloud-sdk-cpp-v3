

#include "huaweicloud/gaussdb/v3/model/UpdateProxyPortRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




UpdateProxyPortRequest::UpdateProxyPortRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    proxyId_ = "";
    proxyIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateProxyPortRequest::~UpdateProxyPortRequest() = default;

void UpdateProxyPortRequest::validate()
{
}

web::json::value UpdateProxyPortRequest::toJson() const
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

bool UpdateProxyPortRequest::fromJson(const web::json::value& val)
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
            UpdateProxyPortRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string UpdateProxyPortRequest::getXLanguage() const
{
    return xLanguage_;
}

void UpdateProxyPortRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool UpdateProxyPortRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void UpdateProxyPortRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string UpdateProxyPortRequest::getInstanceId() const
{
    return instanceId_;
}

void UpdateProxyPortRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UpdateProxyPortRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UpdateProxyPortRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string UpdateProxyPortRequest::getProxyId() const
{
    return proxyId_;
}

void UpdateProxyPortRequest::setProxyId(const std::string& value)
{
    proxyId_ = value;
    proxyIdIsSet_ = true;
}

bool UpdateProxyPortRequest::proxyIdIsSet() const
{
    return proxyIdIsSet_;
}

void UpdateProxyPortRequest::unsetproxyId()
{
    proxyIdIsSet_ = false;
}

UpdateProxyPortRequestBody UpdateProxyPortRequest::getBody() const
{
    return body_;
}

void UpdateProxyPortRequest::setBody(const UpdateProxyPortRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateProxyPortRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateProxyPortRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


