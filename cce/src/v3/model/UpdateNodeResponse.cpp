

#include "huaweicloud/cce/v3/model/UpdateNodeResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




UpdateNodeResponse::UpdateNodeResponse()
{
    kind_ = "";
    kindIsSet_ = false;
    apiVersion_ = "";
    apiVersionIsSet_ = false;
    metadataIsSet_ = false;
    specIsSet_ = false;
    statusIsSet_ = false;
}

UpdateNodeResponse::~UpdateNodeResponse() = default;

void UpdateNodeResponse::validate()
{
}

web::json::value UpdateNodeResponse::toJson() const
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
bool UpdateNodeResponse::fromJson(const web::json::value& val)
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
            NodeMetadata refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetadata(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("spec"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("spec"));
        if(!fieldValue.is_null())
        {
            NodeSpec refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpec(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            NodeStatus refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


std::string UpdateNodeResponse::getKind() const
{
    return kind_;
}

void UpdateNodeResponse::setKind(const std::string& value)
{
    kind_ = value;
    kindIsSet_ = true;
}

bool UpdateNodeResponse::kindIsSet() const
{
    return kindIsSet_;
}

void UpdateNodeResponse::unsetkind()
{
    kindIsSet_ = false;
}

std::string UpdateNodeResponse::getApiVersion() const
{
    return apiVersion_;
}

void UpdateNodeResponse::setApiVersion(const std::string& value)
{
    apiVersion_ = value;
    apiVersionIsSet_ = true;
}

bool UpdateNodeResponse::apiVersionIsSet() const
{
    return apiVersionIsSet_;
}

void UpdateNodeResponse::unsetapiVersion()
{
    apiVersionIsSet_ = false;
}

NodeMetadata UpdateNodeResponse::getMetadata() const
{
    return metadata_;
}

void UpdateNodeResponse::setMetadata(const NodeMetadata& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool UpdateNodeResponse::metadataIsSet() const
{
    return metadataIsSet_;
}

void UpdateNodeResponse::unsetmetadata()
{
    metadataIsSet_ = false;
}

NodeSpec UpdateNodeResponse::getSpec() const
{
    return spec_;
}

void UpdateNodeResponse::setSpec(const NodeSpec& value)
{
    spec_ = value;
    specIsSet_ = true;
}

bool UpdateNodeResponse::specIsSet() const
{
    return specIsSet_;
}

void UpdateNodeResponse::unsetspec()
{
    specIsSet_ = false;
}

NodeStatus UpdateNodeResponse::getStatus() const
{
    return status_;
}

void UpdateNodeResponse::setStatus(const NodeStatus& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool UpdateNodeResponse::statusIsSet() const
{
    return statusIsSet_;
}

void UpdateNodeResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


