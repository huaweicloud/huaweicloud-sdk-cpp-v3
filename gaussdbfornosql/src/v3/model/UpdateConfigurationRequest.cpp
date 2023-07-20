

#include "huaweicloud/gaussdbfornosql/v3/model/UpdateConfigurationRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




UpdateConfigurationRequest::UpdateConfigurationRequest()
{
    configId_ = "";
    configIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateConfigurationRequest::~UpdateConfigurationRequest() = default;

void UpdateConfigurationRequest::validate()
{
}

web::json::value UpdateConfigurationRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(configIdIsSet_) {
        val[utility::conversions::to_string_t("config_id")] = ModelBase::toJson(configId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool UpdateConfigurationRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("config_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("config_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfigId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateConfigurationRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string UpdateConfigurationRequest::getConfigId() const
{
    return configId_;
}

void UpdateConfigurationRequest::setConfigId(const std::string& value)
{
    configId_ = value;
    configIdIsSet_ = true;
}

bool UpdateConfigurationRequest::configIdIsSet() const
{
    return configIdIsSet_;
}

void UpdateConfigurationRequest::unsetconfigId()
{
    configIdIsSet_ = false;
}

UpdateConfigurationRequestBody UpdateConfigurationRequest::getBody() const
{
    return body_;
}

void UpdateConfigurationRequest::setBody(const UpdateConfigurationRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateConfigurationRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateConfigurationRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


