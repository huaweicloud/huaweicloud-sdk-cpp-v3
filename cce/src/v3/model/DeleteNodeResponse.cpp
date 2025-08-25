

#include "huaweicloud/cce/v3/model/DeleteNodeResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




DeleteNodeResponse::DeleteNodeResponse()
{
    kind_ = "";
    kindIsSet_ = false;
    apiVersion_ = "";
    apiVersionIsSet_ = false;
    metadataIsSet_ = false;
    specIsSet_ = false;
    statusIsSet_ = false;
}

DeleteNodeResponse::~DeleteNodeResponse() = default;

void DeleteNodeResponse::validate()
{
}

web::json::value DeleteNodeResponse::toJson() const
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
bool DeleteNodeResponse::fromJson(const web::json::value& val)
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


std::string DeleteNodeResponse::getKind() const
{
    return kind_;
}

void DeleteNodeResponse::setKind(const std::string& value)
{
    kind_ = value;
    kindIsSet_ = true;
}

bool DeleteNodeResponse::kindIsSet() const
{
    return kindIsSet_;
}

void DeleteNodeResponse::unsetkind()
{
    kindIsSet_ = false;
}

std::string DeleteNodeResponse::getApiVersion() const
{
    return apiVersion_;
}

void DeleteNodeResponse::setApiVersion(const std::string& value)
{
    apiVersion_ = value;
    apiVersionIsSet_ = true;
}

bool DeleteNodeResponse::apiVersionIsSet() const
{
    return apiVersionIsSet_;
}

void DeleteNodeResponse::unsetapiVersion()
{
    apiVersionIsSet_ = false;
}

NodeMetadata DeleteNodeResponse::getMetadata() const
{
    return metadata_;
}

void DeleteNodeResponse::setMetadata(const NodeMetadata& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool DeleteNodeResponse::metadataIsSet() const
{
    return metadataIsSet_;
}

void DeleteNodeResponse::unsetmetadata()
{
    metadataIsSet_ = false;
}

NodeSpec DeleteNodeResponse::getSpec() const
{
    return spec_;
}

void DeleteNodeResponse::setSpec(const NodeSpec& value)
{
    spec_ = value;
    specIsSet_ = true;
}

bool DeleteNodeResponse::specIsSet() const
{
    return specIsSet_;
}

void DeleteNodeResponse::unsetspec()
{
    specIsSet_ = false;
}

NodeStatus DeleteNodeResponse::getStatus() const
{
    return status_;
}

void DeleteNodeResponse::setStatus(const NodeStatus& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool DeleteNodeResponse::statusIsSet() const
{
    return statusIsSet_;
}

void DeleteNodeResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


