

#include "huaweicloud/codeartspipeline/v2/model/RunPipelineDTO_params_build_params.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




RunPipelineDTO_params_build_params::RunPipelineDTO_params_build_params()
{
    buildType_ = "";
    buildTypeIsSet_ = false;
    eventType_ = "";
    eventTypeIsSet_ = false;
    targetBranch_ = "";
    targetBranchIsSet_ = false;
    tag_ = "";
    tagIsSet_ = false;
}

RunPipelineDTO_params_build_params::~RunPipelineDTO_params_build_params() = default;

void RunPipelineDTO_params_build_params::validate()
{
}

web::json::value RunPipelineDTO_params_build_params::toJson() const
{
    web::json::value val = web::json::value::object();

    if(buildTypeIsSet_) {
        val[utility::conversions::to_string_t("build_type")] = ModelBase::toJson(buildType_);
    }
    if(eventTypeIsSet_) {
        val[utility::conversions::to_string_t("event_type")] = ModelBase::toJson(eventType_);
    }
    if(targetBranchIsSet_) {
        val[utility::conversions::to_string_t("target_branch")] = ModelBase::toJson(targetBranch_);
    }
    if(tagIsSet_) {
        val[utility::conversions::to_string_t("tag")] = ModelBase::toJson(tag_);
    }

    return val;
}
bool RunPipelineDTO_params_build_params::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("build_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("build_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBuildType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("event_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("event_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEventType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target_branch"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_branch"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetBranch(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tag"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tag"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTag(refVal);
        }
    }
    return ok;
}


std::string RunPipelineDTO_params_build_params::getBuildType() const
{
    return buildType_;
}

void RunPipelineDTO_params_build_params::setBuildType(const std::string& value)
{
    buildType_ = value;
    buildTypeIsSet_ = true;
}

bool RunPipelineDTO_params_build_params::buildTypeIsSet() const
{
    return buildTypeIsSet_;
}

void RunPipelineDTO_params_build_params::unsetbuildType()
{
    buildTypeIsSet_ = false;
}

std::string RunPipelineDTO_params_build_params::getEventType() const
{
    return eventType_;
}

void RunPipelineDTO_params_build_params::setEventType(const std::string& value)
{
    eventType_ = value;
    eventTypeIsSet_ = true;
}

bool RunPipelineDTO_params_build_params::eventTypeIsSet() const
{
    return eventTypeIsSet_;
}

void RunPipelineDTO_params_build_params::unseteventType()
{
    eventTypeIsSet_ = false;
}

std::string RunPipelineDTO_params_build_params::getTargetBranch() const
{
    return targetBranch_;
}

void RunPipelineDTO_params_build_params::setTargetBranch(const std::string& value)
{
    targetBranch_ = value;
    targetBranchIsSet_ = true;
}

bool RunPipelineDTO_params_build_params::targetBranchIsSet() const
{
    return targetBranchIsSet_;
}

void RunPipelineDTO_params_build_params::unsettargetBranch()
{
    targetBranchIsSet_ = false;
}

std::string RunPipelineDTO_params_build_params::getTag() const
{
    return tag_;
}

void RunPipelineDTO_params_build_params::setTag(const std::string& value)
{
    tag_ = value;
    tagIsSet_ = true;
}

bool RunPipelineDTO_params_build_params::tagIsSet() const
{
    return tagIsSet_;
}

void RunPipelineDTO_params_build_params::unsettag()
{
    tagIsSet_ = false;
}

}
}
}
}
}


