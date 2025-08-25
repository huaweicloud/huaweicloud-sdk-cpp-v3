

#include "huaweicloud/cce/v3/model/DeleteAutopilotClusterResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




DeleteAutopilotClusterResponse::DeleteAutopilotClusterResponse()
{
    kind_ = "";
    kindIsSet_ = false;
    apiVersion_ = "";
    apiVersionIsSet_ = false;
    metadataIsSet_ = false;
    specIsSet_ = false;
    statusIsSet_ = false;
}

DeleteAutopilotClusterResponse::~DeleteAutopilotClusterResponse() = default;

void DeleteAutopilotClusterResponse::validate()
{
}

web::json::value DeleteAutopilotClusterResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(kindIsSet_) {
        val[utility::conversions::to_string_t("kind")] = ModelBase::toJson(kind_);
    }
    if(apiVersionIsSet_) {
        val[utility::conversions::to_string_t("apiVersion")] = ModelBase::toJson(apiVersion_);
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
bool DeleteAutopilotClusterResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("metadata"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("metadata"));
        if(!fieldValue.is_null())
        {
            AutopilotClusterMetadata refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetadata(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("spec"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("spec"));
        if(!fieldValue.is_null())
        {
            AutopilotClusterSpec refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpec(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            AutopilotClusterStatus refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


std::string DeleteAutopilotClusterResponse::getKind() const
{
    return kind_;
}

void DeleteAutopilotClusterResponse::setKind(const std::string& value)
{
    kind_ = value;
    kindIsSet_ = true;
}

bool DeleteAutopilotClusterResponse::kindIsSet() const
{
    return kindIsSet_;
}

void DeleteAutopilotClusterResponse::unsetkind()
{
    kindIsSet_ = false;
}

std::string DeleteAutopilotClusterResponse::getApiVersion() const
{
    return apiVersion_;
}

void DeleteAutopilotClusterResponse::setApiVersion(const std::string& value)
{
    apiVersion_ = value;
    apiVersionIsSet_ = true;
}

bool DeleteAutopilotClusterResponse::apiVersionIsSet() const
{
    return apiVersionIsSet_;
}

void DeleteAutopilotClusterResponse::unsetapiVersion()
{
    apiVersionIsSet_ = false;
}

AutopilotClusterMetadata DeleteAutopilotClusterResponse::getMetadata() const
{
    return metadata_;
}

void DeleteAutopilotClusterResponse::setMetadata(const AutopilotClusterMetadata& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool DeleteAutopilotClusterResponse::metadataIsSet() const
{
    return metadataIsSet_;
}

void DeleteAutopilotClusterResponse::unsetmetadata()
{
    metadataIsSet_ = false;
}

AutopilotClusterSpec DeleteAutopilotClusterResponse::getSpec() const
{
    return spec_;
}

void DeleteAutopilotClusterResponse::setSpec(const AutopilotClusterSpec& value)
{
    spec_ = value;
    specIsSet_ = true;
}

bool DeleteAutopilotClusterResponse::specIsSet() const
{
    return specIsSet_;
}

void DeleteAutopilotClusterResponse::unsetspec()
{
    specIsSet_ = false;
}

AutopilotClusterStatus DeleteAutopilotClusterResponse::getStatus() const
{
    return status_;
}

void DeleteAutopilotClusterResponse::setStatus(const AutopilotClusterStatus& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool DeleteAutopilotClusterResponse::statusIsSet() const
{
    return statusIsSet_;
}

void DeleteAutopilotClusterResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


