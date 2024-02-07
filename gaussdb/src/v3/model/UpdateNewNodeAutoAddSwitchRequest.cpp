

#include "huaweicloud/gaussdb/v3/model/UpdateNewNodeAutoAddSwitchRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




UpdateNewNodeAutoAddSwitchRequest::UpdateNewNodeAutoAddSwitchRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    proxyId_ = "";
    proxyIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateNewNodeAutoAddSwitchRequest::~UpdateNewNodeAutoAddSwitchRequest() = default;

void UpdateNewNodeAutoAddSwitchRequest::validate()
{
}

web::json::value UpdateNewNodeAutoAddSwitchRequest::toJson() const
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
bool UpdateNewNodeAutoAddSwitchRequest::fromJson(const web::json::value& val)
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
            UpdateNewNodeAutoAddSwitchRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateNewNodeAutoAddSwitchRequest::getXLanguage() const
{
    return xLanguage_;
}

void UpdateNewNodeAutoAddSwitchRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool UpdateNewNodeAutoAddSwitchRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void UpdateNewNodeAutoAddSwitchRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string UpdateNewNodeAutoAddSwitchRequest::getInstanceId() const
{
    return instanceId_;
}

void UpdateNewNodeAutoAddSwitchRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UpdateNewNodeAutoAddSwitchRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UpdateNewNodeAutoAddSwitchRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string UpdateNewNodeAutoAddSwitchRequest::getProxyId() const
{
    return proxyId_;
}

void UpdateNewNodeAutoAddSwitchRequest::setProxyId(const std::string& value)
{
    proxyId_ = value;
    proxyIdIsSet_ = true;
}

bool UpdateNewNodeAutoAddSwitchRequest::proxyIdIsSet() const
{
    return proxyIdIsSet_;
}

void UpdateNewNodeAutoAddSwitchRequest::unsetproxyId()
{
    proxyIdIsSet_ = false;
}

UpdateNewNodeAutoAddSwitchRequestBody UpdateNewNodeAutoAddSwitchRequest::getBody() const
{
    return body_;
}

void UpdateNewNodeAutoAddSwitchRequest::setBody(const UpdateNewNodeAutoAddSwitchRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateNewNodeAutoAddSwitchRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateNewNodeAutoAddSwitchRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


