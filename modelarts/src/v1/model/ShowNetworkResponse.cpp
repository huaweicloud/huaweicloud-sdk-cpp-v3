

#include "huaweicloud/modelarts/v1/model/ShowNetworkResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ShowNetworkResponse::ShowNetworkResponse()
{
    apiVersion_ = "";
    apiVersionIsSet_ = false;
    kind_ = "";
    kindIsSet_ = false;
    metadataIsSet_ = false;
    specIsSet_ = false;
    statusIsSet_ = false;
}

ShowNetworkResponse::~ShowNetworkResponse() = default;

void ShowNetworkResponse::validate()
{
}

web::json::value ShowNetworkResponse::toJson() const
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
bool ShowNetworkResponse::fromJson(const web::json::value& val)
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
            NetworkMetadata refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetadata(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("spec"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("spec"));
        if(!fieldValue.is_null())
        {
            NetworkSpec refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpec(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            NetworkStatus refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


std::string ShowNetworkResponse::getApiVersion() const
{
    return apiVersion_;
}

void ShowNetworkResponse::setApiVersion(const std::string& value)
{
    apiVersion_ = value;
    apiVersionIsSet_ = true;
}

bool ShowNetworkResponse::apiVersionIsSet() const
{
    return apiVersionIsSet_;
}

void ShowNetworkResponse::unsetapiVersion()
{
    apiVersionIsSet_ = false;
}

std::string ShowNetworkResponse::getKind() const
{
    return kind_;
}

void ShowNetworkResponse::setKind(const std::string& value)
{
    kind_ = value;
    kindIsSet_ = true;
}

bool ShowNetworkResponse::kindIsSet() const
{
    return kindIsSet_;
}

void ShowNetworkResponse::unsetkind()
{
    kindIsSet_ = false;
}

NetworkMetadata ShowNetworkResponse::getMetadata() const
{
    return metadata_;
}

void ShowNetworkResponse::setMetadata(const NetworkMetadata& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool ShowNetworkResponse::metadataIsSet() const
{
    return metadataIsSet_;
}

void ShowNetworkResponse::unsetmetadata()
{
    metadataIsSet_ = false;
}

NetworkSpec ShowNetworkResponse::getSpec() const
{
    return spec_;
}

void ShowNetworkResponse::setSpec(const NetworkSpec& value)
{
    spec_ = value;
    specIsSet_ = true;
}

bool ShowNetworkResponse::specIsSet() const
{
    return specIsSet_;
}

void ShowNetworkResponse::unsetspec()
{
    specIsSet_ = false;
}

NetworkStatus ShowNetworkResponse::getStatus() const
{
    return status_;
}

void ShowNetworkResponse::setStatus(const NetworkStatus& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowNetworkResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowNetworkResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


