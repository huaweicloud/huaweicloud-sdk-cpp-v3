

#include "huaweicloud/gaussdbfornosql/v3/model/ApplyConfigurationRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ApplyConfigurationRequest::ApplyConfigurationRequest()
{
    configId_ = "";
    configIdIsSet_ = false;
    bodyIsSet_ = false;
}

ApplyConfigurationRequest::~ApplyConfigurationRequest() = default;

void ApplyConfigurationRequest::validate()
{
}

web::json::value ApplyConfigurationRequest::toJson() const
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

bool ApplyConfigurationRequest::fromJson(const web::json::value& val)
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
            ApplyConfigurationRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string ApplyConfigurationRequest::getConfigId() const
{
    return configId_;
}

void ApplyConfigurationRequest::setConfigId(const std::string& value)
{
    configId_ = value;
    configIdIsSet_ = true;
}

bool ApplyConfigurationRequest::configIdIsSet() const
{
    return configIdIsSet_;
}

void ApplyConfigurationRequest::unsetconfigId()
{
    configIdIsSet_ = false;
}

ApplyConfigurationRequestBody ApplyConfigurationRequest::getBody() const
{
    return body_;
}

void ApplyConfigurationRequest::setBody(const ApplyConfigurationRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ApplyConfigurationRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ApplyConfigurationRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


