

#include "huaweicloud/modelarts/v1/model/CreatePoolPluginResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




CreatePoolPluginResponse::CreatePoolPluginResponse()
{
    apiVersion_ = "";
    apiVersionIsSet_ = false;
    kind_ = "";
    kindIsSet_ = false;
    metadataIsSet_ = false;
    specIsSet_ = false;
    statusIsSet_ = false;
}

CreatePoolPluginResponse::~CreatePoolPluginResponse() = default;

void CreatePoolPluginResponse::validate()
{
}

web::json::value CreatePoolPluginResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(apiVersionIsSet_) {
        val[utility::conversions::to_string_t("apiVersion")] = ModelBase::toJson(apiVersion_);
    }
    if(kindIsSet_) {
        val[utility::conversions::to_string_t("kind")] = ModelBase::toJson(kind_);
    }
    if(metadataIsSet_) {
        val[utility::conversions::to_string_t("metadata")] = ModelBase::toJson(metadata_);
    }
    if(specIsSet_) {
        val[utility::conversions::to_string_t("spec")] = ModelBase::toJson(spec_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool CreatePoolPluginResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("metadata"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("metadata"));
        if(!fieldValue.is_null())
        {
            PluginMetadata refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetadata(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            PluginStatus refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


std::string CreatePoolPluginResponse::getApiVersion() const
{
    return apiVersion_;
}

void CreatePoolPluginResponse::setApiVersion(const std::string& value)
{
    apiVersion_ = value;
    apiVersionIsSet_ = true;
}

bool CreatePoolPluginResponse::apiVersionIsSet() const
{
    return apiVersionIsSet_;
}

void CreatePoolPluginResponse::unsetapiVersion()
{
    apiVersionIsSet_ = false;
}

std::string CreatePoolPluginResponse::getKind() const
{
    return kind_;
}

void CreatePoolPluginResponse::setKind(const std::string& value)
{
    kind_ = value;
    kindIsSet_ = true;
}

bool CreatePoolPluginResponse::kindIsSet() const
{
    return kindIsSet_;
}

void CreatePoolPluginResponse::unsetkind()
{
    kindIsSet_ = false;
}

PluginMetadata CreatePoolPluginResponse::getMetadata() const
{
    return metadata_;
}

void CreatePoolPluginResponse::setMetadata(const PluginMetadata& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool CreatePoolPluginResponse::metadataIsSet() const
{
    return metadataIsSet_;
}

void CreatePoolPluginResponse::unsetmetadata()
{
    metadataIsSet_ = false;
}

PluginSpec CreatePoolPluginResponse::getSpec() const
{
    return spec_;
}

void CreatePoolPluginResponse::setSpec(const PluginSpec& value)
{
    spec_ = value;
    specIsSet_ = true;
}

bool CreatePoolPluginResponse::specIsSet() const
{
    return specIsSet_;
}

void CreatePoolPluginResponse::unsetspec()
{
    specIsSet_ = false;
}

PluginStatus CreatePoolPluginResponse::getStatus() const
{
    return status_;
}

void CreatePoolPluginResponse::setStatus(const PluginStatus& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool CreatePoolPluginResponse::statusIsSet() const
{
    return statusIsSet_;
}

void CreatePoolPluginResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


