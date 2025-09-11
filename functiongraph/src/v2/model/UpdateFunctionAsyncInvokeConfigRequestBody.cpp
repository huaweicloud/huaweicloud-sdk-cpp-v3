

#include "huaweicloud/functiongraph/v2/model/UpdateFunctionAsyncInvokeConfigRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




UpdateFunctionAsyncInvokeConfigRequestBody::UpdateFunctionAsyncInvokeConfigRequestBody()
{
    maxAsyncEventAgeInSeconds_ = 0;
    maxAsyncEventAgeInSecondsIsSet_ = false;
    maxAsyncRetryAttempts_ = 0;
    maxAsyncRetryAttemptsIsSet_ = false;
    destinationConfigIsSet_ = false;
    enableAsyncStatusLog_ = false;
    enableAsyncStatusLogIsSet_ = false;
    logGroupId_ = "";
    logGroupIdIsSet_ = false;
    logStreamId_ = "";
    logStreamIdIsSet_ = false;
    logGroupName_ = "";
    logGroupNameIsSet_ = false;
    logStreamName_ = "";
    logStreamNameIsSet_ = false;
}

UpdateFunctionAsyncInvokeConfigRequestBody::~UpdateFunctionAsyncInvokeConfigRequestBody() = default;

void UpdateFunctionAsyncInvokeConfigRequestBody::validate()
{
}

