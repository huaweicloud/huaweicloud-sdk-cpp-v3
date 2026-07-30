

#include "huaweicloud/modelarts/v1/model/DeleteNetworkResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




DeleteNetworkResponse::DeleteNetworkResponse()
{
    apiVersion_ = "";
    apiVersionIsSet_ = false;
    kind_ = "";
    kindIsSet_ = false;
    metadataIsSet_ = false;
    specIsSet_ = false;
    statusIsSet_ = false;
}

DeleteNetworkResponse::~DeleteNetworkResponse() = default;

void DeleteNetworkResponse::validate()
{
}

web::json::value DeleteNetworkResponse::toJson() const
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
bool DeleteNetworkResponse::fromJson(const web::json::value& val)
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


std::string DeleteNetworkResponse::getApiVersion() const
{
    return apiVersion_;
}

void DeleteNetworkResponse::setApiVersion(const std::string& value)
{
    apiVersion_ = value;
    apiVersionIsSet_ = true;
}

bool DeleteNetworkResponse::apiVersionIsSet() const
{
    return apiVersionIsSet_;
}

void DeleteNetworkResponse::unsetapiVersion()
{
    apiVersionIsSet_ = false;
}

std::string DeleteNetworkResponse::getKind() const
{
    return kind_;
}

void DeleteNetworkResponse::setKind(const std::string& value)
{
    kind_ = value;
    kindIsSet_ = true;
}

bool DeleteNetworkResponse::kindIsSet() const
{
    return kindIsSet_;
}

void DeleteNetworkResponse::unsetkind()
{
    kindIsSet_ = false;
}

NetworkMetadata DeleteNetworkResponse::getMetadata() const
{
    return metadata_;
}

void DeleteNetworkResponse::setMetadata(const NetworkMetadata& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool DeleteNetworkResponse::metadataIsSet() const
{
    return metadataIsSet_;
}

void DeleteNetworkResponse::unsetmetadata()
{
    metadataIsSet_ = false;
}

NetworkSpec DeleteNetworkResponse::getSpec() const
{
    return spec_;
}

void DeleteNetworkResponse::setSpec(const NetworkSpec& value)
{
    spec_ = value;
    specIsSet_ = true;
}

bool DeleteNetworkResponse::specIsSet() const
{
    return specIsSet_;
}

void DeleteNetworkResponse::unsetspec()
{
    specIsSet_ = false;
}

NetworkStatus DeleteNetworkResponse::getStatus() const
{
    return status_;
}

void DeleteNetworkResponse::setStatus(const NetworkStatus& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool DeleteNetworkResponse::statusIsSet() const
{
    return statusIsSet_;
}

void DeleteNetworkResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


