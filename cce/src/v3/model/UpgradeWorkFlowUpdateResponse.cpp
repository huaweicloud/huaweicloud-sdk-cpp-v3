

#include "huaweicloud/cce/v3/model/UpgradeWorkFlowUpdateResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




UpgradeWorkFlowUpdateResponse::UpgradeWorkFlowUpdateResponse()
{
    kind_ = "";
    kindIsSet_ = false;
    apiVersion_ = "";
    apiVersionIsSet_ = false;
    metadataIsSet_ = false;
    specIsSet_ = false;
    statusIsSet_ = false;
}

UpgradeWorkFlowUpdateResponse::~UpgradeWorkFlowUpdateResponse() = default;

void UpgradeWorkFlowUpdateResponse::validate()
{
}

web::json::value UpgradeWorkFlowUpdateResponse::toJson() const
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
bool UpgradeWorkFlowUpdateResponse::fromJson(const web::json::value& val)
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
            WorkFlowSpec refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpec(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            WorkFlowStatus refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


std::string UpgradeWorkFlowUpdateResponse::getKind() const
{
    return kind_;
}

void UpgradeWorkFlowUpdateResponse::setKind(const std::string& value)
{
    kind_ = value;
    kindIsSet_ = true;
}

bool UpgradeWorkFlowUpdateResponse::kindIsSet() const
{
    return kindIsSet_;
}

void UpgradeWorkFlowUpdateResponse::unsetkind()
{
    kindIsSet_ = false;
}

std::string UpgradeWorkFlowUpdateResponse::getApiVersion() const
{
    return apiVersion_;
}

void UpgradeWorkFlowUpdateResponse::setApiVersion(const std::string& value)
{
    apiVersion_ = value;
    apiVersionIsSet_ = true;
}

bool UpgradeWorkFlowUpdateResponse::apiVersionIsSet() const
{
    return apiVersionIsSet_;
}

void UpgradeWorkFlowUpdateResponse::unsetapiVersion()
{
    apiVersionIsSet_ = false;
}

Metadata UpgradeWorkFlowUpdateResponse::getMetadata() const
{
    return metadata_;
}

void UpgradeWorkFlowUpdateResponse::setMetadata(const Metadata& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool UpgradeWorkFlowUpdateResponse::metadataIsSet() const
{
    return metadataIsSet_;
}

void UpgradeWorkFlowUpdateResponse::unsetmetadata()
{
    metadataIsSet_ = false;
}

WorkFlowSpec UpgradeWorkFlowUpdateResponse::getSpec() const
{
    return spec_;
}

void UpgradeWorkFlowUpdateResponse::setSpec(const WorkFlowSpec& value)
{
    spec_ = value;
    specIsSet_ = true;
}

bool UpgradeWorkFlowUpdateResponse::specIsSet() const
{
    return specIsSet_;
}

void UpgradeWorkFlowUpdateResponse::unsetspec()
{
    specIsSet_ = false;
}

WorkFlowStatus UpgradeWorkFlowUpdateResponse::getStatus() const
{
    return status_;
}

void UpgradeWorkFlowUpdateResponse::setStatus(const WorkFlowStatus& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool UpgradeWorkFlowUpdateResponse::statusIsSet() const
{
    return statusIsSet_;
}

void UpgradeWorkFlowUpdateResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


