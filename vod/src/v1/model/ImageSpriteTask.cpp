

#include "huaweicloud/vod/v1/model/ImageSpriteTask.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




ImageSpriteTask::ImageSpriteTask()
{
    status_ = "";
    statusIsSet_ = false;
    errorCode_ = "";
    errorCodeIsSet_ = false;
    errorMsg_ = "";
    errorMsgIsSet_ = false;
    outputIsSet_ = false;
}

ImageSpriteTask::~ImageSpriteTask() = default;

void ImageSpriteTask::validate()
{
}

web::json::value ImageSpriteTask::toJson() const
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
bool ImageSpriteTask::fromJson(const web::json::value& val)
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
            ImageSpriteTaskOutPut refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOutput(refVal);
        }
    }
    return ok;
}


std::string ImageSpriteTask::getStatus() const
{
    return status_;
}

void ImageSpriteTask::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ImageSpriteTask::statusIsSet() const
{
    return statusIsSet_;
}

void ImageSpriteTask::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ImageSpriteTask::getErrorCode() const
{
    return errorCode_;
}

void ImageSpriteTask::setErrorCode(const std::string& value)
{
    errorCode_ = value;
    errorCodeIsSet_ = true;
}

bool ImageSpriteTask::errorCodeIsSet() const
{
    return errorCodeIsSet_;
}

void ImageSpriteTask::unseterrorCode()
{
    errorCodeIsSet_ = false;
}

std::string ImageSpriteTask::getErrorMsg() const
{
    return errorMsg_;
}

void ImageSpriteTask::setErrorMsg(const std::string& value)
{
    errorMsg_ = value;
    errorMsgIsSet_ = true;
}

bool ImageSpriteTask::errorMsgIsSet() const
{
    return errorMsgIsSet_;
}

void ImageSpriteTask::unseterrorMsg()
{
    errorMsgIsSet_ = false;
}

ImageSpriteTaskOutPut ImageSpriteTask::getOutput() const
{
    return output_;
}

void ImageSpriteTask::setOutput(const ImageSpriteTaskOutPut& value)
{
    output_ = value;
    outputIsSet_ = true;
}

bool ImageSpriteTask::outputIsSet() const
{
    return outputIsSet_;
}

void ImageSpriteTask::unsetoutput()
{
    outputIsSet_ = false;
}

}
}
}
}
}


