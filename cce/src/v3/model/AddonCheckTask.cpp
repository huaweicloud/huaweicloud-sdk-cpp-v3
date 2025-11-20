

#include "huaweicloud/cce/v3/model/AddonCheckTask.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




AddonCheckTask::AddonCheckTask()
{
    metadataIsSet_ = false;
    specIsSet_ = false;
    statusIsSet_ = false;
}

AddonCheckTask::~AddonCheckTask() = default;

void AddonCheckTask::validate()
{
}

web::json::value AddonCheckTask::toJson() const
{
    web::json::value val = web::json::value::object();

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
bool AddonCheckTask::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("metadata"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("metadata"));
        if(!fieldValue.is_null())
        {
            CheckTaskMetadata refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetadata(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("spec"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("spec"));
        if(!fieldValue.is_null())
        {
            CheckTaskSpec refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpec(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            CheckTaskStatus refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


CheckTaskMetadata AddonCheckTask::getMetadata() const
{
    return metadata_;
}

void AddonCheckTask::setMetadata(const CheckTaskMetadata& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool AddonCheckTask::metadataIsSet() const
{
    return metadataIsSet_;
}

void AddonCheckTask::unsetmetadata()
{
    metadataIsSet_ = false;
}

CheckTaskSpec AddonCheckTask::getSpec() const
{
    return spec_;
}

void AddonCheckTask::setSpec(const CheckTaskSpec& value)
{
    spec_ = value;
    specIsSet_ = true;
}

bool AddonCheckTask::specIsSet() const
{
    return specIsSet_;
}

void AddonCheckTask::unsetspec()
{
    specIsSet_ = false;
}

CheckTaskStatus AddonCheckTask::getStatus() const
{
    return status_;
}

void AddonCheckTask::setStatus(const CheckTaskStatus& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool AddonCheckTask::statusIsSet() const
{
    return statusIsSet_;
}

void AddonCheckTask::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


