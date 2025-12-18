

#include "huaweicloud/cce/v3/model/ShowAutopilotFeatureGatesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ShowAutopilotFeatureGatesResponse::ShowAutopilotFeatureGatesResponse()
{
    kind_ = "";
    kindIsSet_ = false;
    apiVersion_ = "";
    apiVersionIsSet_ = false;
    specIsSet_ = false;
}

ShowAutopilotFeatureGatesResponse::~ShowAutopilotFeatureGatesResponse() = default;

void ShowAutopilotFeatureGatesResponse::validate()
{
}

web::json::value ShowAutopilotFeatureGatesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(kindIsSet_) {
        val[utility::conversions::to_string_t("kind")] = ModelBase::toJson(kind_);
    }
    if(apiVersionIsSet_) {
        val[utility::conversions::to_string_t("apiVersion")] = ModelBase::toJson(apiVersion_);
    }
    if(specIsSet_) {
        val[utility::conversions::to_string_t("spec")] = ModelBase::toJson(spec_);
    }

    return val;
}
bool ShowAutopilotFeatureGatesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("kind"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("kind"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKind(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("apiVersion"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("apiVersion"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApiVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("spec"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("spec"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, Object> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpec(refVal);
        }
    }
    return ok;
}


std::string ShowAutopilotFeatureGatesResponse::getKind() const
{
    return kind_;
}

void ShowAutopilotFeatureGatesResponse::setKind(const std::string& value)
{
    kind_ = value;
    kindIsSet_ = true;
}

bool ShowAutopilotFeatureGatesResponse::kindIsSet() const
{
    return kindIsSet_;
}

void ShowAutopilotFeatureGatesResponse::unsetkind()
{
    kindIsSet_ = false;
}

std::string ShowAutopilotFeatureGatesResponse::getApiVersion() const
{
    return apiVersion_;
}

void ShowAutopilotFeatureGatesResponse::setApiVersion(const std::string& value)
{
    apiVersion_ = value;
    apiVersionIsSet_ = true;
}

bool ShowAutopilotFeatureGatesResponse::apiVersionIsSet() const
{
    return apiVersionIsSet_;
}

void ShowAutopilotFeatureGatesResponse::unsetapiVersion()
{
    apiVersionIsSet_ = false;
}

std::map<std::string, Object>& ShowAutopilotFeatureGatesResponse::getSpec()
{
    return spec_;
}

void ShowAutopilotFeatureGatesResponse::setSpec(const std::map<std::string, Object>& value)
{
    spec_ = value;
    specIsSet_ = true;
}

bool ShowAutopilotFeatureGatesResponse::specIsSet() const
{
    return specIsSet_;
}

void ShowAutopilotFeatureGatesResponse::unsetspec()
{
    specIsSet_ = false;
}

}
}
}
}
}


