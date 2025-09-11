

#include "huaweicloud/functiongraph/v2/model/UpdateFunctionAsyncInvokeConfigResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




UpdateFunctionAsyncInvokeConfigResponse::UpdateFunctionAsyncInvokeConfigResponse()
{
    funcUrn_ = "";
    funcUrnIsSet_ = false;
    maxAsyncEventAgeInSeconds_ = 0;
    maxAsyncEventAgeInSecondsIsSet_ = false;
    maxAsyncRetryAttempts_ = 0;
    maxAsyncRetryAttemptsIsSet_ = false;
    destinationConfigIsSet_ = false;
    createdTime_ = "";
    createdTimeIsSet_ = false;
    lastModified_ = "";
    lastModifiedIsSet_ = false;
    enableAsyncStatusLog_ = false;
    enableAsyncStatusLogIsSet_ = false;
}

UpdateFunctionAsyncInvokeConfigResponse::~UpdateFunctionAsyncInvokeConfigResponse() = default;

void UpdateFunctionAsyncInvokeConfigResponse::validate()
{
}

web::json::value UpdateFunctionAsyncInvokeConfigResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(funcUrnIsSet_) {
        val[utility::conversions::to_string_t("func_urn")] = ModelBase::toJson(funcUrn_);
    }
    if(maxAsyncEventAgeInSecondsIsSet_) {
        val[utility::conversions::to_string_t("max_async_event_age_in_seconds")] = ModelBase::toJson(maxAsyncEventAgeInSeconds_);
    }
    if(maxAsyncRetryAttemptsIsSet_) {
        val[utility::conversions::to_string_t("max_async_retry_attempts")] = ModelBase::toJson(maxAsyncRetryAttempts_);
    }
    if(destinationConfigIsSet_) {
        val[utility::conversions::to_string_t("destination_config")] = ModelBase::toJson(destinationConfig_);
    }
    if(createdTimeIsSet_) {
        val[utility::conversions::to_string_t("created_time")] = ModelBase::toJson(createdTime_);
    }
    if(lastModifiedIsSet_) {
        val[utility::conversions::to_string_t("last_modified")] = ModelBase::toJson(lastModified_);
    }
    if(enableAsyncStatusLogIsSet_) {
        val[utility::conversions::to_string_t("enable_async_status_log")] = ModelBase::toJson(enableAsyncStatusLog_);
    }

    return val;
}
bool UpdateFunctionAsyncInvokeConfigResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("func_urn"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("func_urn"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFuncUrn(refVal);
        }
    }
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
    if(val.has_field(utility::conversions::to_string_t("created_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("last_modified"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("last_modified"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastModified(refVal);
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
    return ok;
}


std::string UpdateFunctionAsyncInvokeConfigResponse::getFuncUrn() const
{
    return funcUrn_;
}

void UpdateFunctionAsyncInvokeConfigResponse::setFuncUrn(const std::string& value)
{
    funcUrn_ = value;
    funcUrnIsSet_ = true;
}

bool UpdateFunctionAsyncInvokeConfigResponse::funcUrnIsSet() const
{
    return funcUrnIsSet_;
}

void UpdateFunctionAsyncInvokeConfigResponse::unsetfuncUrn()
{
    funcUrnIsSet_ = false;
}

int32_t UpdateFunctionAsyncInvokeConfigResponse::getMaxAsyncEventAgeInSeconds() const
{
    return maxAsyncEventAgeInSeconds_;
}

void UpdateFunctionAsyncInvokeConfigResponse::setMaxAsyncEventAgeInSeconds(int32_t value)
{
    maxAsyncEventAgeInSeconds_ = value;
    maxAsyncEventAgeInSecondsIsSet_ = true;
}

bool UpdateFunctionAsyncInvokeConfigResponse::maxAsyncEventAgeInSecondsIsSet() const
{
    return maxAsyncEventAgeInSecondsIsSet_;
}

void UpdateFunctionAsyncInvokeConfigResponse::unsetmaxAsyncEventAgeInSeconds()
{
    maxAsyncEventAgeInSecondsIsSet_ = false;
}

int32_t UpdateFunctionAsyncInvokeConfigResponse::getMaxAsyncRetryAttempts() const
{
    return maxAsyncRetryAttempts_;
}

void UpdateFunctionAsyncInvokeConfigResponse::setMaxAsyncRetryAttempts(int32_t value)
{
    maxAsyncRetryAttempts_ = value;
    maxAsyncRetryAttemptsIsSet_ = true;
}

bool UpdateFunctionAsyncInvokeConfigResponse::maxAsyncRetryAttemptsIsSet() const
{
    return maxAsyncRetryAttemptsIsSet_;
}

void UpdateFunctionAsyncInvokeConfigResponse::unsetmaxAsyncRetryAttempts()
{
    maxAsyncRetryAttemptsIsSet_ = false;
}

FuncAsyncDestinationConfig UpdateFunctionAsyncInvokeConfigResponse::getDestinationConfig() const
{
    return destinationConfig_;
}

void UpdateFunctionAsyncInvokeConfigResponse::setDestinationConfig(const FuncAsyncDestinationConfig& value)
{
    destinationConfig_ = value;
    destinationConfigIsSet_ = true;
}

bool UpdateFunctionAsyncInvokeConfigResponse::destinationConfigIsSet() const
{
    return destinationConfigIsSet_;
}

void UpdateFunctionAsyncInvokeConfigResponse::unsetdestinationConfig()
{
    destinationConfigIsSet_ = false;
}

std::string UpdateFunctionAsyncInvokeConfigResponse::getCreatedTime() const
{
    return createdTime_;
}

void UpdateFunctionAsyncInvokeConfigResponse::setCreatedTime(const std::string& value)
{
    createdTime_ = value;
    createdTimeIsSet_ = true;
}

bool UpdateFunctionAsyncInvokeConfigResponse::createdTimeIsSet() const
{
    return createdTimeIsSet_;
}

void UpdateFunctionAsyncInvokeConfigResponse::unsetcreatedTime()
{
    createdTimeIsSet_ = false;
}

std::string UpdateFunctionAsyncInvokeConfigResponse::getLastModified() const
{
    return lastModified_;
}

void UpdateFunctionAsyncInvokeConfigResponse::setLastModified(const std::string& value)
{
    lastModified_ = value;
    lastModifiedIsSet_ = true;
}

bool UpdateFunctionAsyncInvokeConfigResponse::lastModifiedIsSet() const
{
    return lastModifiedIsSet_;
}

void UpdateFunctionAsyncInvokeConfigResponse::unsetlastModified()
{
    lastModifiedIsSet_ = false;
}

bool UpdateFunctionAsyncInvokeConfigResponse::isEnableAsyncStatusLog() const
{
    return enableAsyncStatusLog_;
}

void UpdateFunctionAsyncInvokeConfigResponse::setEnableAsyncStatusLog(bool value)
{
    enableAsyncStatusLog_ = value;
    enableAsyncStatusLogIsSet_ = true;
}

bool UpdateFunctionAsyncInvokeConfigResponse::enableAsyncStatusLogIsSet() const
{
    return enableAsyncStatusLogIsSet_;
}

void UpdateFunctionAsyncInvokeConfigResponse::unsetenableAsyncStatusLog()
{
    enableAsyncStatusLogIsSet_ = false;
}

}
}
}
}
}


