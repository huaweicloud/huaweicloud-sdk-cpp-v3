

#include "huaweicloud/gaussdb/v3/model/UpdateInstanceConfigurationsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




UpdateInstanceConfigurationsRequest::UpdateInstanceConfigurationsRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateInstanceConfigurationsRequest::~UpdateInstanceConfigurationsRequest() = default;

void UpdateInstanceConfigurationsRequest::validate()
{
}

web::json::value UpdateInstanceConfigurationsRequest::toJson() const
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
bool UpdateInstanceConfigurationsRequest::fromJson(const web::json::value& val)
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
            UpdateInstanceConfigurationsRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateInstanceConfigurationsRequest::getXLanguage() const
{
    return xLanguage_;
}

void UpdateInstanceConfigurationsRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool UpdateInstanceConfigurationsRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void UpdateInstanceConfigurationsRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string UpdateInstanceConfigurationsRequest::getInstanceId() const
{
    return instanceId_;
}

void UpdateInstanceConfigurationsRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UpdateInstanceConfigurationsRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UpdateInstanceConfigurationsRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

UpdateInstanceConfigurationsRequestBody UpdateInstanceConfigurationsRequest::getBody() const
{
    return body_;
}

void UpdateInstanceConfigurationsRequest::setBody(const UpdateInstanceConfigurationsRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateInstanceConfigurationsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateInstanceConfigurationsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


