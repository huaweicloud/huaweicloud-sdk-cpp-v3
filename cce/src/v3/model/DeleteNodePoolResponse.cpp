

#include "huaweicloud/cce/v3/model/DeleteNodePoolResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




DeleteNodePoolResponse::DeleteNodePoolResponse()
{
    kind_ = "";
    kindIsSet_ = false;
    apiVersion_ = "";
    apiVersionIsSet_ = false;
    metadataIsSet_ = false;
    specIsSet_ = false;
    statusIsSet_ = false;
}

DeleteNodePoolResponse::~DeleteNodePoolResponse() = default;

void DeleteNodePoolResponse::validate()
{
}

web::json::value DeleteNodePoolResponse::toJson() const
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
bool DeleteNodePoolResponse::fromJson(const web::json::value& val)
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
            NodePoolMetadata refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetadata(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("spec"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("spec"));
        if(!fieldValue.is_null())
        {
            NodePoolSpec refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpec(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            DeleteNodePoolStatus refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


std::string DeleteNodePoolResponse::getKind() const
{
    return kind_;
}

void DeleteNodePoolResponse::setKind(const std::string& value)
{
    kind_ = value;
    kindIsSet_ = true;
}

bool DeleteNodePoolResponse::kindIsSet() const
{
    return kindIsSet_;
}

void DeleteNodePoolResponse::unsetkind()
{
    kindIsSet_ = false;
}

std::string DeleteNodePoolResponse::getApiVersion() const
{
    return apiVersion_;
}

void DeleteNodePoolResponse::setApiVersion(const std::string& value)
{
    apiVersion_ = value;
    apiVersionIsSet_ = true;
}

bool DeleteNodePoolResponse::apiVersionIsSet() const
{
    return apiVersionIsSet_;
}

void DeleteNodePoolResponse::unsetapiVersion()
{
    apiVersionIsSet_ = false;
}

NodePoolMetadata DeleteNodePoolResponse::getMetadata() const
{
    return metadata_;
}

void DeleteNodePoolResponse::setMetadata(const NodePoolMetadata& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool DeleteNodePoolResponse::metadataIsSet() const
{
    return metadataIsSet_;
}

void DeleteNodePoolResponse::unsetmetadata()
{
    metadataIsSet_ = false;
}

NodePoolSpec DeleteNodePoolResponse::getSpec() const
{
    return spec_;
}

void DeleteNodePoolResponse::setSpec(const NodePoolSpec& value)
{
    spec_ = value;
    specIsSet_ = true;
}

bool DeleteNodePoolResponse::specIsSet() const
{
    return specIsSet_;
}

void DeleteNodePoolResponse::unsetspec()
{
    specIsSet_ = false;
}

DeleteNodePoolStatus DeleteNodePoolResponse::getStatus() const
{
    return status_;
}

void DeleteNodePoolResponse::setStatus(const DeleteNodePoolStatus& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool DeleteNodePoolResponse::statusIsSet() const
{
    return statusIsSet_;
}

void DeleteNodePoolResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


