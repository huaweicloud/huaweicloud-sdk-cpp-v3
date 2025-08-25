

#include "huaweicloud/cce/v3/model/CreateNodeResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




CreateNodeResponse::CreateNodeResponse()
{
    kind_ = "";
    kindIsSet_ = false;
    apiVersion_ = "";
    apiVersionIsSet_ = false;
    metadataIsSet_ = false;
    specIsSet_ = false;
    statusIsSet_ = false;
}

CreateNodeResponse::~CreateNodeResponse() = default;

void CreateNodeResponse::validate()
{
}

web::json::value CreateNodeResponse::toJson() const
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
bool CreateNodeResponse::fromJson(const web::json::value& val)
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


std::string CreateNodeResponse::getKind() const
{
    return kind_;
}

void CreateNodeResponse::setKind(const std::string& value)
{
    kind_ = value;
    kindIsSet_ = true;
}

bool CreateNodeResponse::kindIsSet() const
{
    return kindIsSet_;
}

void CreateNodeResponse::unsetkind()
{
    kindIsSet_ = false;
}

std::string CreateNodeResponse::getApiVersion() const
{
    return apiVersion_;
}

void CreateNodeResponse::setApiVersion(const std::string& value)
{
    apiVersion_ = value;
    apiVersionIsSet_ = true;
}

bool CreateNodeResponse::apiVersionIsSet() const
{
    return apiVersionIsSet_;
}

void CreateNodeResponse::unsetapiVersion()
{
    apiVersionIsSet_ = false;
}

NodeMetadata CreateNodeResponse::getMetadata() const
{
    return metadata_;
}

void CreateNodeResponse::setMetadata(const NodeMetadata& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool CreateNodeResponse::metadataIsSet() const
{
    return metadataIsSet_;
}

void CreateNodeResponse::unsetmetadata()
{
    metadataIsSet_ = false;
}

NodeSpec CreateNodeResponse::getSpec() const
{
    return spec_;
}

void CreateNodeResponse::setSpec(const NodeSpec& value)
{
    spec_ = value;
    specIsSet_ = true;
}

bool CreateNodeResponse::specIsSet() const
{
    return specIsSet_;
}

void CreateNodeResponse::unsetspec()
{
    specIsSet_ = false;
}

NodeStatus CreateNodeResponse::getStatus() const
{
    return status_;
}

void CreateNodeResponse::setStatus(const NodeStatus& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool CreateNodeResponse::statusIsSet() const
{
    return statusIsSet_;
}

void CreateNodeResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


