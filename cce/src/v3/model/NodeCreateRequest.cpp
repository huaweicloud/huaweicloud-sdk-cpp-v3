

#include "huaweicloud/cce/v3/model/NodeCreateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




NodeCreateRequest::NodeCreateRequest()
{
    kind_ = "";
    kindIsSet_ = false;
    apiVersion_ = "";
    apiVersionIsSet_ = false;
    metadataIsSet_ = false;
    specIsSet_ = false;
}

NodeCreateRequest::~NodeCreateRequest() = default;

void NodeCreateRequest::validate()
{
}

web::json::value NodeCreateRequest::toJson() const
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

    return val;
}
bool NodeCreateRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string NodeCreateRequest::getKind() const
{
    return kind_;
}

void NodeCreateRequest::setKind(const std::string& value)
{
    kind_ = value;
    kindIsSet_ = true;
}

bool NodeCreateRequest::kindIsSet() const
{
    return kindIsSet_;
}

void NodeCreateRequest::unsetkind()
{
    kindIsSet_ = false;
}

std::string NodeCreateRequest::getApiVersion() const
{
    return apiVersion_;
}

void NodeCreateRequest::setApiVersion(const std::string& value)
{
    apiVersion_ = value;
    apiVersionIsSet_ = true;
}

bool NodeCreateRequest::apiVersionIsSet() const
{
    return apiVersionIsSet_;
}

void NodeCreateRequest::unsetapiVersion()
{
    apiVersionIsSet_ = false;
}

NodeMetadata NodeCreateRequest::getMetadata() const
{
    return metadata_;
}

void NodeCreateRequest::setMetadata(const NodeMetadata& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool NodeCreateRequest::metadataIsSet() const
{
    return metadataIsSet_;
}

void NodeCreateRequest::unsetmetadata()
{
    metadataIsSet_ = false;
}

NodeSpec NodeCreateRequest::getSpec() const
{
    return spec_;
}

void NodeCreateRequest::setSpec(const NodeSpec& value)
{
    spec_ = value;
    specIsSet_ = true;
}

bool NodeCreateRequest::specIsSet() const
{
    return specIsSet_;
}

void NodeCreateRequest::unsetspec()
{
    specIsSet_ = false;
}

}
}
}
}
}


