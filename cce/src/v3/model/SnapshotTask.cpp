

#include "huaweicloud/cce/v3/model/SnapshotTask.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




SnapshotTask::SnapshotTask()
{
    kind_ = "";
    kindIsSet_ = false;
    apiVersion_ = "";
    apiVersionIsSet_ = false;
    metadataIsSet_ = false;
    specIsSet_ = false;
    statusIsSet_ = false;
}

SnapshotTask::~SnapshotTask() = default;

void SnapshotTask::validate()
{
}

web::json::value SnapshotTask::toJson() const
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
bool SnapshotTask::fromJson(const web::json::value& val)
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
            SnapshotTaskMetadata refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetadata(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("spec"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("spec"));
        if(!fieldValue.is_null())
        {
            SnapshotSpec refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpec(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            SnapshotStatus refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


std::string SnapshotTask::getKind() const
{
    return kind_;
}

void SnapshotTask::setKind(const std::string& value)
{
    kind_ = value;
    kindIsSet_ = true;
}

bool SnapshotTask::kindIsSet() const
{
    return kindIsSet_;
}

void SnapshotTask::unsetkind()
{
    kindIsSet_ = false;
}

std::string SnapshotTask::getApiVersion() const
{
    return apiVersion_;
}

void SnapshotTask::setApiVersion(const std::string& value)
{
    apiVersion_ = value;
    apiVersionIsSet_ = true;
}

bool SnapshotTask::apiVersionIsSet() const
{
    return apiVersionIsSet_;
}

void SnapshotTask::unsetapiVersion()
{
    apiVersionIsSet_ = false;
}

SnapshotTaskMetadata SnapshotTask::getMetadata() const
{
    return metadata_;
}

void SnapshotTask::setMetadata(const SnapshotTaskMetadata& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool SnapshotTask::metadataIsSet() const
{
    return metadataIsSet_;
}

void SnapshotTask::unsetmetadata()
{
    metadataIsSet_ = false;
}

SnapshotSpec SnapshotTask::getSpec() const
{
    return spec_;
}

void SnapshotTask::setSpec(const SnapshotSpec& value)
{
    spec_ = value;
    specIsSet_ = true;
}

bool SnapshotTask::specIsSet() const
{
    return specIsSet_;
}

void SnapshotTask::unsetspec()
{
    specIsSet_ = false;
}

SnapshotStatus SnapshotTask::getStatus() const
{
    return status_;
}

void SnapshotTask::setStatus(const SnapshotStatus& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool SnapshotTask::statusIsSet() const
{
    return statusIsSet_;
}

void SnapshotTask::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


