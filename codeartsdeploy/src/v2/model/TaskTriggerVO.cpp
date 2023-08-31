

#include "huaweicloud/codeartsdeploy/v2/model/TaskTriggerVO.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




TaskTriggerVO::TaskTriggerVO()
{
    triggerSource_ = "";
    triggerSourceIsSet_ = false;
    artifactSourceSystem_ = "";
    artifactSourceSystemIsSet_ = false;
    artifactType_ = "";
    artifactTypeIsSet_ = false;
}

TaskTriggerVO::~TaskTriggerVO() = default;

void TaskTriggerVO::validate()
{
}

web::json::value TaskTriggerVO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(triggerSourceIsSet_) {
        val[utility::conversions::to_string_t("trigger_source")] = ModelBase::toJson(triggerSource_);
    }
    if(artifactSourceSystemIsSet_) {
        val[utility::conversions::to_string_t("artifact_source_system")] = ModelBase::toJson(artifactSourceSystem_);
    }
    if(artifactTypeIsSet_) {
        val[utility::conversions::to_string_t("artifact_type")] = ModelBase::toJson(artifactType_);
    }

    return val;
}

bool TaskTriggerVO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("trigger_source"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("trigger_source"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTriggerSource(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("artifact_source_system"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("artifact_source_system"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setArtifactSourceSystem(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("artifact_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("artifact_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setArtifactType(refVal);
        }
    }
    return ok;
}

std::string TaskTriggerVO::getTriggerSource() const
{
    return triggerSource_;
}

void TaskTriggerVO::setTriggerSource(const std::string& value)
{
    triggerSource_ = value;
    triggerSourceIsSet_ = true;
}

bool TaskTriggerVO::triggerSourceIsSet() const
{
    return triggerSourceIsSet_;
}

void TaskTriggerVO::unsettriggerSource()
{
    triggerSourceIsSet_ = false;
}

std::string TaskTriggerVO::getArtifactSourceSystem() const
{
    return artifactSourceSystem_;
}

void TaskTriggerVO::setArtifactSourceSystem(const std::string& value)
{
    artifactSourceSystem_ = value;
    artifactSourceSystemIsSet_ = true;
}

bool TaskTriggerVO::artifactSourceSystemIsSet() const
{
    return artifactSourceSystemIsSet_;
}

void TaskTriggerVO::unsetartifactSourceSystem()
{
    artifactSourceSystemIsSet_ = false;
}

std::string TaskTriggerVO::getArtifactType() const
{
    return artifactType_;
}

void TaskTriggerVO::setArtifactType(const std::string& value)
{
    artifactType_ = value;
    artifactTypeIsSet_ = true;
}

bool TaskTriggerVO::artifactTypeIsSet() const
{
    return artifactTypeIsSet_;
}

void TaskTriggerVO::unsetartifactType()
{
    artifactTypeIsSet_ = false;
}

}
}
}
}
}


