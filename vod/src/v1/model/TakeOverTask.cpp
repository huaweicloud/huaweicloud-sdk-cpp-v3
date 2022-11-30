

#include "huaweicloud/vod/v1/model/TakeOverTask.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




TakeOverTask::TakeOverTask()
{
    bucket_ = "";
    bucketIsSet_ = false;
    object_ = "";
    objectIsSet_ = false;
    hostType_ = 0;
    hostTypeIsSet_ = false;
    outputBucket_ = "";
    outputBucketIsSet_ = false;
    outputPath_ = "";
    outputPathIsSet_ = false;
    taskId_ = "";
    taskIdIsSet_ = false;
    suffixIsSet_ = false;
    templateGroupName_ = "";
    templateGroupNameIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    execDesc_ = "";
    execDescIsSet_ = false;
}

TakeOverTask::~TakeOverTask() = default;

void TakeOverTask::validate()
{
}

web::json::value TakeOverTask::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bucketIsSet_) {
        val[utility::conversions::to_string_t("bucket")] = ModelBase::toJson(bucket_);
    }
    if(objectIsSet_) {
        val[utility::conversions::to_string_t("object")] = ModelBase::toJson(object_);
    }
    if(hostTypeIsSet_) {
        val[utility::conversions::to_string_t("host_type")] = ModelBase::toJson(hostType_);
    }
    if(outputBucketIsSet_) {
        val[utility::conversions::to_string_t("output_bucket")] = ModelBase::toJson(outputBucket_);
    }
    if(outputPathIsSet_) {
        val[utility::conversions::to_string_t("output_path")] = ModelBase::toJson(outputPath_);
    }
    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }
    if(suffixIsSet_) {
        val[utility::conversions::to_string_t("suffix")] = ModelBase::toJson(suffix_);
    }
    if(templateGroupNameIsSet_) {
        val[utility::conversions::to_string_t("template_group_name")] = ModelBase::toJson(templateGroupName_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(execDescIsSet_) {
        val[utility::conversions::to_string_t("exec_desc")] = ModelBase::toJson(execDesc_);
    }

    return val;
}

bool TakeOverTask::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("bucket"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bucket"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBucket(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("object"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("object"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObject(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("host_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("host_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHostType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("output_bucket"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("output_bucket"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOutputBucket(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("output_path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("output_path"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOutputPath(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("task_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("suffix"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("suffix"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSuffix(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("template_group_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("template_group_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTemplateGroupName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
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
    return ok;
}


std::string TakeOverTask::getBucket() const
{
    return bucket_;
}

void TakeOverTask::setBucket(const std::string& value)
{
    bucket_ = value;
    bucketIsSet_ = true;
}

bool TakeOverTask::bucketIsSet() const
{
    return bucketIsSet_;
}

void TakeOverTask::unsetbucket()
{
    bucketIsSet_ = false;
}

std::string TakeOverTask::getObject() const
{
    return object_;
}

void TakeOverTask::setObject(const std::string& value)
{
    object_ = value;
    objectIsSet_ = true;
}

bool TakeOverTask::objectIsSet() const
{
    return objectIsSet_;
}

void TakeOverTask::unsetobject()
{
    objectIsSet_ = false;
}

int32_t TakeOverTask::getHostType() const
{
    return hostType_;
}

void TakeOverTask::setHostType(int32_t value)
{
    hostType_ = value;
    hostTypeIsSet_ = true;
}

bool TakeOverTask::hostTypeIsSet() const
{
    return hostTypeIsSet_;
}

void TakeOverTask::unsethostType()
{
    hostTypeIsSet_ = false;
}

std::string TakeOverTask::getOutputBucket() const
{
    return outputBucket_;
}

void TakeOverTask::setOutputBucket(const std::string& value)
{
    outputBucket_ = value;
    outputBucketIsSet_ = true;
}

bool TakeOverTask::outputBucketIsSet() const
{
    return outputBucketIsSet_;
}

void TakeOverTask::unsetoutputBucket()
{
    outputBucketIsSet_ = false;
}

std::string TakeOverTask::getOutputPath() const
{
    return outputPath_;
}

void TakeOverTask::setOutputPath(const std::string& value)
{
    outputPath_ = value;
    outputPathIsSet_ = true;
}

bool TakeOverTask::outputPathIsSet() const
{
    return outputPathIsSet_;
}

void TakeOverTask::unsetoutputPath()
{
    outputPathIsSet_ = false;
}

std::string TakeOverTask::getTaskId() const
{
    return taskId_;
}

void TakeOverTask::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool TakeOverTask::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void TakeOverTask::unsettaskId()
{
    taskIdIsSet_ = false;
}

std::vector<std::string>& TakeOverTask::getSuffix()
{
    return suffix_;
}

void TakeOverTask::setSuffix(const std::vector<std::string>& value)
{
    suffix_ = value;
    suffixIsSet_ = true;
}

bool TakeOverTask::suffixIsSet() const
{
    return suffixIsSet_;
}

void TakeOverTask::unsetsuffix()
{
    suffixIsSet_ = false;
}

std::string TakeOverTask::getTemplateGroupName() const
{
    return templateGroupName_;
}

void TakeOverTask::setTemplateGroupName(const std::string& value)
{
    templateGroupName_ = value;
    templateGroupNameIsSet_ = true;
}

bool TakeOverTask::templateGroupNameIsSet() const
{
    return templateGroupNameIsSet_;
}

void TakeOverTask::unsettemplateGroupName()
{
    templateGroupNameIsSet_ = false;
}

std::string TakeOverTask::getCreateTime() const
{
    return createTime_;
}

void TakeOverTask::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool TakeOverTask::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void TakeOverTask::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string TakeOverTask::getEndTime() const
{
    return endTime_;
}

void TakeOverTask::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool TakeOverTask::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void TakeOverTask::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string TakeOverTask::getStatus() const
{
    return status_;
}

void TakeOverTask::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool TakeOverTask::statusIsSet() const
{
    return statusIsSet_;
}

void TakeOverTask::unsetstatus()
{
    statusIsSet_ = false;
}

std::string TakeOverTask::getExecDesc() const
{
    return execDesc_;
}

void TakeOverTask::setExecDesc(const std::string& value)
{
    execDesc_ = value;
    execDescIsSet_ = true;
}

bool TakeOverTask::execDescIsSet() const
{
    return execDescIsSet_;
}

void TakeOverTask::unsetexecDesc()
{
    execDescIsSet_ = false;
}

}
}
}
}
}


