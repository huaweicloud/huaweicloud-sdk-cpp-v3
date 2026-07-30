

#include "huaweicloud/modelarts/v1/model/CreateNetworkResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




CreateNetworkResponse::CreateNetworkResponse()
{
    apiVersion_ = "";
    apiVersionIsSet_ = false;
    kind_ = "";
    kindIsSet_ = false;
    metadataIsSet_ = false;
    specIsSet_ = false;
    statusIsSet_ = false;
}

CreateNetworkResponse::~CreateNetworkResponse() = default;

void CreateNetworkResponse::validate()
{
}

web::json::value CreateNetworkResponse::toJson() const
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
bool CreateNetworkResponse::fromJson(const web::json::value& val)
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


std::string CreateNetworkResponse::getApiVersion() const
{
    return apiVersion_;
}

void CreateNetworkResponse::setApiVersion(const std::string& value)
{
    apiVersion_ = value;
    apiVersionIsSet_ = true;
}

bool CreateNetworkResponse::apiVersionIsSet() const
{
    return apiVersionIsSet_;
}

void CreateNetworkResponse::unsetapiVersion()
{
    apiVersionIsSet_ = false;
}

std::string CreateNetworkResponse::getKind() const
{
    return kind_;
}

void CreateNetworkResponse::setKind(const std::string& value)
{
    kind_ = value;
    kindIsSet_ = true;
}

bool CreateNetworkResponse::kindIsSet() const
{
    return kindIsSet_;
}

void CreateNetworkResponse::unsetkind()
{
    kindIsSet_ = false;
}

NetworkMetadata CreateNetworkResponse::getMetadata() const
{
    return metadata_;
}

void CreateNetworkResponse::setMetadata(const NetworkMetadata& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool CreateNetworkResponse::metadataIsSet() const
{
    return metadataIsSet_;
}

void CreateNetworkResponse::unsetmetadata()
{
    metadataIsSet_ = false;
}

NetworkSpec CreateNetworkResponse::getSpec() const
{
    return spec_;
}

void CreateNetworkResponse::setSpec(const NetworkSpec& value)
{
    spec_ = value;
    specIsSet_ = true;
}

bool CreateNetworkResponse::specIsSet() const
{
    return specIsSet_;
}

void CreateNetworkResponse::unsetspec()
{
    specIsSet_ = false;
}

NetworkStatus CreateNetworkResponse::getStatus() const
{
    return status_;
}

void CreateNetworkResponse::setStatus(const NetworkStatus& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool CreateNetworkResponse::statusIsSet() const
{
    return statusIsSet_;
}

void CreateNetworkResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


