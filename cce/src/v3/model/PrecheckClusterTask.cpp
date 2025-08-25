

#include "huaweicloud/cce/v3/model/PrecheckClusterTask.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




PrecheckClusterTask::PrecheckClusterTask()
{
    apiVersion_ = "";
    apiVersionIsSet_ = false;
    kind_ = "";
    kindIsSet_ = false;
    metadataIsSet_ = false;
    specIsSet_ = false;
    statusIsSet_ = false;
}

PrecheckClusterTask::~PrecheckClusterTask() = default;

void PrecheckClusterTask::validate()
{
}

web::json::value PrecheckClusterTask::toJson() const
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
bool PrecheckClusterTask::fromJson(const web::json::value& val)
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
            PrecheckTaskMetadata refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetadata(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("spec"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("spec"));
        if(!fieldValue.is_null())
        {
            PrecheckSpec refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpec(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            PrecheckStatus refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


std::string PrecheckClusterTask::getApiVersion() const
{
    return apiVersion_;
}

void PrecheckClusterTask::setApiVersion(const std::string& value)
{
    apiVersion_ = value;
    apiVersionIsSet_ = true;
}

bool PrecheckClusterTask::apiVersionIsSet() const
{
    return apiVersionIsSet_;
}

void PrecheckClusterTask::unsetapiVersion()
{
    apiVersionIsSet_ = false;
}

std::string PrecheckClusterTask::getKind() const
{
    return kind_;
}

void PrecheckClusterTask::setKind(const std::string& value)
{
    kind_ = value;
    kindIsSet_ = true;
}

bool PrecheckClusterTask::kindIsSet() const
{
    return kindIsSet_;
}

void PrecheckClusterTask::unsetkind()
{
    kindIsSet_ = false;
}

PrecheckTaskMetadata PrecheckClusterTask::getMetadata() const
{
    return metadata_;
}

void PrecheckClusterTask::setMetadata(const PrecheckTaskMetadata& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool PrecheckClusterTask::metadataIsSet() const
{
    return metadataIsSet_;
}

void PrecheckClusterTask::unsetmetadata()
{
    metadataIsSet_ = false;
}

PrecheckSpec PrecheckClusterTask::getSpec() const
{
    return spec_;
}

void PrecheckClusterTask::setSpec(const PrecheckSpec& value)
{
    spec_ = value;
    specIsSet_ = true;
}

bool PrecheckClusterTask::specIsSet() const
{
    return specIsSet_;
}

void PrecheckClusterTask::unsetspec()
{
    specIsSet_ = false;
}

PrecheckStatus PrecheckClusterTask::getStatus() const
{
    return status_;
}

void PrecheckClusterTask::setStatus(const PrecheckStatus& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool PrecheckClusterTask::statusIsSet() const
{
    return statusIsSet_;
}

void PrecheckClusterTask::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


