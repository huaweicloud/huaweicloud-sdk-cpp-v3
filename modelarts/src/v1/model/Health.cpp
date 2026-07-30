

#include "huaweicloud/modelarts/v1/model/Health.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




Health::Health()
{
    checkMethod_ = "";
    checkMethodIsSet_ = false;
    cmd_ = "";
    cmdIsSet_ = false;
    url_ = "";
    urlIsSet_ = false;
    protocol_ = "";
    protocolIsSet_ = false;
    initialDelaySeconds_ = 0;
    initialDelaySecondsIsSet_ = false;
    timeoutSeconds_ = 0;
    timeoutSecondsIsSet_ = false;
    periodSeconds_ = 0;
    periodSecondsIsSet_ = false;
    failureThreshold_ = 0;
    failureThresholdIsSet_ = false;
}

Health::~Health() = default;

void Health::validate()
{
}

web::json::value Health::toJson() const
{
    web::json::value val = web::json::value::object();

    if(checkMethodIsSet_) {
        val[utility::conversions::to_string_t("check_method")] = ModelBase::toJson(checkMethod_);
    }
    if(cmdIsSet_) {
        val[utility::conversions::to_string_t("cmd")] = ModelBase::toJson(cmd_);
    }
    if(urlIsSet_) {
        val[utility::conversions::to_string_t("url")] = ModelBase::toJson(url_);
    }
    if(protocolIsSet_) {
        val[utility::conversions::to_string_t("protocol")] = ModelBase::toJson(protocol_);
    }
    if(initialDelaySecondsIsSet_) {
        val[utility::conversions::to_string_t("initial_delay_seconds")] = ModelBase::toJson(initialDelaySeconds_);
    }
    if(timeoutSecondsIsSet_) {
        val[utility::conversions::to_string_t("timeout_seconds")] = ModelBase::toJson(timeoutSeconds_);
    }
    if(periodSecondsIsSet_) {
        val[utility::conversions::to_string_t("period_seconds")] = ModelBase::toJson(periodSeconds_);
    }
    if(failureThresholdIsSet_) {
        val[utility::conversions::to_string_t("failure_threshold")] = ModelBase::toJson(failureThreshold_);
    }

    return val;
}
bool Health::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("check_method"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("check_method"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCheckMethod(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cmd"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cmd"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCmd(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("protocol"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("protocol"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProtocol(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("initial_delay_seconds"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("initial_delay_seconds"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInitialDelaySeconds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("timeout_seconds"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("timeout_seconds"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTimeoutSeconds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("period_seconds"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("period_seconds"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPeriodSeconds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("failure_threshold"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("failure_threshold"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFailureThreshold(refVal);
        }
    }
    return ok;
}


std::string Health::getCheckMethod() const
{
    return checkMethod_;
}

void Health::setCheckMethod(const std::string& value)
{
    checkMethod_ = value;
    checkMethodIsSet_ = true;
}

bool Health::checkMethodIsSet() const
{
    return checkMethodIsSet_;
}

void Health::unsetcheckMethod()
{
    checkMethodIsSet_ = false;
}

std::string Health::getCmd() const
{
    return cmd_;
}

void Health::setCmd(const std::string& value)
{
    cmd_ = value;
    cmdIsSet_ = true;
}

bool Health::cmdIsSet() const
{
    return cmdIsSet_;
}

void Health::unsetcmd()
{
    cmdIsSet_ = false;
}

std::string Health::getUrl() const
{
    return url_;
}

void Health::setUrl(const std::string& value)
{
    url_ = value;
    urlIsSet_ = true;
}

bool Health::urlIsSet() const
{
    return urlIsSet_;
}

void Health::unseturl()
{
    urlIsSet_ = false;
}

std::string Health::getProtocol() const
{
    return protocol_;
}

void Health::setProtocol(const std::string& value)
{
    protocol_ = value;
    protocolIsSet_ = true;
}

bool Health::protocolIsSet() const
{
    return protocolIsSet_;
}

void Health::unsetprotocol()
{
    protocolIsSet_ = false;
}

int32_t Health::getInitialDelaySeconds() const
{
    return initialDelaySeconds_;
}

void Health::setInitialDelaySeconds(int32_t value)
{
    initialDelaySeconds_ = value;
    initialDelaySecondsIsSet_ = true;
}

bool Health::initialDelaySecondsIsSet() const
{
    return initialDelaySecondsIsSet_;
}

void Health::unsetinitialDelaySeconds()
{
    initialDelaySecondsIsSet_ = false;
}

int32_t Health::getTimeoutSeconds() const
{
    return timeoutSeconds_;
}

void Health::setTimeoutSeconds(int32_t value)
{
    timeoutSeconds_ = value;
    timeoutSecondsIsSet_ = true;
}

bool Health::timeoutSecondsIsSet() const
{
    return timeoutSecondsIsSet_;
}

void Health::unsettimeoutSeconds()
{
    timeoutSecondsIsSet_ = false;
}

int32_t Health::getPeriodSeconds() const
{
    return periodSeconds_;
}

void Health::setPeriodSeconds(int32_t value)
{
    periodSeconds_ = value;
    periodSecondsIsSet_ = true;
}

bool Health::periodSecondsIsSet() const
{
    return periodSecondsIsSet_;
}

void Health::unsetperiodSeconds()
{
    periodSecondsIsSet_ = false;
}

int32_t Health::getFailureThreshold() const
{
    return failureThreshold_;
}

void Health::setFailureThreshold(int32_t value)
{
    failureThreshold_ = value;
    failureThresholdIsSet_ = true;
}

bool Health::failureThresholdIsSet() const
{
    return failureThresholdIsSet_;
}

void Health::unsetfailureThreshold()
{
    failureThresholdIsSet_ = false;
}

}
}
}
}
}


