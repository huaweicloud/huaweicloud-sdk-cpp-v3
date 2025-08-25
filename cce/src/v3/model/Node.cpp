

#include "huaweicloud/cce/v3/model/Node.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




Node::Node()
{
    kind_ = "";
    kindIsSet_ = false;
    apiVersion_ = "";
    apiVersionIsSet_ = false;
    metadataIsSet_ = false;
    specIsSet_ = false;
    statusIsSet_ = false;
}

Node::~Node() = default;

void Node::validate()
{
}

web::json::value Node::toJson() const
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
bool Node::fromJson(const web::json::value& val)
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


std::string Node::getKind() const
{
    return kind_;
}

void Node::setKind(const std::string& value)
{
    kind_ = value;
    kindIsSet_ = true;
}

bool Node::kindIsSet() const
{
    return kindIsSet_;
}

void Node::unsetkind()
{
    kindIsSet_ = false;
}

std::string Node::getApiVersion() const
{
    return apiVersion_;
}

void Node::setApiVersion(const std::string& value)
{
    apiVersion_ = value;
    apiVersionIsSet_ = true;
}

bool Node::apiVersionIsSet() const
{
    return apiVersionIsSet_;
}

void Node::unsetapiVersion()
{
    apiVersionIsSet_ = false;
}

NodeMetadata Node::getMetadata() const
{
    return metadata_;
}

void Node::setMetadata(const NodeMetadata& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool Node::metadataIsSet() const
{
    return metadataIsSet_;
}

void Node::unsetmetadata()
{
    metadataIsSet_ = false;
}

NodeSpec Node::getSpec() const
{
    return spec_;
}

void Node::setSpec(const NodeSpec& value)
{
    spec_ = value;
    specIsSet_ = true;
}

bool Node::specIsSet() const
{
    return specIsSet_;
}

void Node::unsetspec()
{
    specIsSet_ = false;
}

NodeStatus Node::getStatus() const
{
    return status_;
}

void Node::setStatus(const NodeStatus& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool Node::statusIsSet() const
{
    return statusIsSet_;
}

void Node::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


