

#include "huaweicloud/dds/v3/model/UpdateConfigurationParameterRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




UpdateConfigurationParameterRequest::UpdateConfigurationParameterRequest()
{
    configId_ = "";
    configIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateConfigurationParameterRequest::~UpdateConfigurationParameterRequest() = default;

void UpdateConfigurationParameterRequest::validate()
{
}

web::json::value UpdateConfigurationParameterRequest::toJson() const
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

bool UpdateConfigurationParameterRequest::fromJson(const web::json::value& val)
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
            UpdateConfigurationParameterRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string UpdateConfigurationParameterRequest::getConfigId() const
{
    return configId_;
}

void UpdateConfigurationParameterRequest::setConfigId(const std::string& value)
{
    configId_ = value;
    configIdIsSet_ = true;
}

bool UpdateConfigurationParameterRequest::configIdIsSet() const
{
    return configIdIsSet_;
}

void UpdateConfigurationParameterRequest::unsetconfigId()
{
    configIdIsSet_ = false;
}

UpdateConfigurationParameterRequestBody UpdateConfigurationParameterRequest::getBody() const
{
    return body_;
}

void UpdateConfigurationParameterRequest::setBody(const UpdateConfigurationParameterRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateConfigurationParameterRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateConfigurationParameterRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


