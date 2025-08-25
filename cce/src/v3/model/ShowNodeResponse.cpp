

#include "huaweicloud/cce/v3/model/ShowNodeResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ShowNodeResponse::ShowNodeResponse()
{
    kind_ = "";
    kindIsSet_ = false;
    apiVersion_ = "";
    apiVersionIsSet_ = false;
    metadataIsSet_ = false;
    specIsSet_ = false;
    statusIsSet_ = false;
}

ShowNodeResponse::~ShowNodeResponse() = default;

void ShowNodeResponse::validate()
{
}

web::json::value ShowNodeResponse::toJson() const
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
bool ShowNodeResponse::fromJson(const web::json::value& val)
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


std::string ShowNodeResponse::getKind() const
{
    return kind_;
}

void ShowNodeResponse::setKind(const std::string& value)
{
    kind_ = value;
    kindIsSet_ = true;
}

bool ShowNodeResponse::kindIsSet() const
{
    return kindIsSet_;
}

void ShowNodeResponse::unsetkind()
{
    kindIsSet_ = false;
}

std::string ShowNodeResponse::getApiVersion() const
{
    return apiVersion_;
}

void ShowNodeResponse::setApiVersion(const std::string& value)
{
    apiVersion_ = value;
    apiVersionIsSet_ = true;
}

bool ShowNodeResponse::apiVersionIsSet() const
{
    return apiVersionIsSet_;
}

void ShowNodeResponse::unsetapiVersion()
{
    apiVersionIsSet_ = false;
}

NodeMetadata ShowNodeResponse::getMetadata() const
{
    return metadata_;
}

void ShowNodeResponse::setMetadata(const NodeMetadata& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool ShowNodeResponse::metadataIsSet() const
{
    return metadataIsSet_;
}

void ShowNodeResponse::unsetmetadata()
{
    metadataIsSet_ = false;
}

NodeSpec ShowNodeResponse::getSpec() const
{
    return spec_;
}

void ShowNodeResponse::setSpec(const NodeSpec& value)
{
    spec_ = value;
    specIsSet_ = true;
}

bool ShowNodeResponse::specIsSet() const
{
    return specIsSet_;
}

void ShowNodeResponse::unsetspec()
{
    specIsSet_ = false;
}

NodeStatus ShowNodeResponse::getStatus() const
{
    return status_;
}

void ShowNodeResponse::setStatus(const NodeStatus& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowNodeResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowNodeResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


