

#include "huaweicloud/rds/v3/model/ShowReplayDelayStatusResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ShowReplayDelayStatusResponse::ShowReplayDelayStatusResponse()
{
    curDelayTimeMills_ = 0;
    curDelayTimeMillsIsSet_ = false;
    realDelayTimeMills_ = 0;
    realDelayTimeMillsIsSet_ = false;
    curLogReplayPaused_ = false;
    curLogReplayPausedIsSet_ = false;
    latestReceiveLog_ = "";
    latestReceiveLogIsSet_ = false;
    latestReplayLog_ = "";
    latestReplayLogIsSet_ = false;
}

ShowReplayDelayStatusResponse::~ShowReplayDelayStatusResponse() = default;

void ShowReplayDelayStatusResponse::validate()
{
}

web::json::value ShowReplayDelayStatusResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(curDelayTimeMillsIsSet_) {
        val[utility::conversions::to_string_t("cur_delay_time_mills")] = ModelBase::toJson(curDelayTimeMills_);
    }
    if(realDelayTimeMillsIsSet_) {
        val[utility::conversions::to_string_t("real_delay_time_mills")] = ModelBase::toJson(realDelayTimeMills_);
    }
    if(curLogReplayPausedIsSet_) {
        val[utility::conversions::to_string_t("cur_log_replay_paused")] = ModelBase::toJson(curLogReplayPaused_);
    }
    if(latestReceiveLogIsSet_) {
        val[utility::conversions::to_string_t("latest_receive_log")] = ModelBase::toJson(latestReceiveLog_);
    }
    if(latestReplayLogIsSet_) {
        val[utility::conversions::to_string_t("latest_replay_log")] = ModelBase::toJson(latestReplayLog_);
    }

    return val;
}
bool ShowReplayDelayStatusResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("cur_delay_time_mills"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cur_delay_time_mills"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCurDelayTimeMills(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("real_delay_time_mills"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("real_delay_time_mills"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRealDelayTimeMills(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cur_log_replay_paused"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cur_log_replay_paused"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCurLogReplayPaused(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("latest_receive_log"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("latest_receive_log"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLatestReceiveLog(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("latest_replay_log"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("latest_replay_log"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLatestReplayLog(refVal);
        }
    }
    return ok;
}


int32_t ShowReplayDelayStatusResponse::getCurDelayTimeMills() const
{
    return curDelayTimeMills_;
}

void ShowReplayDelayStatusResponse::setCurDelayTimeMills(int32_t value)
{
    curDelayTimeMills_ = value;
    curDelayTimeMillsIsSet_ = true;
}

bool ShowReplayDelayStatusResponse::curDelayTimeMillsIsSet() const
{
    return curDelayTimeMillsIsSet_;
}

void ShowReplayDelayStatusResponse::unsetcurDelayTimeMills()
{
    curDelayTimeMillsIsSet_ = false;
}

int32_t ShowReplayDelayStatusResponse::getRealDelayTimeMills() const
{
    return realDelayTimeMills_;
}

void ShowReplayDelayStatusResponse::setRealDelayTimeMills(int32_t value)
{
    realDelayTimeMills_ = value;
    realDelayTimeMillsIsSet_ = true;
}

bool ShowReplayDelayStatusResponse::realDelayTimeMillsIsSet() const
{
    return realDelayTimeMillsIsSet_;
}

void ShowReplayDelayStatusResponse::unsetrealDelayTimeMills()
{
    realDelayTimeMillsIsSet_ = false;
}

bool ShowReplayDelayStatusResponse::isCurLogReplayPaused() const
{
    return curLogReplayPaused_;
}

void ShowReplayDelayStatusResponse::setCurLogReplayPaused(bool value)
{
    curLogReplayPaused_ = value;
    curLogReplayPausedIsSet_ = true;
}

bool ShowReplayDelayStatusResponse::curLogReplayPausedIsSet() const
{
    return curLogReplayPausedIsSet_;
}

void ShowReplayDelayStatusResponse::unsetcurLogReplayPaused()
{
    curLogReplayPausedIsSet_ = false;
}

std::string ShowReplayDelayStatusResponse::getLatestReceiveLog() const
{
    return latestReceiveLog_;
}

void ShowReplayDelayStatusResponse::setLatestReceiveLog(const std::string& value)
{
    latestReceiveLog_ = value;
    latestReceiveLogIsSet_ = true;
}

bool ShowReplayDelayStatusResponse::latestReceiveLogIsSet() const
{
    return latestReceiveLogIsSet_;
}

void ShowReplayDelayStatusResponse::unsetlatestReceiveLog()
{
    latestReceiveLogIsSet_ = false;
}

std::string ShowReplayDelayStatusResponse::getLatestReplayLog() const
{
    return latestReplayLog_;
}

void ShowReplayDelayStatusResponse::setLatestReplayLog(const std::string& value)
{
    latestReplayLog_ = value;
    latestReplayLogIsSet_ = true;
}

bool ShowReplayDelayStatusResponse::latestReplayLogIsSet() const
{
    return latestReplayLogIsSet_;
}

void ShowReplayDelayStatusResponse::unsetlatestReplayLog()
{
    latestReplayLogIsSet_ = false;
}

}
}
}
}
}


