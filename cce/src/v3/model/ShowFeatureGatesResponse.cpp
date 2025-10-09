

#include "huaweicloud/cce/v3/model/ShowFeatureGatesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ShowFeatureGatesResponse::ShowFeatureGatesResponse()
{
    kind_ = "";
    kindIsSet_ = false;
    apiVersion_ = "";
    apiVersionIsSet_ = false;
    specIsSet_ = false;
}

ShowFeatureGatesResponse::~ShowFeatureGatesResponse() = default;

void ShowFeatureGatesResponse::validate()
{
}

web::json::value ShowFeatureGatesResponse::toJson() const
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
bool ShowFeatureGatesResponse::fromJson(const web::json::value& val)
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


std::string ShowFeatureGatesResponse::getKind() const
{
    return kind_;
}

void ShowFeatureGatesResponse::setKind(const std::string& value)
{
    kind_ = value;
    kindIsSet_ = true;
}

bool ShowFeatureGatesResponse::kindIsSet() const
{
    return kindIsSet_;
}

void ShowFeatureGatesResponse::unsetkind()
{
    kindIsSet_ = false;
}

std::string ShowFeatureGatesResponse::getApiVersion() const
{
    return apiVersion_;
}

void ShowFeatureGatesResponse::setApiVersion(const std::string& value)
{
    apiVersion_ = value;
    apiVersionIsSet_ = true;
}

bool ShowFeatureGatesResponse::apiVersionIsSet() const
{
    return apiVersionIsSet_;
}

void ShowFeatureGatesResponse::unsetapiVersion()
{
    apiVersionIsSet_ = false;
}

std::map<std::string, Object>& ShowFeatureGatesResponse::getSpec()
{
    return spec_;
}

void ShowFeatureGatesResponse::setSpec(const std::map<std::string, Object>& value)
{
    spec_ = value;
    specIsSet_ = true;
}

bool ShowFeatureGatesResponse::specIsSet() const
{
    return specIsSet_;
}

void ShowFeatureGatesResponse::unsetspec()
{
    specIsSet_ = false;
}

}
}
}
}
}


