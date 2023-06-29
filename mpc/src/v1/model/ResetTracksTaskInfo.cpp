

#include "huaweicloud/mpc/v1/model/ResetTracksTaskInfo.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




ResetTracksTaskInfo::ResetTracksTaskInfo()
{
    taskId_ = "";
    taskIdIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    outputIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    outputFilename_ = "";
    outputFilenameIsSet_ = false;
    tracksInfoIsSet_ = false;
    inputIsSet_ = false;
}

ResetTracksTaskInfo::~ResetTracksTaskInfo() = default;

void ResetTracksTaskInfo::validate()
{
}

web::json::value ResetTracksTaskInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(outputIsSet_) {
        val[utility::conversions::to_string_t("output")] = ModelBase::toJson(output_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(outputFilenameIsSet_) {
        val[utility::conversions::to_string_t("output_filename")] = ModelBase::toJson(outputFilename_);
    }
    if(tracksInfoIsSet_) {
        val[utility::conversions::to_string_t("tracks_info")] = ModelBase::toJson(tracksInfo_);
    }
    if(inputIsSet_) {
        val[utility::conversions::to_string_t("input")] = ModelBase::toJson(input_);
    }

    return val;
}

bool ResetTracksTaskInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("task_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("output"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("output"));
        if(!fieldValue.is_null())
        {
            ObsObjInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOutput(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("output_filename"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("output_filename"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOutputFilename(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tracks_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tracks_info"));
        if(!fieldValue.is_null())
        {
            std::vector<TracksInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTracksInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("input"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("input"));
        if(!fieldValue.is_null())
        {
            ObsObjInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInput(refVal);
        }
    }
    return ok;
}


std::string ResetTracksTaskInfo::getTaskId() const
{
    return taskId_;
}

void ResetTracksTaskInfo::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool ResetTracksTaskInfo::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void ResetTracksTaskInfo::unsettaskId()
{
    taskIdIsSet_ = false;
}

std::string ResetTracksTaskInfo::getStatus() const
{
    return status_;
}

void ResetTracksTaskInfo::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ResetTracksTaskInfo::statusIsSet() const
{
    return statusIsSet_;
}

void ResetTracksTaskInfo::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ResetTracksTaskInfo::getCreateTime() const
{
    return createTime_;
}

void ResetTracksTaskInfo::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool ResetTracksTaskInfo::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void ResetTracksTaskInfo::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string ResetTracksTaskInfo::getEndTime() const
{
    return endTime_;
}

void ResetTracksTaskInfo::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ResetTracksTaskInfo::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ResetTracksTaskInfo::unsetendTime()
{
    endTimeIsSet_ = false;
}

ObsObjInfo ResetTracksTaskInfo::getOutput() const
{
    return output_;
}

void ResetTracksTaskInfo::setOutput(const ObsObjInfo& value)
{
    output_ = value;
    outputIsSet_ = true;
}

bool ResetTracksTaskInfo::outputIsSet() const
{
    return outputIsSet_;
}

void ResetTracksTaskInfo::unsetoutput()
{
    outputIsSet_ = false;
}

std::string ResetTracksTaskInfo::getDescription() const
{
    return description_;
}

void ResetTracksTaskInfo::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ResetTracksTaskInfo::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ResetTracksTaskInfo::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string ResetTracksTaskInfo::getOutputFilename() const
{
    return outputFilename_;
}

void ResetTracksTaskInfo::setOutputFilename(const std::string& value)
{
    outputFilename_ = value;
    outputFilenameIsSet_ = true;
}

bool ResetTracksTaskInfo::outputFilenameIsSet() const
{
    return outputFilenameIsSet_;
}

void ResetTracksTaskInfo::unsetoutputFilename()
{
    outputFilenameIsSet_ = false;
}

std::vector<TracksInfo>& ResetTracksTaskInfo::getTracksInfo()
{
    return tracksInfo_;
}

void ResetTracksTaskInfo::setTracksInfo(const std::vector<TracksInfo>& value)
{
    tracksInfo_ = value;
    tracksInfoIsSet_ = true;
}

bool ResetTracksTaskInfo::tracksInfoIsSet() const
{
    return tracksInfoIsSet_;
}

void ResetTracksTaskInfo::unsettracksInfo()
{
    tracksInfoIsSet_ = false;
}

ObsObjInfo ResetTracksTaskInfo::getInput() const
{
    return input_;
}

void ResetTracksTaskInfo::setInput(const ObsObjInfo& value)
{
    input_ = value;
    inputIsSet_ = true;
}

bool ResetTracksTaskInfo::inputIsSet() const
{
    return inputIsSet_;
}

void ResetTracksTaskInfo::unsetinput()
{
    inputIsSet_ = false;
}

}
}
}
}
}


