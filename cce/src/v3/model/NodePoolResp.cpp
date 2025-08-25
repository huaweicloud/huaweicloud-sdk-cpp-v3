

#include "huaweicloud/cce/v3/model/NodePoolResp.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




NodePoolResp::NodePoolResp()
{
    kind_ = "";
    kindIsSet_ = false;
    apiVersion_ = "";
    apiVersionIsSet_ = false;
    metadataIsSet_ = false;
    specIsSet_ = false;
    statusIsSet_ = false;
}

NodePoolResp::~NodePoolResp() = default;

void NodePoolResp::validate()
{
}

web::json::value NodePoolResp::toJson() const
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
bool NodePoolResp::fromJson(const web::json::value& val)
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


std::string NodePoolResp::getKind() const
{
    return kind_;
}

void NodePoolResp::setKind(const std::string& value)
{
    kind_ = value;
    kindIsSet_ = true;
}

bool NodePoolResp::kindIsSet() const
{
    return kindIsSet_;
}

void NodePoolResp::unsetkind()
{
    kindIsSet_ = false;
}

std::string NodePoolResp::getApiVersion() const
{
    return apiVersion_;
}

void NodePoolResp::setApiVersion(const std::string& value)
{
    apiVersion_ = value;
    apiVersionIsSet_ = true;
}

bool NodePoolResp::apiVersionIsSet() const
{
    return apiVersionIsSet_;
}

void NodePoolResp::unsetapiVersion()
{
    apiVersionIsSet_ = false;
}

NodePoolMetadata NodePoolResp::getMetadata() const
{
    return metadata_;
}

void NodePoolResp::setMetadata(const NodePoolMetadata& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool NodePoolResp::metadataIsSet() const
{
    return metadataIsSet_;
}

void NodePoolResp::unsetmetadata()
{
    metadataIsSet_ = false;
}

NodePoolSpec NodePoolResp::getSpec() const
{
    return spec_;
}

void NodePoolResp::setSpec(const NodePoolSpec& value)
{
    spec_ = value;
    specIsSet_ = true;
}

bool NodePoolResp::specIsSet() const
{
    return specIsSet_;
}

void NodePoolResp::unsetspec()
{
    specIsSet_ = false;
}

NodePoolStatus NodePoolResp::getStatus() const
{
    return status_;
}

void NodePoolResp::setStatus(const NodePoolStatus& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool NodePoolResp::statusIsSet() const
{
    return statusIsSet_;
}

void NodePoolResp::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


