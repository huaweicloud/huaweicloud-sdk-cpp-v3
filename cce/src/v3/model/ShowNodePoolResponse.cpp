

#include "huaweicloud/cce/v3/model/ShowNodePoolResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ShowNodePoolResponse::ShowNodePoolResponse()
{
    kind_ = "";
    kindIsSet_ = false;
    apiVersion_ = "";
    apiVersionIsSet_ = false;
    metadataIsSet_ = false;
    specIsSet_ = false;
    statusIsSet_ = false;
}

ShowNodePoolResponse::~ShowNodePoolResponse() = default;

void ShowNodePoolResponse::validate()
{
}

web::json::value ShowNodePoolResponse::toJson() const
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
bool ShowNodePoolResponse::fromJson(const web::json::value& val)
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


std::string ShowNodePoolResponse::getKind() const
{
    return kind_;
}

void ShowNodePoolResponse::setKind(const std::string& value)
{
    kind_ = value;
    kindIsSet_ = true;
}

bool ShowNodePoolResponse::kindIsSet() const
{
    return kindIsSet_;
}

void ShowNodePoolResponse::unsetkind()
{
    kindIsSet_ = false;
}

std::string ShowNodePoolResponse::getApiVersion() const
{
    return apiVersion_;
}

void ShowNodePoolResponse::setApiVersion(const std::string& value)
{
    apiVersion_ = value;
    apiVersionIsSet_ = true;
}

bool ShowNodePoolResponse::apiVersionIsSet() const
{
    return apiVersionIsSet_;
}

void ShowNodePoolResponse::unsetapiVersion()
{
    apiVersionIsSet_ = false;
}

NodePoolMetadata ShowNodePoolResponse::getMetadata() const
{
    return metadata_;
}

void ShowNodePoolResponse::setMetadata(const NodePoolMetadata& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool ShowNodePoolResponse::metadataIsSet() const
{
    return metadataIsSet_;
}

void ShowNodePoolResponse::unsetmetadata()
{
    metadataIsSet_ = false;
}

NodePoolSpec ShowNodePoolResponse::getSpec() const
{
    return spec_;
}

void ShowNodePoolResponse::setSpec(const NodePoolSpec& value)
{
    spec_ = value;
    specIsSet_ = true;
}

bool ShowNodePoolResponse::specIsSet() const
{
    return specIsSet_;
}

void ShowNodePoolResponse::unsetspec()
{
    specIsSet_ = false;
}

NodePoolStatus ShowNodePoolResponse::getStatus() const
{
    return status_;
}

void ShowNodePoolResponse::setStatus(const NodePoolStatus& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowNodePoolResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowNodePoolResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


