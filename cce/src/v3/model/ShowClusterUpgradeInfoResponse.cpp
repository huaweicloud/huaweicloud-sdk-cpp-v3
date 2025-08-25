

#include "huaweicloud/cce/v3/model/ShowClusterUpgradeInfoResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ShowClusterUpgradeInfoResponse::ShowClusterUpgradeInfoResponse()
{
    kind_ = "";
    kindIsSet_ = false;
    apiVersion_ = "";
    apiVersionIsSet_ = false;
    metadataIsSet_ = false;
    specIsSet_ = false;
    statusIsSet_ = false;
}

ShowClusterUpgradeInfoResponse::~ShowClusterUpgradeInfoResponse() = default;

void ShowClusterUpgradeInfoResponse::validate()
{
}

web::json::value ShowClusterUpgradeInfoResponse::toJson() const
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
bool ShowClusterUpgradeInfoResponse::fromJson(const web::json::value& val)
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
            Metadata refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetadata(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("spec"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("spec"));
        if(!fieldValue.is_null())
        {
            UpgradeInfoSpec refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpec(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            UpgradeInfoStatus refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


std::string ShowClusterUpgradeInfoResponse::getKind() const
{
    return kind_;
}

void ShowClusterUpgradeInfoResponse::setKind(const std::string& value)
{
    kind_ = value;
    kindIsSet_ = true;
}

bool ShowClusterUpgradeInfoResponse::kindIsSet() const
{
    return kindIsSet_;
}

void ShowClusterUpgradeInfoResponse::unsetkind()
{
    kindIsSet_ = false;
}

std::string ShowClusterUpgradeInfoResponse::getApiVersion() const
{
    return apiVersion_;
}

void ShowClusterUpgradeInfoResponse::setApiVersion(const std::string& value)
{
    apiVersion_ = value;
    apiVersionIsSet_ = true;
}

bool ShowClusterUpgradeInfoResponse::apiVersionIsSet() const
{
    return apiVersionIsSet_;
}

void ShowClusterUpgradeInfoResponse::unsetapiVersion()
{
    apiVersionIsSet_ = false;
}

Metadata ShowClusterUpgradeInfoResponse::getMetadata() const
{
    return metadata_;
}

void ShowClusterUpgradeInfoResponse::setMetadata(const Metadata& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool ShowClusterUpgradeInfoResponse::metadataIsSet() const
{
    return metadataIsSet_;
}

void ShowClusterUpgradeInfoResponse::unsetmetadata()
{
    metadataIsSet_ = false;
}

UpgradeInfoSpec ShowClusterUpgradeInfoResponse::getSpec() const
{
    return spec_;
}

void ShowClusterUpgradeInfoResponse::setSpec(const UpgradeInfoSpec& value)
{
    spec_ = value;
    specIsSet_ = true;
}

bool ShowClusterUpgradeInfoResponse::specIsSet() const
{
    return specIsSet_;
}

void ShowClusterUpgradeInfoResponse::unsetspec()
{
    specIsSet_ = false;
}

UpgradeInfoStatus ShowClusterUpgradeInfoResponse::getStatus() const
{
    return status_;
}

void ShowClusterUpgradeInfoResponse::setStatus(const UpgradeInfoStatus& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowClusterUpgradeInfoResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowClusterUpgradeInfoResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


