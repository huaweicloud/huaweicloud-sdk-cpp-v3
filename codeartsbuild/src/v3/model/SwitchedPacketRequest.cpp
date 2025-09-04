

#include "huaweicloud/codeartsbuild/v3/model/SwitchedPacketRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




SwitchedPacketRequest::SwitchedPacketRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    sourceGroupId_ = "";
    sourceGroupIdIsSet_ = false;
    targetGroupId_ = "";
    targetGroupIdIsSet_ = false;
}

SwitchedPacketRequest::~SwitchedPacketRequest() = default;

void SwitchedPacketRequest::validate()
{
}

web::json::value SwitchedPacketRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(sourceGroupIdIsSet_) {
        val[utility::conversions::to_string_t("source_group_id")] = ModelBase::toJson(sourceGroupId_);
    }
    if(targetGroupIdIsSet_) {
        val[utility::conversions::to_string_t("target_group_id")] = ModelBase::toJson(targetGroupId_);
    }

    return val;
}
bool SwitchedPacketRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source_group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceGroupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target_group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetGroupId(refVal);
        }
    }
    return ok;
}


std::string SwitchedPacketRequest::getProjectId() const
{
    return projectId_;
}

void SwitchedPacketRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool SwitchedPacketRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void SwitchedPacketRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string SwitchedPacketRequest::getSourceGroupId() const
{
    return sourceGroupId_;
}

void SwitchedPacketRequest::setSourceGroupId(const std::string& value)
{
    sourceGroupId_ = value;
    sourceGroupIdIsSet_ = true;
}

bool SwitchedPacketRequest::sourceGroupIdIsSet() const
{
    return sourceGroupIdIsSet_;
}

void SwitchedPacketRequest::unsetsourceGroupId()
{
    sourceGroupIdIsSet_ = false;
}

std::string SwitchedPacketRequest::getTargetGroupId() const
{
    return targetGroupId_;
}

void SwitchedPacketRequest::setTargetGroupId(const std::string& value)
{
    targetGroupId_ = value;
    targetGroupIdIsSet_ = true;
}

bool SwitchedPacketRequest::targetGroupIdIsSet() const
{
    return targetGroupIdIsSet_;
}

void SwitchedPacketRequest::unsettargetGroupId()
{
    targetGroupIdIsSet_ = false;
}

}
}
}
}
}


