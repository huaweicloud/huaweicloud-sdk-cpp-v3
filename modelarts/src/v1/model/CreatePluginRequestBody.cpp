

#include "huaweicloud/modelarts/v1/model/CreatePluginRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




CreatePluginRequestBody::CreatePluginRequestBody()
{
    apiVersion_ = "";
    apiVersionIsSet_ = false;
    kind_ = "";
    kindIsSet_ = false;
    specIsSet_ = false;
}

CreatePluginRequestBody::~CreatePluginRequestBody() = default;

void CreatePluginRequestBody::validate()
{
}

web::json::value CreatePluginRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(apiVersionIsSet_) {
        val[utility::conversions::to_string_t("apiVersion")] = ModelBase::toJson(apiVersion_);
    }
    if(kindIsSet_) {
        val[utility::conversions::to_string_t("kind")] = ModelBase::toJson(kind_);
    }
    if(specIsSet_) {
        val[utility::conversions::to_string_t("spec")] = ModelBase::toJson(spec_);
    }

    return val;
}
bool CreatePluginRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("apiVersion"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("apiVersion"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApiVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("kind"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("kind"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKind(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("spec"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("spec"));
        if(!fieldValue.is_null())
        {
            PluginSpec refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpec(refVal);
        }
    }
    return ok;
}


std::string CreatePluginRequestBody::getApiVersion() const
{
    return apiVersion_;
}

void CreatePluginRequestBody::setApiVersion(const std::string& value)
{
    apiVersion_ = value;
    apiVersionIsSet_ = true;
}

bool CreatePluginRequestBody::apiVersionIsSet() const
{
    return apiVersionIsSet_;
}

void CreatePluginRequestBody::unsetapiVersion()
{
    apiVersionIsSet_ = false;
}

std::string CreatePluginRequestBody::getKind() const
{
    return kind_;
}

void CreatePluginRequestBody::setKind(const std::string& value)
{
    kind_ = value;
    kindIsSet_ = true;
}

bool CreatePluginRequestBody::kindIsSet() const
{
    return kindIsSet_;
}

void CreatePluginRequestBody::unsetkind()
{
    kindIsSet_ = false;
}

PluginSpec CreatePluginRequestBody::getSpec() const
{
    return spec_;
}

void CreatePluginRequestBody::setSpec(const PluginSpec& value)
{
    spec_ = value;
    specIsSet_ = true;
}

bool CreatePluginRequestBody::specIsSet() const
{
    return specIsSet_;
}

void CreatePluginRequestBody::unsetspec()
{
    specIsSet_ = false;
}

}
}
}
}
}


