

#include "huaweicloud/gaussdbfornosql/v3/model/ApplyConfigurationToInstancesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ApplyConfigurationToInstancesRequest::ApplyConfigurationToInstancesRequest()
{
    configId_ = "";
    configIdIsSet_ = false;
    bodyIsSet_ = false;
}

ApplyConfigurationToInstancesRequest::~ApplyConfigurationToInstancesRequest() = default;

void ApplyConfigurationToInstancesRequest::validate()
{
}

web::json::value ApplyConfigurationToInstancesRequest::toJson() const
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
bool ApplyConfigurationToInstancesRequest::fromJson(const web::json::value& val)
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
            ApplyConfigurationToInstancesRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ApplyConfigurationToInstancesRequest::getConfigId() const
{
    return configId_;
}

void ApplyConfigurationToInstancesRequest::setConfigId(const std::string& value)
{
    configId_ = value;
    configIdIsSet_ = true;
}

bool ApplyConfigurationToInstancesRequest::configIdIsSet() const
{
    return configIdIsSet_;
}

void ApplyConfigurationToInstancesRequest::unsetconfigId()
{
    configIdIsSet_ = false;
}

ApplyConfigurationToInstancesRequestBody ApplyConfigurationToInstancesRequest::getBody() const
{
    return body_;
}

void ApplyConfigurationToInstancesRequest::setBody(const ApplyConfigurationToInstancesRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ApplyConfigurationToInstancesRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ApplyConfigurationToInstancesRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


