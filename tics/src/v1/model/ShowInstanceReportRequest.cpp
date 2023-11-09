

#include "huaweicloud/tics/v1/model/ShowInstanceReportRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Tics {
namespace V1 {
namespace Model {




ShowInstanceReportRequest::ShowInstanceReportRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    leagueId_ = "";
    leagueIdIsSet_ = false;
}

ShowInstanceReportRequest::~ShowInstanceReportRequest() = default;

void ShowInstanceReportRequest::validate()
{
}

web::json::value ShowInstanceReportRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(leagueIdIsSet_) {
        val[utility::conversions::to_string_t("league_id")] = ModelBase::toJson(leagueId_);
    }

    return val;
}
bool ShowInstanceReportRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ShowInstanceReportRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowInstanceReportRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowInstanceReportRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowInstanceReportRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ShowInstanceReportRequest::getLeagueId() const
{
    return leagueId_;
}

void ShowInstanceReportRequest::setLeagueId(const std::string& value)
{
    leagueId_ = value;
    leagueIdIsSet_ = true;
}

bool ShowInstanceReportRequest::leagueIdIsSet() const
{
    return leagueIdIsSet_;
}

void ShowInstanceReportRequest::unsetleagueId()
{
    leagueIdIsSet_ = false;
}

}
}
}
}
}


