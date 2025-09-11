

#include "huaweicloud/dbss/v1/model/SessionStatisticsBean.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




SessionStatisticsBean::SessionStatisticsBean()
{
    activeSessionNum_ = 0L;
    activeSessionNumIsSet_ = false;
    failSessionNum_ = 0L;
    failSessionNumIsSet_ = false;
    newSessionNum_ = 0L;
    newSessionNumIsSet_ = false;
    period_ = "";
    periodIsSet_ = false;
}

SessionStatisticsBean::~SessionStatisticsBean() = default;

void SessionStatisticsBean::validate()
{
}

web::json::value SessionStatisticsBean::toJson() const
{
    web::json::value val = web::json::value::object();

    if(activeSessionNumIsSet_) {
        val[utility::conversions::to_string_t("active_session_num")] = ModelBase::toJson(activeSessionNum_);
    }
    if(failSessionNumIsSet_) {
        val[utility::conversions::to_string_t("fail_session_num")] = ModelBase::toJson(failSessionNum_);
    }
    if(newSessionNumIsSet_) {
        val[utility::conversions::to_string_t("new_session_num")] = ModelBase::toJson(newSessionNum_);
    }
    if(periodIsSet_) {
        val[utility::conversions::to_string_t("period")] = ModelBase::toJson(period_);
    }

    return val;
}
bool SessionStatisticsBean::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("active_session_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("active_session_num"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActiveSessionNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fail_session_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fail_session_num"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFailSessionNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("new_session_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("new_session_num"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNewSessionNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("period"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("period"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPeriod(refVal);
        }
    }
    return ok;
}


int64_t SessionStatisticsBean::getActiveSessionNum() const
{
    return activeSessionNum_;
}

void SessionStatisticsBean::setActiveSessionNum(int64_t value)
{
    activeSessionNum_ = value;
    activeSessionNumIsSet_ = true;
}

bool SessionStatisticsBean::activeSessionNumIsSet() const
{
    return activeSessionNumIsSet_;
}

void SessionStatisticsBean::unsetactiveSessionNum()
{
    activeSessionNumIsSet_ = false;
}

int64_t SessionStatisticsBean::getFailSessionNum() const
{
    return failSessionNum_;
}

void SessionStatisticsBean::setFailSessionNum(int64_t value)
{
    failSessionNum_ = value;
    failSessionNumIsSet_ = true;
}

bool SessionStatisticsBean::failSessionNumIsSet() const
{
    return failSessionNumIsSet_;
}

void SessionStatisticsBean::unsetfailSessionNum()
{
    failSessionNumIsSet_ = false;
}

int64_t SessionStatisticsBean::getNewSessionNum() const
{
    return newSessionNum_;
}

void SessionStatisticsBean::setNewSessionNum(int64_t value)
{
    newSessionNum_ = value;
    newSessionNumIsSet_ = true;
}

bool SessionStatisticsBean::newSessionNumIsSet() const
{
    return newSessionNumIsSet_;
}

void SessionStatisticsBean::unsetnewSessionNum()
{
    newSessionNumIsSet_ = false;
}

std::string SessionStatisticsBean::getPeriod() const
{
    return period_;
}

void SessionStatisticsBean::setPeriod(const std::string& value)
{
    period_ = value;
    periodIsSet_ = true;
}

bool SessionStatisticsBean::periodIsSet() const
{
    return periodIsSet_;
}

void SessionStatisticsBean::unsetperiod()
{
    periodIsSet_ = false;
}

}
}
}
}
}


