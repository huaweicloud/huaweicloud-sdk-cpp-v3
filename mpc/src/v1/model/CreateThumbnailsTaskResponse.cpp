

#include "huaweicloud/mpc/v1/model/CreateThumbnailsTaskResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




CreateThumbnailsTaskResponse::CreateThumbnailsTaskResponse()
{
    taskId_ = "";
    taskIdIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    outputIsSet_ = false;
    outputFileName_ = "";
    outputFileNameIsSet_ = false;
    thumbnailTime_ = "";
    thumbnailTimeIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
}

CreateThumbnailsTaskResponse::~CreateThumbnailsTaskResponse() = default;

void CreateThumbnailsTaskResponse::validate()
{
}

web::json::value CreateThumbnailsTaskResponse::toJson() const
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
    if(outputIsSet_) {
        val[utility::conversions::to_string_t("output")] = ModelBase::toJson(output_);
    }
    if(outputFileNameIsSet_) {
        val[utility::conversions::to_string_t("output_file_name")] = ModelBase::toJson(outputFileName_);
    }
    if(thumbnailTimeIsSet_) {
        val[utility::conversions::to_string_t("thumbnail_time")] = ModelBase::toJson(thumbnailTime_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }

    return val;
}

bool CreateThumbnailsTaskResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("thumbnail_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("thumbnail_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setThumbnailTime(refVal);
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
    return ok;
}

std::string CreateThumbnailsTaskResponse::getTaskId() const
{
    return taskId_;
}

void CreateThumbnailsTaskResponse::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool CreateThumbnailsTaskResponse::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void CreateThumbnailsTaskResponse::unsettaskId()
{
    taskIdIsSet_ = false;
}

std::string CreateThumbnailsTaskResponse::getStatus() const
{
    return status_;
}

void CreateThumbnailsTaskResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool CreateThumbnailsTaskResponse::statusIsSet() const
{
    return statusIsSet_;
}

void CreateThumbnailsTaskResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string CreateThumbnailsTaskResponse::getCreateTime() const
{
    return createTime_;
}

void CreateThumbnailsTaskResponse::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool CreateThumbnailsTaskResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void CreateThumbnailsTaskResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

ObsObjInfo CreateThumbnailsTaskResponse::getOutput() const
{
    return output_;
}

void CreateThumbnailsTaskResponse::setOutput(const ObsObjInfo& value)
{
    output_ = value;
    outputIsSet_ = true;
}

bool CreateThumbnailsTaskResponse::outputIsSet() const
{
    return outputIsSet_;
}

void CreateThumbnailsTaskResponse::unsetoutput()
{
    outputIsSet_ = false;
}

std::string CreateThumbnailsTaskResponse::getOutputFileName() const
{
    return outputFileName_;
}

void CreateThumbnailsTaskResponse::setOutputFileName(const std::string& value)
{
    outputFileName_ = value;
    outputFileNameIsSet_ = true;
}

bool CreateThumbnailsTaskResponse::outputFileNameIsSet() const
{
    return outputFileNameIsSet_;
}

void CreateThumbnailsTaskResponse::unsetoutputFileName()
{
    outputFileNameIsSet_ = false;
}

std::string CreateThumbnailsTaskResponse::getThumbnailTime() const
{
    return thumbnailTime_;
}

void CreateThumbnailsTaskResponse::setThumbnailTime(const std::string& value)
{
    thumbnailTime_ = value;
    thumbnailTimeIsSet_ = true;
}

bool CreateThumbnailsTaskResponse::thumbnailTimeIsSet() const
{
    return thumbnailTimeIsSet_;
}

void CreateThumbnailsTaskResponse::unsetthumbnailTime()
{
    thumbnailTimeIsSet_ = false;
}

std::string CreateThumbnailsTaskResponse::getDescription() const
{
    return description_;
}

void CreateThumbnailsTaskResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool CreateThumbnailsTaskResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void CreateThumbnailsTaskResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

}
}
}
}
}


