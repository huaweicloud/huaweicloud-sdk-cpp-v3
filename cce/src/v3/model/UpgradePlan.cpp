

#include "huaweicloud/cce/v3/model/UpgradePlan.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




UpgradePlan::UpgradePlan()
{
    kind_ = "";
    kindIsSet_ = false;
    apiVersion_ = "";
    apiVersionIsSet_ = false;
    metadataIsSet_ = false;
    specIsSet_ = false;
    statusIsSet_ = false;
}

UpgradePlan::~UpgradePlan() = default;

void UpgradePlan::validate()
{
}

web::json::value UpgradePlan::toJson() const
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
bool UpgradePlan::fromJson(const web::json::value& val)
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
            UpgradePlanSpec refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpec(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            UpgradePlanStatus refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


std::string UpgradePlan::getKind() const
{
    return kind_;
}

void UpgradePlan::setKind(const std::string& value)
{
    kind_ = value;
    kindIsSet_ = true;
}

bool UpgradePlan::kindIsSet() const
{
    return kindIsSet_;
}

void UpgradePlan::unsetkind()
{
    kindIsSet_ = false;
}

std::string UpgradePlan::getApiVersion() const
{
    return apiVersion_;
}

void UpgradePlan::setApiVersion(const std::string& value)
{
    apiVersion_ = value;
    apiVersionIsSet_ = true;
}

bool UpgradePlan::apiVersionIsSet() const
{
    return apiVersionIsSet_;
}

void UpgradePlan::unsetapiVersion()
{
    apiVersionIsSet_ = false;
}

Metadata UpgradePlan::getMetadata() const
{
    return metadata_;
}

void UpgradePlan::setMetadata(const Metadata& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool UpgradePlan::metadataIsSet() const
{
    return metadataIsSet_;
}

void UpgradePlan::unsetmetadata()
{
    metadataIsSet_ = false;
}

UpgradePlanSpec UpgradePlan::getSpec() const
{
    return spec_;
}

void UpgradePlan::setSpec(const UpgradePlanSpec& value)
{
    spec_ = value;
    specIsSet_ = true;
}

bool UpgradePlan::specIsSet() const
{
    return specIsSet_;
}

void UpgradePlan::unsetspec()
{
    specIsSet_ = false;
}

UpgradePlanStatus UpgradePlan::getStatus() const
{
    return status_;
}

void UpgradePlan::setStatus(const UpgradePlanStatus& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool UpgradePlan::statusIsSet() const
{
    return statusIsSet_;
}

void UpgradePlan::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


