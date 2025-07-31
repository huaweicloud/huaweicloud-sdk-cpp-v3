

#include "huaweicloud/drs/v5/model/QueryCompareJobProgressResp_incre_info.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




QueryCompareJobProgressResp_incre_info::QueryCompareJobProgressResp_incre_info()
{
    delay_ = 0.0f;
    delayIsSet_ = false;
    srcSpeed_ = "";
    srcSpeedIsSet_ = false;
    rps_ = 0;
    rpsIsSet_ = false;
    logPoint_ = "";
    logPointIsSet_ = false;
    recheckEntities_ = 0;
    recheckEntitiesIsSet_ = false;
}

QueryCompareJobProgressResp_incre_info::~QueryCompareJobProgressResp_incre_info() = default;

void QueryCompareJobProgressResp_incre_info::validate()
{
}

web::json::value QueryCompareJobProgressResp_incre_info::toJson() const
{
    web::json::value val = web::json::value::object();

    if(delayIsSet_) {
        val[utility::conversions::to_string_t("delay")] = ModelBase::toJson(delay_);
    }
    if(srcSpeedIsSet_) {
        val[utility::conversions::to_string_t("src_speed")] = ModelBase::toJson(srcSpeed_);
    }
    if(rpsIsSet_) {
        val[utility::conversions::to_string_t("rps")] = ModelBase::toJson(rps_);
    }
    if(logPointIsSet_) {
        val[utility::conversions::to_string_t("log_point")] = ModelBase::toJson(logPoint_);
    }
    if(recheckEntitiesIsSet_) {
        val[utility::conversions::to_string_t("recheck_entities")] = ModelBase::toJson(recheckEntities_);
    }

    return val;
}
bool QueryCompareJobProgressResp_incre_info::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("delay"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("delay"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDelay(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("src_speed"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("src_speed"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSrcSpeed(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rps"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rps"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRps(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("log_point"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_point"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogPoint(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("recheck_entities"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("recheck_entities"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRecheckEntities(refVal);
        }
    }
    return ok;
}


float QueryCompareJobProgressResp_incre_info::getDelay() const
{
    return delay_;
}

void QueryCompareJobProgressResp_incre_info::setDelay(float value)
{
    delay_ = value;
    delayIsSet_ = true;
}

bool QueryCompareJobProgressResp_incre_info::delayIsSet() const
{
    return delayIsSet_;
}

void QueryCompareJobProgressResp_incre_info::unsetdelay()
{
    delayIsSet_ = false;
}

std::string QueryCompareJobProgressResp_incre_info::getSrcSpeed() const
{
    return srcSpeed_;
}

void QueryCompareJobProgressResp_incre_info::setSrcSpeed(const std::string& value)
{
    srcSpeed_ = value;
    srcSpeedIsSet_ = true;
}

bool QueryCompareJobProgressResp_incre_info::srcSpeedIsSet() const
{
    return srcSpeedIsSet_;
}

void QueryCompareJobProgressResp_incre_info::unsetsrcSpeed()
{
    srcSpeedIsSet_ = false;
}

int32_t QueryCompareJobProgressResp_incre_info::getRps() const
{
    return rps_;
}

void QueryCompareJobProgressResp_incre_info::setRps(int32_t value)
{
    rps_ = value;
    rpsIsSet_ = true;
}

bool QueryCompareJobProgressResp_incre_info::rpsIsSet() const
{
    return rpsIsSet_;
}

void QueryCompareJobProgressResp_incre_info::unsetrps()
{
    rpsIsSet_ = false;
}

std::string QueryCompareJobProgressResp_incre_info::getLogPoint() const
{
    return logPoint_;
}

void QueryCompareJobProgressResp_incre_info::setLogPoint(const std::string& value)
{
    logPoint_ = value;
    logPointIsSet_ = true;
}

bool QueryCompareJobProgressResp_incre_info::logPointIsSet() const
{
    return logPointIsSet_;
}

void QueryCompareJobProgressResp_incre_info::unsetlogPoint()
{
    logPointIsSet_ = false;
}

int32_t QueryCompareJobProgressResp_incre_info::getRecheckEntities() const
{
    return recheckEntities_;
}

void QueryCompareJobProgressResp_incre_info::setRecheckEntities(int32_t value)
{
    recheckEntities_ = value;
    recheckEntitiesIsSet_ = true;
}

bool QueryCompareJobProgressResp_incre_info::recheckEntitiesIsSet() const
{
    return recheckEntitiesIsSet_;
}

void QueryCompareJobProgressResp_incre_info::unsetrecheckEntities()
{
    recheckEntitiesIsSet_ = false;
}

}
}
}
}
}


