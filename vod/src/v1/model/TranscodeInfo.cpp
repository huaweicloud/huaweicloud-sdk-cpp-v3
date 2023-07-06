

#include "huaweicloud/vod/v1/model/TranscodeInfo.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




TranscodeInfo::TranscodeInfo()
{
    templateGroupName_ = "";
    templateGroupNameIsSet_ = false;
    outputIsSet_ = false;
    execDesc_ = "";
    execDescIsSet_ = false;
    transcodeStatus_ = "";
    transcodeStatusIsSet_ = false;
}

TranscodeInfo::~TranscodeInfo() = default;

void TranscodeInfo::validate()
{
}

web::json::value TranscodeInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(templateGroupNameIsSet_) {
        val[utility::conversions::to_string_t("template_group_name")] = ModelBase::toJson(templateGroupName_);
    }
    if(outputIsSet_) {
        val[utility::conversions::to_string_t("output")] = ModelBase::toJson(output_);
    }
    if(execDescIsSet_) {
        val[utility::conversions::to_string_t("exec_desc")] = ModelBase::toJson(execDesc_);
    }
    if(transcodeStatusIsSet_) {
        val[utility::conversions::to_string_t("transcode_status")] = ModelBase::toJson(transcodeStatus_);
    }

    return val;
}

bool TranscodeInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("template_group_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("template_group_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTemplateGroupName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("output"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("output"));
        if(!fieldValue.is_null())
        {
            std::vector<Output> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOutput(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("exec_desc"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("exec_desc"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExecDesc(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("transcode_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("transcode_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTranscodeStatus(refVal);
        }
    }
    return ok;
}

std::string TranscodeInfo::getTemplateGroupName() const
{
    return templateGroupName_;
}

void TranscodeInfo::setTemplateGroupName(const std::string& value)
{
    templateGroupName_ = value;
    templateGroupNameIsSet_ = true;
}

bool TranscodeInfo::templateGroupNameIsSet() const
{
    return templateGroupNameIsSet_;
}

void TranscodeInfo::unsettemplateGroupName()
{
    templateGroupNameIsSet_ = false;
}

std::vector<Output>& TranscodeInfo::getOutput()
{
    return output_;
}

void TranscodeInfo::setOutput(const std::vector<Output>& value)
{
    output_ = value;
    outputIsSet_ = true;
}

bool TranscodeInfo::outputIsSet() const
{
    return outputIsSet_;
}

void TranscodeInfo::unsetoutput()
{
    outputIsSet_ = false;
}

std::string TranscodeInfo::getExecDesc() const
{
    return execDesc_;
}

void TranscodeInfo::setExecDesc(const std::string& value)
{
    execDesc_ = value;
    execDescIsSet_ = true;
}

bool TranscodeInfo::execDescIsSet() const
{
    return execDescIsSet_;
}

void TranscodeInfo::unsetexecDesc()
{
    execDescIsSet_ = false;
}

std::string TranscodeInfo::getTranscodeStatus() const
{
    return transcodeStatus_;
}

void TranscodeInfo::setTranscodeStatus(const std::string& value)
{
    transcodeStatus_ = value;
    transcodeStatusIsSet_ = true;
}

bool TranscodeInfo::transcodeStatusIsSet() const
{
    return transcodeStatusIsSet_;
}

void TranscodeInfo::unsettranscodeStatus()
{
    transcodeStatusIsSet_ = false;
}

}
}
}
}
}


