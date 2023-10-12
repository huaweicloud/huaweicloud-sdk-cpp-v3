

#include "huaweicloud/cbr/v1/model/OpExtendInfoCommon.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




OpExtendInfoCommon::OpExtendInfoCommon()
{
    progress_ = 0;
    progressIsSet_ = false;
    requestId_ = "";
    requestIdIsSet_ = false;
    taskId_ = "";
    taskIdIsSet_ = false;
}

OpExtendInfoCommon::~OpExtendInfoCommon() = default;

void OpExtendInfoCommon::validate()
{
}

web::json::value OpExtendInfoCommon::toJson() const
{
    web::json::value val = web::json::value::object();

    if(progressIsSet_) {
        val[utility::conversions::to_string_t("progress")] = ModelBase::toJson(progress_);
    }
    if(requestIdIsSet_) {
        val[utility::conversions::to_string_t("request_id")] = ModelBase::toJson(requestId_);
    }
    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }

    return val;
}
bool OpExtendInfoCommon::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("progress"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("progress"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProgress(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("request_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("request_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRequestId(refVal);
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
    return ok;
}


int32_t OpExtendInfoCommon::getProgress() const
{
    return progress_;
}

void OpExtendInfoCommon::setProgress(int32_t value)
{
    progress_ = value;
    progressIsSet_ = true;
}

bool OpExtendInfoCommon::progressIsSet() const
{
    return progressIsSet_;
}

void OpExtendInfoCommon::unsetprogress()
{
    progressIsSet_ = false;
}

std::string OpExtendInfoCommon::getRequestId() const
{
    return requestId_;
}

void OpExtendInfoCommon::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool OpExtendInfoCommon::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void OpExtendInfoCommon::unsetrequestId()
{
    requestIdIsSet_ = false;
}

std::string OpExtendInfoCommon::getTaskId() const
{
    return taskId_;
}

void OpExtendInfoCommon::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool OpExtendInfoCommon::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void OpExtendInfoCommon::unsettaskId()
{
    taskIdIsSet_ = false;
}

}
}
}
}
}


