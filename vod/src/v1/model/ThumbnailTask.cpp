

#include "huaweicloud/vod/v1/model/ThumbnailTask.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




ThumbnailTask::ThumbnailTask()
{
    status_ = "";
    statusIsSet_ = false;
    errorCode_ = "";
    errorCodeIsSet_ = false;
    errorMsg_ = "";
    errorMsgIsSet_ = false;
    outputIsSet_ = false;
}

ThumbnailTask::~ThumbnailTask() = default;

void ThumbnailTask::validate()
{
}

web::json::value ThumbnailTask::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(errorCodeIsSet_) {
        val[utility::conversions::to_string_t("error_code")] = ModelBase::toJson(errorCode_);
    }
    if(errorMsgIsSet_) {
        val[utility::conversions::to_string_t("error_msg")] = ModelBase::toJson(errorMsg_);
    }
    if(outputIsSet_) {
        val[utility::conversions::to_string_t("output")] = ModelBase::toJson(output_);
    }

    return val;
}
bool ThumbnailTask::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("error_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("error_msg"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_msg"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorMsg(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("output"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("output"));
        if(!fieldValue.is_null())
        {
            ThumbnailTaskOutPut refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOutput(refVal);
        }
    }
    return ok;
}


std::string ThumbnailTask::getStatus() const
{
    return status_;
}

void ThumbnailTask::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ThumbnailTask::statusIsSet() const
{
    return statusIsSet_;
}

void ThumbnailTask::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ThumbnailTask::getErrorCode() const
{
    return errorCode_;
}

void ThumbnailTask::setErrorCode(const std::string& value)
{
    errorCode_ = value;
    errorCodeIsSet_ = true;
}

bool ThumbnailTask::errorCodeIsSet() const
{
    return errorCodeIsSet_;
}

void ThumbnailTask::unseterrorCode()
{
    errorCodeIsSet_ = false;
}

std::string ThumbnailTask::getErrorMsg() const
{
    return errorMsg_;
}

void ThumbnailTask::setErrorMsg(const std::string& value)
{
    errorMsg_ = value;
    errorMsgIsSet_ = true;
}

bool ThumbnailTask::errorMsgIsSet() const
{
    return errorMsgIsSet_;
}

void ThumbnailTask::unseterrorMsg()
{
    errorMsgIsSet_ = false;
}

ThumbnailTaskOutPut ThumbnailTask::getOutput() const
{
    return output_;
}

void ThumbnailTask::setOutput(const ThumbnailTaskOutPut& value)
{
    output_ = value;
    outputIsSet_ = true;
}

bool ThumbnailTask::outputIsSet() const
{
    return outputIsSet_;
}

void ThumbnailTask::unsetoutput()
{
    outputIsSet_ = false;
}

}
}
}
}
}


