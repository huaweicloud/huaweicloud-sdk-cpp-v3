

#include "huaweicloud/cce/v3/model/NodePool.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




NodePool::NodePool()
{
    kind_ = "";
    kindIsSet_ = false;
    apiVersion_ = "";
    apiVersionIsSet_ = false;
    metadataIsSet_ = false;
    specIsSet_ = false;
    statusIsSet_ = false;
}

NodePool::~NodePool() = default;

void NodePool::validate()
{
}

web::json::value NodePool::toJson() const
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
bool NodePool::fromJson(const web::json::value& val)
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
            NodePoolStatus refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


std::string NodePool::getKind() const
{
    return kind_;
}

void NodePool::setKind(const std::string& value)
{
    kind_ = value;
    kindIsSet_ = true;
}

bool NodePool::kindIsSet() const
{
    return kindIsSet_;
}

void NodePool::unsetkind()
{
    kindIsSet_ = false;
}

std::string NodePool::getApiVersion() const
{
    return apiVersion_;
}

void NodePool::setApiVersion(const std::string& value)
{
    apiVersion_ = value;
    apiVersionIsSet_ = true;
}

bool NodePool::apiVersionIsSet() const
{
    return apiVersionIsSet_;
}

void NodePool::unsetapiVersion()
{
    apiVersionIsSet_ = false;
}

NodePoolMetadata NodePool::getMetadata() const
{
    return metadata_;
}

void NodePool::setMetadata(const NodePoolMetadata& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool NodePool::metadataIsSet() const
{
    return metadataIsSet_;
}

void NodePool::unsetmetadata()
{
    metadataIsSet_ = false;
}

NodePoolSpec NodePool::getSpec() const
{
    return spec_;
}

void NodePool::setSpec(const NodePoolSpec& value)
{
    spec_ = value;
    specIsSet_ = true;
}

bool NodePool::specIsSet() const
{
    return specIsSet_;
}

void NodePool::unsetspec()
{
    specIsSet_ = false;
}

NodePoolStatus NodePool::getStatus() const
{
    return status_;
}

void NodePool::setStatus(const NodePoolStatus& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool NodePool::statusIsSet() const
{
    return statusIsSet_;
}

void NodePool::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


