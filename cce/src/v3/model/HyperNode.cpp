

#include "huaweicloud/cce/v3/model/HyperNode.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




HyperNode::HyperNode()
{
    apiVersion_ = "";
    apiVersionIsSet_ = false;
    kind_ = "";
    kindIsSet_ = false;
    metadataIsSet_ = false;
    specIsSet_ = false;
    statusIsSet_ = false;
}

HyperNode::~HyperNode() = default;

void HyperNode::validate()
{
}

web::json::value HyperNode::toJson() const
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
bool HyperNode::fromJson(const web::json::value& val)
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
            HyperNodeMetadata refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetadata(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("spec"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("spec"));
        if(!fieldValue.is_null())
        {
            HyperNodeSpec refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpec(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            HyperNodeStatus refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


std::string HyperNode::getApiVersion() const
{
    return apiVersion_;
}

void HyperNode::setApiVersion(const std::string& value)
{
    apiVersion_ = value;
    apiVersionIsSet_ = true;
}

bool HyperNode::apiVersionIsSet() const
{
    return apiVersionIsSet_;
}

void HyperNode::unsetapiVersion()
{
    apiVersionIsSet_ = false;
}

std::string HyperNode::getKind() const
{
    return kind_;
}

void HyperNode::setKind(const std::string& value)
{
    kind_ = value;
    kindIsSet_ = true;
}

bool HyperNode::kindIsSet() const
{
    return kindIsSet_;
}

void HyperNode::unsetkind()
{
    kindIsSet_ = false;
}

HyperNodeMetadata HyperNode::getMetadata() const
{
    return metadata_;
}

void HyperNode::setMetadata(const HyperNodeMetadata& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool HyperNode::metadataIsSet() const
{
    return metadataIsSet_;
}

void HyperNode::unsetmetadata()
{
    metadataIsSet_ = false;
}

HyperNodeSpec HyperNode::getSpec() const
{
    return spec_;
}

void HyperNode::setSpec(const HyperNodeSpec& value)
{
    spec_ = value;
    specIsSet_ = true;
}

bool HyperNode::specIsSet() const
{
    return specIsSet_;
}

void HyperNode::unsetspec()
{
    specIsSet_ = false;
}

HyperNodeStatus HyperNode::getStatus() const
{
    return status_;
}

void HyperNode::setStatus(const HyperNodeStatus& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool HyperNode::statusIsSet() const
{
    return statusIsSet_;
}

void HyperNode::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