web::json::value UpdateFunctionAsyncInvokeConfigRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(maxAsyncEventAgeInSecondsIsSet_) {
        val[utility::conversions::to_string_t("max_async_event_age_in_seconds")] = ModelBase::toJson(maxAsyncEventAgeInSeconds_);
    }
    if(maxAsyncRetryAttemptsIsSet_) {
        val[utility::conversions::to_string_t("max_async_retry_attempts")] = ModelBase::toJson(maxAsyncRetryAttempts_);
    }
    if(destinationConfigIsSet_) {
        val[utility::conversions::to_string_t("destination_config")] = ModelBase::toJson(destinationConfig_);
    }
    if(enableAsyncStatusLogIsSet_) {
        val[utility::conversions::to_string_t("enable_async_status_log")] = ModelBase::toJson(enableAsyncStatusLog_);
    }
    if(logGroupIdIsSet_) {
        val[utility::conversions::to_string_t("log_group_id")] = ModelBase::toJson(logGroupId_);
    }
    if(logStreamIdIsSet_) {
        val[utility::conversions::to_string_t("log_stream_id")] = ModelBase::toJson(logStreamId_);
    }
    if(logGroupNameIsSet_) {
        val[utility::conversions::to_string_t("log_group_name")] = ModelBase::toJson(logGroupName_);
    }
    if(logStreamNameIsSet_) {
        val[utility::conversions::to_string_t("log_stream_name")] = ModelBase::toJson(logStreamName_);
    }

    return val;
}
bool UpdateFunctionAsyncInvokeConfigRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("max_async_event_age_in_seconds"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("max_async_event_age_in_seconds"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxAsyncEventAgeInSeconds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("max_async_retry_attempts"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("max_async_retry_attempts"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxAsyncRetryAttempts(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("destination_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("destination_config"));
        if(!fieldValue.is_null())
        {
            FuncAsyncDestinationConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDestinationConfig(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enable_async_status_log"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enable_async_status_log"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnableAsyncStatusLog(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("log_group_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_group_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogGroupName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("log_stream_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_stream_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogStreamName(refVal);
        }
    }
    return ok;
}


int32_t UpdateFunctionAsyncInvokeConfigRequestBody::getMaxAsyncEventAgeInSeconds() const
{
    return maxAsyncEventAgeInSeconds_;
}

void UpdateFunctionAsyncInvokeConfigRequestBody::setMaxAsyncEventAgeInSeconds(int32_t value)
{
    maxAsyncEventAgeInSeconds_ = value;
    maxAsyncEventAgeInSecondsIsSet_ = true;
}

bool UpdateFunctionAsyncInvokeConfigRequestBody::maxAsyncEventAgeInSecondsIsSet() const
{
    return maxAsyncEventAgeInSecondsIsSet_;
}

void UpdateFunctionAsyncInvokeConfigRequestBody::unsetmaxAsyncEventAgeInSeconds()
{
    maxAsyncEventAgeInSecondsIsSet_ = false;
}

int32_t UpdateFunctionAsyncInvokeConfigRequestBody::getMaxAsyncRetryAttempts() const
{
    return maxAsyncRetryAttempts_;
}

void UpdateFunctionAsyncInvokeConfigRequestBody::setMaxAsyncRetryAttempts(int32_t value)
{
    maxAsyncRetryAttempts_ = value;
    maxAsyncRetryAttemptsIsSet_ = true;
}

bool UpdateFunctionAsyncInvokeConfigRequestBody::maxAsyncRetryAttemptsIsSet() const
{
    return maxAsyncRetryAttemptsIsSet_;
}

void UpdateFunctionAsyncInvokeConfigRequestBody::unsetmaxAsyncRetryAttempts()
{
    maxAsyncRetryAttemptsIsSet_ = false;
}

FuncAsyncDestinationConfig UpdateFunctionAsyncInvokeConfigRequestBody::getDestinationConfig() const
{
    return destinationConfig_;
}

void UpdateFunctionAsyncInvokeConfigRequestBody::setDestinationConfig(const FuncAsyncDestinationConfig& value)
{
    destinationConfig_ = value;
    destinationConfigIsSet_ = true;
}

bool UpdateFunctionAsyncInvokeConfigRequestBody::destinationConfigIsSet() const
{
    return destinationConfigIsSet_;
}

void UpdateFunctionAsyncInvokeConfigRequestBody::unsetdestinationConfig()
{
    destinationConfigIsSet_ = false;
}

bool UpdateFunctionAsyncInvokeConfigRequestBody::isEnableAsyncStatusLog() const
{
    return enableAsyncStatusLog_;
}

void UpdateFunctionAsyncInvokeConfigRequestBody::setEnableAsyncStatusLog(bool value)
{
    enableAsyncStatusLog_ = value;
    enableAsyncStatusLogIsSet_ = true;
}

bool UpdateFunctionAsyncInvokeConfigRequestBody::enableAsyncStatusLogIsSet() const
{
    return enableAsyncStatusLogIsSet_;
}

void UpdateFunctionAsyncInvokeConfigRequestBody::unsetenableAsyncStatusLog()
{
    enableAsyncStatusLogIsSet_ = false;
}

std::string UpdateFunctionAsyncInvokeConfigRequestBody::getLogGroupId() const
{
    return logGroupId_;
}

void UpdateFunctionAsyncInvokeConfigRequestBody::setLogGroupId(const std::string& value)
{
    logGroupId_ = value;
    logGroupIdIsSet_ = true;
}

bool UpdateFunctionAsyncInvokeConfigRequestBody::logGroupIdIsSet() const
{
    return logGroupIdIsSet_;
}

void UpdateFunctionAsyncInvokeConfigRequestBody::unsetlogGroupId()
{
    logGroupIdIsSet_ = false;
}

std::string UpdateFunctionAsyncInvokeConfigRequestBody::getLogStreamId() const
{
    return logStreamId_;
}

void UpdateFunctionAsyncInvokeConfigRequestBody::setLogStreamId(const std::string& value)
{
    logStreamId_ = value;
    logStreamIdIsSet_ = true;
}

bool UpdateFunctionAsyncInvokeConfigRequestBody::logStreamIdIsSet() const
{
    return logStreamIdIsSet_;
}

void UpdateFunctionAsyncInvokeConfigRequestBody::unsetlogStreamId()
{
    logStreamIdIsSet_ = false;
}

std::string UpdateFunctionAsyncInvokeConfigRequestBody::getLogGroupName() const
{
    return logGroupName_;
}

void UpdateFunctionAsyncInvokeConfigRequestBody::setLogGroupName(const std::string& value)
{
    logGroupName_ = value;
    logGroupNameIsSet_ = true;
}

bool UpdateFunctionAsyncInvokeConfigRequestBody::logGroupNameIsSet() const
{
    return logGroupNameIsSet_;
}

void UpdateFunctionAsyncInvokeConfigRequestBody::unsetlogGroupName()
{
    logGroupNameIsSet_ = false;
}

std::string UpdateFunctionAsyncInvokeConfigRequestBody::getLogStreamName() const
{
    return logStreamName_;
}

void UpdateFunctionAsyncInvokeConfigRequestBody::setLogStreamName(const std::string& value)
{
    logStreamName_ = value;
    logStreamNameIsSet_ = true;
}

bool UpdateFunctionAsyncInvokeConfigRequestBody::logStreamNameIsSet() const
{
    return logStreamNameIsSet_;
}

void UpdateFunctionAsyncInvokeConfigRequestBody::unsetlogStreamName()
{
    logStreamNameIsSet_ = false;
}

}
}
}
}
}


