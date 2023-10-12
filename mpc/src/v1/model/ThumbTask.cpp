

#include "huaweicloud/mpc/v1/model/ThumbTask.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




ThumbTask::ThumbTask()
{
    taskId_ = "";
    taskIdIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    inputIsSet_ = false;
    outputIsSet_ = false;
    outputFileName_ = "";
    outputFileNameIsSet_ = false;
    userData_ = "";
    userDataIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    thumbnailInfoIsSet_ = false;
}

ThumbTask::~ThumbTask() = default;

void ThumbTask::validate()
{
}

web::json::value ThumbTask::toJson() const
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
    if(inputIsSet_) {
        val[utility::conversions::to_string_t("input")] = ModelBase::toJson(input_);
    }
    if(outputIsSet_) {
        val[utility::conversions::to_string_t("output")] = ModelBase::toJson(output_);
    }
    if(outputFileNameIsSet_) {
        val[utility::conversions::to_string_t("output_file_name")] = ModelBase::toJson(outputFileName_);
    }
    if(userDataIsSet_) {
        val[utility::conversions::to_string_t("user_data")] = ModelBase::toJson(userData_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(thumbnailInfoIsSet_) {
        val[utility::conversions::to_string_t("thumbnail_info")] = ModelBase::toJson(thumbnailInfo_);
    }

    return val;
}
bool ThumbTask::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("input"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("input"));
        if(!fieldValue.is_null())
        {
            ObsObjInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInput(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("output_file_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("output_file_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOutputFileName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_data"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserData(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("thumbnail_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("thumbnail_info"));
        if(!fieldValue.is_null())
        {
            std::vector<PicInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setThumbnailInfo(refVal);
        }
    }
    return ok;
}


std::string ThumbTask::getTaskId() const
{
    return taskId_;
}

void ThumbTask::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool ThumbTask::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void ThumbTask::unsettaskId()
{
    taskIdIsSet_ = false;
}

std::string ThumbTask::getStatus() const
{
    return status_;
}

void ThumbTask::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ThumbTask::statusIsSet() const
{
    return statusIsSet_;
}

void ThumbTask::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ThumbTask::getCreateTime() const
{
    return createTime_;
}

void ThumbTask::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool ThumbTask::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void ThumbTask::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string ThumbTask::getEndTime() const
{
    return endTime_;
}

void ThumbTask::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ThumbTask::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ThumbTask::unsetendTime()
{
    endTimeIsSet_ = false;
}

ObsObjInfo ThumbTask::getInput() const
{
    return input_;
}

void ThumbTask::setInput(const ObsObjInfo& value)
{
    input_ = value;
    inputIsSet_ = true;
}

bool ThumbTask::inputIsSet() const
{
    return inputIsSet_;
}

void ThumbTask::unsetinput()
{
    inputIsSet_ = false;
}

ObsObjInfo ThumbTask::getOutput() const
{
    return output_;
}

void ThumbTask::setOutput(const ObsObjInfo& value)
{
    output_ = value;
    outputIsSet_ = true;
}

bool ThumbTask::outputIsSet() const
{
    return outputIsSet_;
}

void ThumbTask::unsetoutput()
{
    outputIsSet_ = false;
}

std::string ThumbTask::getOutputFileName() const
{
    return outputFileName_;
}

void ThumbTask::setOutputFileName(const std::string& value)
{
    outputFileName_ = value;
    outputFileNameIsSet_ = true;
}

bool ThumbTask::outputFileNameIsSet() const
{
    return outputFileNameIsSet_;
}

void ThumbTask::unsetoutputFileName()
{
    outputFileNameIsSet_ = false;
}

std::string ThumbTask::getUserData() const
{
    return userData_;
}

void ThumbTask::setUserData(const std::string& value)
{
    userData_ = value;
    userDataIsSet_ = true;
}

bool ThumbTask::userDataIsSet() const
{
    return userDataIsSet_;
}

void ThumbTask::unsetuserData()
{
    userDataIsSet_ = false;
}

std::string ThumbTask::getDescription() const
{
    return description_;
}

void ThumbTask::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ThumbTask::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ThumbTask::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::vector<PicInfo>& ThumbTask::getThumbnailInfo()
{
    return thumbnailInfo_;
}

void ThumbTask::setThumbnailInfo(const std::vector<PicInfo>& value)
{
    thumbnailInfo_ = value;
    thumbnailInfoIsSet_ = true;
}

bool ThumbTask::thumbnailInfoIsSet() const
{
    return thumbnailInfoIsSet_;
}

void ThumbTask::unsetthumbnailInfo()
{
    thumbnailInfoIsSet_ = false;
}

}
}
}
}
}


