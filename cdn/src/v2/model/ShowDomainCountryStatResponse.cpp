

#include "huaweicloud/cdn/v2/model/ShowDomainCountryStatResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




ShowDomainCountryStatResponse::ShowDomainCountryStatResponse()
{
    action_ = "";
    actionIsSet_ = false;
    startTime_ = 0L;
    startTimeIsSet_ = false;
    endTime_ = 0L;
    endTimeIsSet_ = false;
    statType_ = "";
    statTypeIsSet_ = false;
    resultIsSet_ = false;
}

ShowDomainCountryStatResponse::~ShowDomainCountryStatResponse() = default;

void ShowDomainCountryStatResponse::validate()
{
}

web::json::value ShowDomainCountryStatResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(actionIsSet_) {
        val[utility::conversions::to_string_t("action")] = ModelBase::toJson(action_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(statTypeIsSet_) {
        val[utility::conversions::to_string_t("stat_type")] = ModelBase::toJson(statType_);
    }
    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool ShowDomainCountryStatResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("action"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("action"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAction(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("stat_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("stat_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, Object> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


std::string ShowDomainCountryStatResponse::getAction() const
{
    return action_;
}

void ShowDomainCountryStatResponse::setAction(const std::string& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool ShowDomainCountryStatResponse::actionIsSet() const
{
    return actionIsSet_;
}

void ShowDomainCountryStatResponse::unsetaction()
{
    actionIsSet_ = false;
}

int64_t ShowDomainCountryStatResponse::getStartTime() const
{
    return startTime_;
}

void ShowDomainCountryStatResponse::setStartTime(int64_t value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ShowDomainCountryStatResponse::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ShowDomainCountryStatResponse::unsetstartTime()
{
    startTimeIsSet_ = false;
}

int64_t ShowDomainCountryStatResponse::getEndTime() const
{
    return endTime_;
}

void ShowDomainCountryStatResponse::setEndTime(int64_t value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ShowDomainCountryStatResponse::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ShowDomainCountryStatResponse::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string ShowDomainCountryStatResponse::getStatType() const
{
    return statType_;
}

void ShowDomainCountryStatResponse::setStatType(const std::string& value)
{
    statType_ = value;
    statTypeIsSet_ = true;
}

bool ShowDomainCountryStatResponse::statTypeIsSet() const
{
    return statTypeIsSet_;
}

void ShowDomainCountryStatResponse::unsetstatType()
{
    statTypeIsSet_ = false;
}

std::map<std::string, Object>& ShowDomainCountryStatResponse::getResult()
{
    return result_;
}

void ShowDomainCountryStatResponse::setResult(const std::map<std::string, Object>& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ShowDomainCountryStatResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ShowDomainCountryStatResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


