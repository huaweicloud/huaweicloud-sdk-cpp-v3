

#include "huaweicloud/vod/v1/model/TranscodeTask.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




TranscodeTask::TranscodeTask()
{
    templateId_ = "";
    templateIdIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    errorCode_ = "";
    errorCodeIsSet_ = false;
    errorMsg_ = "";
    errorMsgIsSet_ = false;
    outputIsSet_ = false;
}

TranscodeTask::~TranscodeTask() = default;

void TranscodeTask::validate()
{
}

web::json::value TranscodeTask::toJson() const
{
    web::json::value val = web::json::value::object();

    if(templateIdIsSet_) {
        val[utility::conversions::to_string_t("template_id")] = ModelBase::toJson(templateId_);
    }
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
bool TranscodeTask::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("template_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("template_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTemplateId(refVal);
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
            std::vector<TaskOutPut> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOutput(refVal);
        }
    }
    return ok;
}


std::string TranscodeTask::getTemplateId() const
{
    return templateId_;
}

void TranscodeTask::setTemplateId(const std::string& value)
{
    templateId_ = value;
    templateIdIsSet_ = true;
}

bool TranscodeTask::templateIdIsSet() const
{
    return templateIdIsSet_;
}

void TranscodeTask::unsettemplateId()
{
    templateIdIsSet_ = false;
}

std::string TranscodeTask::getStatus() const
{
    return status_;
}

void TranscodeTask::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool TranscodeTask::statusIsSet() const
{
    return statusIsSet_;
}

void TranscodeTask::unsetstatus()
{
    statusIsSet_ = false;
}

std::string TranscodeTask::getErrorCode() const
{
    return errorCode_;
}

void TranscodeTask::setErrorCode(const std::string& value)
{
    errorCode_ = value;
    errorCodeIsSet_ = true;
}

bool TranscodeTask::errorCodeIsSet() const
{
    return errorCodeIsSet_;
}

void TranscodeTask::unseterrorCode()
{
    errorCodeIsSet_ = false;
}

std::string TranscodeTask::getErrorMsg() const
{
    return errorMsg_;
}

void TranscodeTask::setErrorMsg(const std::string& value)
{
    errorMsg_ = value;
    errorMsgIsSet_ = true;
}

bool TranscodeTask::errorMsgIsSet() const
{
    return errorMsgIsSet_;
}

void TranscodeTask::unseterrorMsg()
{
    errorMsgIsSet_ = false;
}

std::vector<TaskOutPut>& TranscodeTask::getOutput()
{
    return output_;
}

void TranscodeTask::setOutput(const std::vector<TaskOutPut>& value)
{
    output_ = value;
    outputIsSet_ = true;
}

bool TranscodeTask::outputIsSet() const
{
    return outputIsSet_;
}

void TranscodeTask::unsetoutput()
{
    outputIsSet_ = false;
}

}
}
}
}
}


