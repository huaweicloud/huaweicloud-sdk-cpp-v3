

#include "huaweicloud/mpc/v1/model/MergeChannelsTaskInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




MergeChannelsTaskInfo::MergeChannelsTaskInfo()
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
    audioFilesIsSet_ = false;
    outputFilename_ = "";
    outputFilenameIsSet_ = false;
}

MergeChannelsTaskInfo::~MergeChannelsTaskInfo() = default;

void MergeChannelsTaskInfo::validate()
{
}

web::json::value MergeChannelsTaskInfo::toJson() const
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
    if(audioFilesIsSet_) {
        val[utility::conversions::to_string_t("audio_files")] = ModelBase::toJson(audioFiles_);
    }
    if(outputFilenameIsSet_) {
        val[utility::conversions::to_string_t("output_filename")] = ModelBase::toJson(outputFilename_);
    }

    return val;
}
bool MergeChannelsTaskInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("audio_files"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("audio_files"));
        if(!fieldValue.is_null())
        {
            std::vector<AudioFile> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAudioFiles(refVal);
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
    return ok;
}


std::string MergeChannelsTaskInfo::getTaskId() const
{
    return taskId_;
}

void MergeChannelsTaskInfo::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool MergeChannelsTaskInfo::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void MergeChannelsTaskInfo::unsettaskId()
{
    taskIdIsSet_ = false;
}

std::string MergeChannelsTaskInfo::getStatus() const
{
    return status_;
}

void MergeChannelsTaskInfo::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool MergeChannelsTaskInfo::statusIsSet() const
{
    return statusIsSet_;
}

void MergeChannelsTaskInfo::unsetstatus()
{
    statusIsSet_ = false;
}

std::string MergeChannelsTaskInfo::getCreateTime() const
{
    return createTime_;
}

void MergeChannelsTaskInfo::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool MergeChannelsTaskInfo::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void MergeChannelsTaskInfo::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string MergeChannelsTaskInfo::getEndTime() const
{
    return endTime_;
}

void MergeChannelsTaskInfo::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool MergeChannelsTaskInfo::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void MergeChannelsTaskInfo::unsetendTime()
{
    endTimeIsSet_ = false;
}

ObsObjInfo MergeChannelsTaskInfo::getOutput() const
{
    return output_;
}

void MergeChannelsTaskInfo::setOutput(const ObsObjInfo& value)
{
    output_ = value;
    outputIsSet_ = true;
}

bool MergeChannelsTaskInfo::outputIsSet() const
{
    return outputIsSet_;
}

void MergeChannelsTaskInfo::unsetoutput()
{
    outputIsSet_ = false;
}

std::string MergeChannelsTaskInfo::getDescription() const
{
    return description_;
}

void MergeChannelsTaskInfo::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool MergeChannelsTaskInfo::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void MergeChannelsTaskInfo::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::vector<AudioFile>& MergeChannelsTaskInfo::getAudioFiles()
{
    return audioFiles_;
}

void MergeChannelsTaskInfo::setAudioFiles(const std::vector<AudioFile>& value)
{
    audioFiles_ = value;
    audioFilesIsSet_ = true;
}

bool MergeChannelsTaskInfo::audioFilesIsSet() const
{
    return audioFilesIsSet_;
}

void MergeChannelsTaskInfo::unsetaudioFiles()
{
    audioFilesIsSet_ = false;
}

std::string MergeChannelsTaskInfo::getOutputFilename() const
{
    return outputFilename_;
}

void MergeChannelsTaskInfo::setOutputFilename(const std::string& value)
{
    outputFilename_ = value;
    outputFilenameIsSet_ = true;
}

bool MergeChannelsTaskInfo::outputFilenameIsSet() const
{
    return outputFilenameIsSet_;
}

void MergeChannelsTaskInfo::unsetoutputFilename()
{
    outputFilenameIsSet_ = false;
}

}
}
}
}
}


