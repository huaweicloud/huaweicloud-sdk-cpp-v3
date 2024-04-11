

#include "huaweicloud/drs/v5/model/ReplayShardStaticsResp.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ReplayShardStaticsResp::ReplayShardStaticsResp()
{
    time_ = "";
    timeIsSet_ = false;
    total_ = 0L;
    totalIsSet_ = false;
    finish_ = 0L;
    finishIsSet_ = false;
    abnormal_ = 0L;
    abnormalIsSet_ = false;
    slow_ = 0L;
    slowIsSet_ = false;
}

ReplayShardStaticsResp::~ReplayShardStaticsResp() = default;

void ReplayShardStaticsResp::validate()
{
}

web::json::value ReplayShardStaticsResp::toJson() const
{
    web::json::value val = web::json::value::object();

    if(timeIsSet_) {
        val[utility::conversions::to_string_t("time")] = ModelBase::toJson(time_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(finishIsSet_) {
        val[utility::conversions::to_string_t("finish")] = ModelBase::toJson(finish_);
    }
    if(abnormalIsSet_) {
        val[utility::conversions::to_string_t("abnormal")] = ModelBase::toJson(abnormal_);
    }
    if(slowIsSet_) {
        val[utility::conversions::to_string_t("slow")] = ModelBase::toJson(slow_);
    }

    return val;
}
bool ReplayShardStaticsResp::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("finish"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("finish"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFinish(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("abnormal"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("abnormal"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAbnormal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("slow"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("slow"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSlow(refVal);
        }
    }
    return ok;
}


std::string ReplayShardStaticsResp::getTime() const
{
    return time_;
}

void ReplayShardStaticsResp::setTime(const std::string& value)
{
    time_ = value;
    timeIsSet_ = true;
}

bool ReplayShardStaticsResp::timeIsSet() const
{
    return timeIsSet_;
}

void ReplayShardStaticsResp::unsettime()
{
    timeIsSet_ = false;
}

int64_t ReplayShardStaticsResp::getTotal() const
{
    return total_;
}

void ReplayShardStaticsResp::setTotal(int64_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ReplayShardStaticsResp::totalIsSet() const
{
    return totalIsSet_;
}

void ReplayShardStaticsResp::unsettotal()
{
    totalIsSet_ = false;
}

int64_t ReplayShardStaticsResp::getFinish() const
{
    return finish_;
}

void ReplayShardStaticsResp::setFinish(int64_t value)
{
    finish_ = value;
    finishIsSet_ = true;
}

bool ReplayShardStaticsResp::finishIsSet() const
{
    return finishIsSet_;
}

void ReplayShardStaticsResp::unsetfinish()
{
    finishIsSet_ = false;
}

int64_t ReplayShardStaticsResp::getAbnormal() const
{
    return abnormal_;
}

void ReplayShardStaticsResp::setAbnormal(int64_t value)
{
    abnormal_ = value;
    abnormalIsSet_ = true;
}

bool ReplayShardStaticsResp::abnormalIsSet() const
{
    return abnormalIsSet_;
}

void ReplayShardStaticsResp::unsetabnormal()
{
    abnormalIsSet_ = false;
}

int64_t ReplayShardStaticsResp::getSlow() const
{
    return slow_;
}

void ReplayShardStaticsResp::setSlow(int64_t value)
{
    slow_ = value;
    slowIsSet_ = true;
}

bool ReplayShardStaticsResp::slowIsSet() const
{
    return slowIsSet_;
}

void ReplayShardStaticsResp::unsetslow()
{
    slowIsSet_ = false;
}

}
}
}
}
}


