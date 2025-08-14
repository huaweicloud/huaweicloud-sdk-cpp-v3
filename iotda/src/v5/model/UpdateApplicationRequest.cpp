

#include "huaweicloud/iotda/v5/model/UpdateApplicationRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




UpdateApplicationRequest::UpdateApplicationRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    appId_ = "";
    appIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateApplicationRequest::~UpdateApplicationRequest() = default;

void UpdateApplicationRequest::validate()
{
}

web::json::value UpdateApplicationRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("Instance-Id")] = ModelBase::toJson(instanceId_);
    }
    if(appIdIsSet_) {
        val[utility::conversions::to_string_t("app_id")] = ModelBase::toJson(appId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateApplicationRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("Instance-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Instance-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("app_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateApplicationDTO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateApplicationRequest::getInstanceId() const
{
    return instanceId_;
}

void UpdateApplicationRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UpdateApplicationRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UpdateApplicationRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string UpdateApplicationRequest::getAppId() const
{
    return appId_;
}

void UpdateApplicationRequest::setAppId(const std::string& value)
{
    appId_ = value;
    appIdIsSet_ = true;
}

bool UpdateApplicationRequest::appIdIsSet() const
{
    return appIdIsSet_;
}

void UpdateApplicationRequest::unsetappId()
{
    appIdIsSet_ = false;
}

UpdateApplicationDTO UpdateApplicationRequest::getBody() const
{
    return body_;
}

void UpdateApplicationRequest::setBody(const UpdateApplicationDTO& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateApplicationRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateApplicationRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


