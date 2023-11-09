

#include "huaweicloud/tics/v1/model/ShowJobInstanceDagRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Tics {
namespace V1 {
namespace Model {




ShowJobInstanceDagRequest::ShowJobInstanceDagRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    leagueId_ = "";
    leagueIdIsSet_ = false;
    roundId_ = 0;
    roundIdIsSet_ = false;
}

ShowJobInstanceDagRequest::~ShowJobInstanceDagRequest() = default;

void ShowJobInstanceDagRequest::validate()
{
}

web::json::value ShowJobInstanceDagRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(leagueIdIsSet_) {
        val[utility::conversions::to_string_t("league_id")] = ModelBase::toJson(leagueId_);
    }
    if(roundIdIsSet_) {
        val[utility::conversions::to_string_t("round_id")] = ModelBase::toJson(roundId_);
    }

    return val;
}
bool ShowJobInstanceDagRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("league_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("league_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLeagueId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("round_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("round_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRoundId(refVal);
        }
    }
    return ok;
}


std::string ShowJobInstanceDagRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowJobInstanceDagRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowJobInstanceDagRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowJobInstanceDagRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ShowJobInstanceDagRequest::getLeagueId() const
{
    return leagueId_;
}

void ShowJobInstanceDagRequest::setLeagueId(const std::string& value)
{
    leagueId_ = value;
    leagueIdIsSet_ = true;
}

bool ShowJobInstanceDagRequest::leagueIdIsSet() const
{
    return leagueIdIsSet_;
}

void ShowJobInstanceDagRequest::unsetleagueId()
{
    leagueIdIsSet_ = false;
}

int32_t ShowJobInstanceDagRequest::getRoundId() const
{
    return roundId_;
}

void ShowJobInstanceDagRequest::setRoundId(int32_t value)
{
    roundId_ = value;
    roundIdIsSet_ = true;
}

bool ShowJobInstanceDagRequest::roundIdIsSet() const
{
    return roundIdIsSet_;
}

void ShowJobInstanceDagRequest::unsetroundId()
{
    roundIdIsSet_ = false;
}

}
}
}
}
}


