

#include "huaweicloud/modelarts/v1/model/LogConfigResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




LogConfigResponse::LogConfigResponse()
{
    type_ = "";
    typeIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    logGroupId_ = "";
    logGroupIdIsSet_ = false;
    logStreamId_ = "";
    logStreamIdIsSet_ = false;
    deploymentId_ = "";
    deploymentIdIsSet_ = false;
    failureReason_ = "";
    failureReasonIsSet_ = false;
}

LogConfigResponse::~LogConfigResponse() = default;

void LogConfigResponse::validate()
{
}

web::json::value LogConfigResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(logGroupIdIsSet_) {
        val[utility::conversions::to_string_t("log_group_id")] = ModelBase::toJson(logGroupId_);
    }
    if(logStreamIdIsSet_) {
        val[utility::conversions::to_string_t("log_stream_id")] = ModelBase::toJson(logStreamId_);
    }
    if(deploymentIdIsSet_) {
        val[utility::conversions::to_string_t("deployment_id")] = ModelBase::toJson(deploymentId_);
    }
    if(failureReasonIsSet_) {
        val[utility::conversions::to_string_t("failure_reason")] = ModelBase::toJson(failureReason_);
    }

    return val;
}
bool LogConfigResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("log_group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogGroupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("log_stream_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_stream_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogStreamId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("deployment_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("deployment_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeploymentId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("failure_reason"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("failure_reason"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFailureReason(refVal);
        }
    }
    return ok;
}


std::string LogConfigResponse::getType() const
{
    return type_;
}

void LogConfigResponse::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool LogConfigResponse::typeIsSet() const
{
    return typeIsSet_;
}

void LogConfigResponse::unsettype()
{
    typeIsSet_ = false;
}

std::string LogConfigResponse::getStatus() const
{
    return status_;
}

void LogConfigResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool LogConfigResponse::statusIsSet() const
{
    return statusIsSet_;
}

void LogConfigResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string LogConfigResponse::getLogGroupId() const
{
    return logGroupId_;
}

void LogConfigResponse::setLogGroupId(const std::string& value)
{
    logGroupId_ = value;
    logGroupIdIsSet_ = true;
}

bool LogConfigResponse::logGroupIdIsSet() const
{
    return logGroupIdIsSet_;
}

void LogConfigResponse::unsetlogGroupId()
{
    logGroupIdIsSet_ = false;
}

std::string LogConfigResponse::getLogStreamId() const
{
    return logStreamId_;
}

void LogConfigResponse::setLogStreamId(const std::string& value)
{
    logStreamId_ = value;
    logStreamIdIsSet_ = true;
}

bool LogConfigResponse::logStreamIdIsSet() const
{
    return logStreamIdIsSet_;
}

void LogConfigResponse::unsetlogStreamId()
{
    logStreamIdIsSet_ = false;
}

std::string LogConfigResponse::getDeploymentId() const
{
    return deploymentId_;
}

void LogConfigResponse::setDeploymentId(const std::string& value)
{
    deploymentId_ = value;
    deploymentIdIsSet_ = true;
}

bool LogConfigResponse::deploymentIdIsSet() const
{
    return deploymentIdIsSet_;
}

void LogConfigResponse::unsetdeploymentId()
{
    deploymentIdIsSet_ = false;
}

std::string LogConfigResponse::getFailureReason() const
{
    return failureReason_;
}

void LogConfigResponse::setFailureReason(const std::string& value)
{
    failureReason_ = value;
    failureReasonIsSet_ = true;
}

bool LogConfigResponse::failureReasonIsSet() const
{
    return failureReasonIsSet_;
}

void LogConfigResponse::unsetfailureReason()
{
    failureReasonIsSet_ = false;
}

}
}
}
}
}


