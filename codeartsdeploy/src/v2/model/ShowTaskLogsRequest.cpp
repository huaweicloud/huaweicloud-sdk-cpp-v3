

#include "huaweicloud/codeartsdeploy/v2/model/ShowTaskLogsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




ShowTaskLogsRequest::ShowTaskLogsRequest()
{
    appId_ = "";
    appIdIsSet_ = false;
    recordId_ = "";
    recordIdIsSet_ = false;
    offset_ = "";
    offsetIsSet_ = false;
    endOffset_ = "";
    endOffsetIsSet_ = false;
    stepId_ = "";
    stepIdIsSet_ = false;
}

ShowTaskLogsRequest::~ShowTaskLogsRequest() = default;

void ShowTaskLogsRequest::validate()
{
}

web::json::value ShowTaskLogsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(appIdIsSet_) {
        val[utility::conversions::to_string_t("app_id")] = ModelBase::toJson(appId_);
    }
    if(recordIdIsSet_) {
        val[utility::conversions::to_string_t("record_id")] = ModelBase::toJson(recordId_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(endOffsetIsSet_) {
        val[utility::conversions::to_string_t("end_offset")] = ModelBase::toJson(endOffset_);
    }
    if(stepIdIsSet_) {
        val[utility::conversions::to_string_t("step_id")] = ModelBase::toJson(stepId_);
    }

    return val;
}
bool ShowTaskLogsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("app_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("record_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("record_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRecordId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_offset"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("step_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("step_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStepId(refVal);
        }
    }
    return ok;
}


std::string ShowTaskLogsRequest::getAppId() const
{
    return appId_;
}

void ShowTaskLogsRequest::setAppId(const std::string& value)
{
    appId_ = value;
    appIdIsSet_ = true;
}

bool ShowTaskLogsRequest::appIdIsSet() const
{
    return appIdIsSet_;
}

void ShowTaskLogsRequest::unsetappId()
{
    appIdIsSet_ = false;
}

std::string ShowTaskLogsRequest::getRecordId() const
{
    return recordId_;
}

void ShowTaskLogsRequest::setRecordId(const std::string& value)
{
    recordId_ = value;
    recordIdIsSet_ = true;
}

bool ShowTaskLogsRequest::recordIdIsSet() const
{
    return recordIdIsSet_;
}

void ShowTaskLogsRequest::unsetrecordId()
{
    recordIdIsSet_ = false;
}

std::string ShowTaskLogsRequest::getOffset() const
{
    return offset_;
}

void ShowTaskLogsRequest::setOffset(const std::string& value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ShowTaskLogsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ShowTaskLogsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ShowTaskLogsRequest::getEndOffset() const
{
    return endOffset_;
}

void ShowTaskLogsRequest::setEndOffset(const std::string& value)
{
    endOffset_ = value;
    endOffsetIsSet_ = true;
}

bool ShowTaskLogsRequest::endOffsetIsSet() const
{
    return endOffsetIsSet_;
}

void ShowTaskLogsRequest::unsetendOffset()
{
    endOffsetIsSet_ = false;
}

std::string ShowTaskLogsRequest::getStepId() const
{
    return stepId_;
}

void ShowTaskLogsRequest::setStepId(const std::string& value)
{
    stepId_ = value;
    stepIdIsSet_ = true;
}

bool ShowTaskLogsRequest::stepIdIsSet() const
{
    return stepIdIsSet_;
}

void ShowTaskLogsRequest::unsetstepId()
{
    stepIdIsSet_ = false;
}

}
}
}
}
}


