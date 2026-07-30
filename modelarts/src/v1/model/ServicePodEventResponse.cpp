

#include "huaweicloud/modelarts/v1/model/ServicePodEventResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ServicePodEventResponse::ServicePodEventResponse()
{
    count_ = 0;
    countIsSet_ = false;
    firstTimestamp_ = utility::datetime();
    firstTimestampIsSet_ = false;
    lastTimestamp_ = utility::datetime();
    lastTimestampIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
    reason_ = "";
    reasonIsSet_ = false;
    reportingComponent_ = "";
    reportingComponentIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
}

ServicePodEventResponse::~ServicePodEventResponse() = default;

void ServicePodEventResponse::validate()
{
}

web::json::value ServicePodEventResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }
    if(firstTimestampIsSet_) {
        val[utility::conversions::to_string_t("first_timestamp")] = ModelBase::toJson(firstTimestamp_);
    }
    if(lastTimestampIsSet_) {
        val[utility::conversions::to_string_t("last_timestamp")] = ModelBase::toJson(lastTimestamp_);
    }
    if(messageIsSet_) {
        val[utility::conversions::to_string_t("message")] = ModelBase::toJson(message_);
    }
    if(reasonIsSet_) {
        val[utility::conversions::to_string_t("reason")] = ModelBase::toJson(reason_);
    }
    if(reportingComponentIsSet_) {
        val[utility::conversions::to_string_t("reporting_component")] = ModelBase::toJson(reportingComponent_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }

    return val;
}
bool ServicePodEventResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("first_timestamp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("first_timestamp"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFirstTimestamp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("last_timestamp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("last_timestamp"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastTimestamp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("message"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("message"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMessage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("reason"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("reason"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReason(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("reporting_component"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("reporting_component"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReportingComponent(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    return ok;
}


int32_t ServicePodEventResponse::getCount() const
{
    return count_;
}

void ServicePodEventResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ServicePodEventResponse::countIsSet() const
{
    return countIsSet_;
}

void ServicePodEventResponse::unsetcount()
{
    countIsSet_ = false;
}

utility::datetime ServicePodEventResponse::getFirstTimestamp() const
{
    return firstTimestamp_;
}

void ServicePodEventResponse::setFirstTimestamp(const utility::datetime& value)
{
    firstTimestamp_ = value;
    firstTimestampIsSet_ = true;
}

bool ServicePodEventResponse::firstTimestampIsSet() const
{
    return firstTimestampIsSet_;
}

void ServicePodEventResponse::unsetfirstTimestamp()
{
    firstTimestampIsSet_ = false;
}

utility::datetime ServicePodEventResponse::getLastTimestamp() const
{
    return lastTimestamp_;
}

void ServicePodEventResponse::setLastTimestamp(const utility::datetime& value)
{
    lastTimestamp_ = value;
    lastTimestampIsSet_ = true;
}

bool ServicePodEventResponse::lastTimestampIsSet() const
{
    return lastTimestampIsSet_;
}

void ServicePodEventResponse::unsetlastTimestamp()
{
    lastTimestampIsSet_ = false;
}

std::string ServicePodEventResponse::getMessage() const
{
    return message_;
}

void ServicePodEventResponse::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool ServicePodEventResponse::messageIsSet() const
{
    return messageIsSet_;
}

void ServicePodEventResponse::unsetmessage()
{
    messageIsSet_ = false;
}

std::string ServicePodEventResponse::getReason() const
{
    return reason_;
}

void ServicePodEventResponse::setReason(const std::string& value)
{
    reason_ = value;
    reasonIsSet_ = true;
}

bool ServicePodEventResponse::reasonIsSet() const
{
    return reasonIsSet_;
}

void ServicePodEventResponse::unsetreason()
{
    reasonIsSet_ = false;
}

std::string ServicePodEventResponse::getReportingComponent() const
{
    return reportingComponent_;
}

void ServicePodEventResponse::setReportingComponent(const std::string& value)
{
    reportingComponent_ = value;
    reportingComponentIsSet_ = true;
}

bool ServicePodEventResponse::reportingComponentIsSet() const
{
    return reportingComponentIsSet_;
}

void ServicePodEventResponse::unsetreportingComponent()
{
    reportingComponentIsSet_ = false;
}

std::string ServicePodEventResponse::getType() const
{
    return type_;
}

void ServicePodEventResponse::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ServicePodEventResponse::typeIsSet() const
{
    return typeIsSet_;
}

void ServicePodEventResponse::unsettype()
{
    typeIsSet_ = false;
}

}
}
}
}
}


