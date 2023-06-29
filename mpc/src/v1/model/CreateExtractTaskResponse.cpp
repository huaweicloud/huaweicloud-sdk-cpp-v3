

#include "huaweicloud/mpc/v1/model/CreateExtractTaskResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




CreateExtractTaskResponse::CreateExtractTaskResponse()
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
    description_ = "";
    descriptionIsSet_ = false;
    metadataIsSet_ = false;
}

CreateExtractTaskResponse::~CreateExtractTaskResponse() = default;

void CreateExtractTaskResponse::validate()
{
}

web::json::value CreateExtractTaskResponse::toJson() const
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
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(metadataIsSet_) {
        val[utility::conversions::to_string_t("metadata")] = ModelBase::toJson(metadata_);
    }

    return val;
}

bool CreateExtractTaskResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("metadata"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("metadata"));
        if(!fieldValue.is_null())
        {
            MetaData refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetadata(refVal);
        }
    }
    return ok;
}


std::string CreateExtractTaskResponse::getTaskId() const
{
    return taskId_;
}

void CreateExtractTaskResponse::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool CreateExtractTaskResponse::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void CreateExtractTaskResponse::unsettaskId()
{
    taskIdIsSet_ = false;
}

std::string CreateExtractTaskResponse::getStatus() const
{
    return status_;
}

void CreateExtractTaskResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool CreateExtractTaskResponse::statusIsSet() const
{
    return statusIsSet_;
}

void CreateExtractTaskResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string CreateExtractTaskResponse::getCreateTime() const
{
    return createTime_;
}

void CreateExtractTaskResponse::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool CreateExtractTaskResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void CreateExtractTaskResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

ObsObjInfo CreateExtractTaskResponse::getOutput() const
{
    return output_;
}

void CreateExtractTaskResponse::setOutput(const ObsObjInfo& value)
{
    output_ = value;
    outputIsSet_ = true;
}

bool CreateExtractTaskResponse::outputIsSet() const
{
    return outputIsSet_;
}

void CreateExtractTaskResponse::unsetoutput()
{
    outputIsSet_ = false;
}

std::string CreateExtractTaskResponse::getOutputFileName() const
{
    return outputFileName_;
}

void CreateExtractTaskResponse::setOutputFileName(const std::string& value)
{
    outputFileName_ = value;
    outputFileNameIsSet_ = true;
}

bool CreateExtractTaskResponse::outputFileNameIsSet() const
{
    return outputFileNameIsSet_;
}

void CreateExtractTaskResponse::unsetoutputFileName()
{
    outputFileNameIsSet_ = false;
}

std::string CreateExtractTaskResponse::getDescription() const
{
    return description_;
}

void CreateExtractTaskResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool CreateExtractTaskResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void CreateExtractTaskResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

MetaData CreateExtractTaskResponse::getMetadata() const
{
    return metadata_;
}

void CreateExtractTaskResponse::setMetadata(const MetaData& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool CreateExtractTaskResponse::metadataIsSet() const
{
    return metadataIsSet_;
}

void CreateExtractTaskResponse::unsetmetadata()
{
    metadataIsSet_ = false;
}

}
}
}
}
}


