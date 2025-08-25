

#include "huaweicloud/cce/v3/model/CreateNodePoolResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




CreateNodePoolResponse::CreateNodePoolResponse()
{
    kind_ = "";
    kindIsSet_ = false;
    apiVersion_ = "";
    apiVersionIsSet_ = false;
    metadataIsSet_ = false;
    specIsSet_ = false;
    statusIsSet_ = false;
}

CreateNodePoolResponse::~CreateNodePoolResponse() = default;

void CreateNodePoolResponse::validate()
{
}

web::json::value CreateNodePoolResponse::toJson() const
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
bool CreateNodePoolResponse::fromJson(const web::json::value& val)
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
            CreateNodePoolStatus refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


std::string CreateNodePoolResponse::getKind() const
{
    return kind_;
}

void CreateNodePoolResponse::setKind(const std::string& value)
{
    kind_ = value;
    kindIsSet_ = true;
}

bool CreateNodePoolResponse::kindIsSet() const
{
    return kindIsSet_;
}

void CreateNodePoolResponse::unsetkind()
{
    kindIsSet_ = false;
}

std::string CreateNodePoolResponse::getApiVersion() const
{
    return apiVersion_;
}

void CreateNodePoolResponse::setApiVersion(const std::string& value)
{
    apiVersion_ = value;
    apiVersionIsSet_ = true;
}

bool CreateNodePoolResponse::apiVersionIsSet() const
{
    return apiVersionIsSet_;
}

void CreateNodePoolResponse::unsetapiVersion()
{
    apiVersionIsSet_ = false;
}

NodePoolMetadata CreateNodePoolResponse::getMetadata() const
{
    return metadata_;
}

void CreateNodePoolResponse::setMetadata(const NodePoolMetadata& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool CreateNodePoolResponse::metadataIsSet() const
{
    return metadataIsSet_;
}

void CreateNodePoolResponse::unsetmetadata()
{
    metadataIsSet_ = false;
}

NodePoolSpec CreateNodePoolResponse::getSpec() const
{
    return spec_;
}

void CreateNodePoolResponse::setSpec(const NodePoolSpec& value)
{
    spec_ = value;
    specIsSet_ = true;
}

bool CreateNodePoolResponse::specIsSet() const
{
    return specIsSet_;
}

void CreateNodePoolResponse::unsetspec()
{
    specIsSet_ = false;
}

CreateNodePoolStatus CreateNodePoolResponse::getStatus() const
{
    return status_;
}

void CreateNodePoolResponse::setStatus(const CreateNodePoolStatus& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool CreateNodePoolResponse::statusIsSet() const
{
    return statusIsSet_;
}

void CreateNodePoolResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


